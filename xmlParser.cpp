#include <algorithm>
#include <iostream>
#include <string>
#include <regex>

char voiceToBin(std::string);

std::string replaceXMLTagsWithBin(const std::string& xmlString) {   
    // Regular expression to match XML tags with the "value" attribute
    std::regex tagWithValueRegex("<(\\w+)\\s+value=\"(.*?)\"\\s*\\/>");

    std::string result = xmlString;
    std::smatch match;

    // Find all matches of the regex in the XML string
    while (std::regex_search(result, match, tagWithValueRegex)) {
        if (match.size() >= 3) {
            // Extract the tag name and attribute value
            std::string tagName = match[1].str();
            std::string attributeValue = match[2].str();

            // Replace the entire match with the attribute value
            std::string replacement = {0x1C, voiceToBin(attributeValue)};
            result = std::regex_replace(result, tagWithValueRegex, replacement);
        }
    }

    return result;
}