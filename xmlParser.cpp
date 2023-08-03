#include <algorithm>
#include <iostream>
#include <string>
#include <regex>

char voiceToBin(std::string);
char colorToBin(std::string);
char iconToBin(std::string);

std::string strtok_str(std::string input) {
    char *inputChr = &input[0];
    inputChr = strtok(inputChr, "\"");
    return inputChr;
}

std::string replaceXMLTagsWithBin(const std::string& xmlString) {   
    std::string result = xmlString;
    // Pagebreaks
    size_t posOne = result.find("<pagebreak");
    while (posOne != -1) {
        size_t posTwo = result.find("/>", posOne);
        int valueLen = 10 + posTwo + 2;
        std::string replacementValue = {0xFF};
        result.replace(posOne, valueLen, replacementValue);
        posOne = result.find("<pagebreak");
    }
    // Unknowns
    posOne = result.find("<unknown>");
    while (posOne != -1) {
        size_t posTwo = result.find("</unknown>", posOne);
        result.replace(posOne, 9, "");
        std::string replacementValue = {0xFF};
        result.replace(posTwo, 10, replacementValue);
        posOne = result.find("<unknown>");
    }
    
    // Colors
    posOne = result.find("<color value=\"") + 14;
    while (posOne != 13) { // Lol
        size_t posTwo = result.find("/>", posOne);
        std::string valueStr = result.substr(posOne, posTwo - posOne);
        int valueLen = 14 + valueStr.length() + 2;
        std::string replacementValue = {0x1E, colorToBin(strtok_str(valueStr))};
        result.replace(posOne - 14, valueLen, replacementValue);
        posOne = result.find("<color value=\"") + 14;
    }
    // Voices
    posOne = result.find("<voice value=\"") + 14;
    while (posOne != 13) {
        size_t posTwo = result.find("/>", posOne);
        std::string valueStr = result.substr(posOne, posTwo - posOne);
        int valueLen = 14 + valueStr.length() + 2;
        std::string replacementValue = {0x1C, voiceToBin(strtok_str(valueStr))};
        result.replace(posOne - 14, valueLen, replacementValue);
        posOne = result.find("<voice value=\"") + 14;
    }
    // Icons
    posOne = result.find("<icon type=\"") + 12;
    while (posOne != 11) {
        size_t posTwo = result.find("/>", posOne);
        std::string valueStr = result.substr(posOne, posTwo - posOne);
        int valueLen = 12 + valueStr.length() + 2;
        std::string replacementValue = {0x0E, iconToBin(strtok_str(valueStr))};
        result.replace(posOne - 12, valueLen, replacementValue);
        posOne = result.find("<icon type=\"") + 12;
    }
    return result;
}

/*
std::regex tagWithValueRegex("<(\\w+)\\s+value=\"(.*?)\"\\s*\\/>");
while (std::regex_search(result, match, tagWithValueRegex)) {
    if (match.size() >= 3) {
        std::string tagName = match[1].str();
        std::string attributeValue = match[2].str();
        // Replace the entire match with the attribute value
        if (tagName == "voice") {
            std::string replacement = {0x1C, voiceToBin(attributeValue)};
            result = std::regex_replace(result, tagWithValueRegex, replacement);
        } else if (tagName == "color") {
            std::string replacement = {0x1E, colorToBin(attributeValue)};
            result = std::regex_replace(result, tagWithValueRegex, replacement);
        }
    }
    printf("\"%s\"\n", match[3].str().c_str());
}
*/