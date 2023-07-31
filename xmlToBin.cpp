#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "pugixml/src/pugixml.hpp"
#define MAX_OUTPUT_LENGTH 4096
#define STRRESET "\033[0m"
#define FAIL "\033[31m"
#define NOTICE "\033[33m"
#define SUCCESS "\033[32m"

char mOutstrBin[MAX_OUTPUT_LENGTH];



void voiceToBin (const char *tagVal) {
    printf("Hello\n");
    strncat(mOutstrBin, (char*)0x1C, 1);
    if (tagVal == "Ballyhoo_Hello") 
        strncat(mOutstrBin, (char*)0x1, 1);
    if (tagVal == "Ballyhoo_Howdy") 
        strncat(mOutstrBin, (char*)0x2, 1);
    if (tagVal == "Ballyhoo_Welcome") 
        strncat(mOutstrBin, (char*)0x3, 1);
    if (tagVal == "Ballyhoo_SeeYa") 
        strncat(mOutstrBin, (char*)0x4, 1);
    if (tagVal == "Ballyhoo_Talk1") 
        strncat(mOutstrBin, (char*)0x5, 1);
    if (tagVal == "Ballyhoo_Talk2") 
        strncat(mOutstrBin, (char*)0x6, 1);
    if (tagVal == "Ballyhoo_Talk3") 
        strncat(mOutstrBin, (char*)0x7, 1);
    if (tagVal == "Ballyhoo_AmIRight") 
        strncat(mOutstrBin, (char*)0x8, 1);
    if (tagVal == "Ballyhoo_Hoho") 
        strncat(mOutstrBin, (char*)0x9, 1);
    if (tagVal == "Ballyhoo_Haha") 
        strncat(mOutstrBin, (char*)0xA, 1);
    if (tagVal == "Ballyhoo_Laughter") 
        strncat(mOutstrBin, (char*)0xB, 1);
    if (tagVal == "Ballyhoo_Ohh") 
        strncat(mOutstrBin, (char*)0xC, 1);
    if (tagVal == "Ballyhoo_BadaBoom") 
        strncat(mOutstrBin, (char*)0xD, 1);
    if (tagVal == "Ballyhoo_GoodLuck") 
        strncat(mOutstrBin, (char*)0xE, 1);
    if (tagVal == "Ballyhoo_Whoa") 
        strncat(mOutstrBin, (char*)0xF, 1);
    if (tagVal == "BigTop_Hello") 
        strncat(mOutstrBin, (char*)0x10, 1);
    if (tagVal == "BigTop_ByeBye") 
        strncat(mOutstrBin, (char*)0x11, 1);
    if (tagVal == "BigTop_Talk1") 
        strncat(mOutstrBin, (char*)0x12, 1);
    if (tagVal == "BigTop_Talk2") 
        strncat(mOutstrBin, (char*)0x13, 1);
    if (tagVal == "BigTop_Talk3") 
        strncat(mOutstrBin, (char*)0x14, 1);
    if (tagVal == "BigTop_AhhHaa") 
        strncat(mOutstrBin, (char*)0x15, 1);
    if (tagVal == "BigTop_MmmHmm") 
        strncat(mOutstrBin, (char*)0x16, 1);
    if (tagVal == "BigTop_LaughterAlt1") 
        strncat(mOutstrBin, (char*)0x17, 1);
    if (tagVal == "BigTop_LaughterAlt2") 
        strncat(mOutstrBin, (char*)0x18, 1);
    if (tagVal == "BigTop_Laughter") 
        strncat(mOutstrBin, (char*)0x19, 1);
    if (tagVal == "BigTop_Surprised") 
        strncat(mOutstrBin, (char*)0x1A, 1);
    if (tagVal == "BigTop_LaughterAlt3") 
        strncat(mOutstrBin, (char*)0x1B, 1);
    if (tagVal == "BigTop_LaughterAlt4") 
        strncat(mOutstrBin, (char*)0x1C, 1);
    if (tagVal == "BigTop_GoodLuck") 
        strncat(mOutstrBin, (char*)0x1D, 1);
    if (tagVal == "BigTop_Whoa") 
        strncat(mOutstrBin, (char*)0x1E, 1);
    if (tagVal == "DK_Talk") 
        strncat(mOutstrBin, (char*)0x1F, 1);
    if (tagVal == "DK_Sad") 
        strncat(mOutstrBin, (char*)0x20, 1);
    if (tagVal == "DK_Happy") 
        strncat(mOutstrBin, (char*)0x21, 1);
    if (tagVal == "Bowser_Bwahahaha") 
        strncat(mOutstrBin, (char*)0x22, 1);
    if (tagVal == "Bowser_Disappointed") 
        strncat(mOutstrBin, (char*)0x23, 1);
    if (tagVal == "Bowser_DisappointedAlt") 
        strncat(mOutstrBin, (char*)0x24, 1);
    if (tagVal == "Bowser_Roar") 
        strncat(mOutstrBin, (char*)0x25, 1);
    if (tagVal == "Bowser_Blarrgh") 
        strncat(mOutstrBin, (char*)0x26, 1);
    if (tagVal == "Bowser_Talk1") 
        strncat(mOutstrBin, (char*)0x27, 1);
    if (tagVal == "Bowser_Talk2") 
        strncat(mOutstrBin, (char*)0x28, 1);
    if (tagVal == "Bowser_Talk3") 
        strncat(mOutstrBin, (char*)0x29, 1);
    if (tagVal == "Bowser_Laughter") 
        strncat(mOutstrBin, (char*)0x2A, 1);
    if (tagVal == "Bowser_Huh") 
        strncat(mOutstrBin, (char*)0x2B, 1);
    if (tagVal == "Bowser_DoneFor") 
        strncat(mOutstrBin, (char*)0x2C, 1);
    if (tagVal == "Beep") 
        strncat(mOutstrBin, (char*)0x2D, 1);
    if (tagVal == "ShyGuy_Talk") 
        strncat(mOutstrBin, (char*)0x30, 1);
    if (tagVal == "ShyGuy_Sad") 
        strncat(mOutstrBin, (char*)0x31, 1);
    if (tagVal == "ShyGuy_Happy") 
        strncat(mOutstrBin, (char*)0x32, 1);
    if (tagVal == "Goomba_Talk") 
        strncat(mOutstrBin, (char*)0x33, 1);
    if (tagVal == "Goomba_Sad") 
        strncat(mOutstrBin, (char*)0x34, 1);
    if (tagVal == "Goomba_Happy") 
        strncat(mOutstrBin, (char*)0x35, 1);
    if (tagVal == "Koopa_Talk") 
        strncat(mOutstrBin, (char*)0x36, 1);
    if (tagVal == "Koopa_Sad") 
        strncat(mOutstrBin, (char*)0x37, 1);
    if (tagVal == "Koopa_Happy") 
        strncat(mOutstrBin, (char*)0x38, 1);
    if (tagVal == "Whomp") 
        strncat(mOutstrBin, (char*)0x39, 1);
    if (tagVal == "Thwomp") 
        strncat(mOutstrBin, (char*)0x3A, 1);
    if (tagVal == "BobOmb") 
        strncat(mOutstrBin, (char*)0x3B, 1);
    if (tagVal == "BobOmb_Alt") 
        strncat(mOutstrBin, (char*)0x3C, 1);
    if (tagVal == "ChainChomp_Bark") 
        strncat(mOutstrBin, (char*)0x3D, 1);
    if (tagVal == "Monkey_Talk") 
        strncat(mOutstrBin, (char*)0x3E, 1);
    if (tagVal == "Monkey_Sad") 
        strncat(mOutstrBin, (char*)0x3F, 1);
    if (tagVal == "Kamek_Talk") 
        strncat(mOutstrBin, (char*)0x40, 1);
    if (tagVal == "Kamek_Sad") 
        strncat(mOutstrBin, (char*)0x41, 1);
    if (tagVal == "Toady_Talk") 
        strncat(mOutstrBin, (char*)0x42, 1);
    if (tagVal == "Toady_Sad") 
        strncat(mOutstrBin, (char*)0x43, 1);
    if (tagVal == "Unknown1") 
        strncat(mOutstrBin, (char*)0x44, 1);
    if (tagVal == "SpearGuy_Talk") 
        strncat(mOutstrBin, (char*)0x45, 1);
    if (tagVal == "SpearGuy_Sad") 
        strncat(mOutstrBin, (char*)0x46, 1);
    if (tagVal == "Bandit_Talk") 
        strncat(mOutstrBin, (char*)0x47, 1);
    if (tagVal == "Bandit_Sad") 
        strncat(mOutstrBin, (char*)0x48, 1);
    if (tagVal == "Pianta_Talk") 
        strncat(mOutstrBin, (char*)0x49, 1);
    if (tagVal == "Pianta_Sad") 
        strncat(mOutstrBin, (char*)0x4A, 1);
    if (tagVal == "CutePianta_Talk") 
        strncat(mOutstrBin, (char*)0x4B, 1);
    if (tagVal == "CutePianta_Sad") 
        strncat(mOutstrBin, (char*)0x4C, 1);
    if (tagVal == "Unknown2") 
        strncat(mOutstrBin, (char*)0x4D, 1);
    if (tagVal == "Unknown3") 
        strncat(mOutstrBin, (char*)0x4E, 1);
    if (tagVal == "CaptainGoombaAlt") 
        strncat(mOutstrBin, (char*)0x4F, 1);
    if (tagVal == "CaptainGoomba") 
        strncat(mOutstrBin, (char*)0x50, 1);
    if (tagVal == "Dolphin_Talk") 
        strncat(mOutstrBin, (char*)0x53, 1);
    if (tagVal == "Dolphin_Sad") 
        strncat(mOutstrBin, (char*)0x54, 1);
    if (tagVal == "Mowz_Talk") 
        strncat(mOutstrBin, (char*)0x55, 1);
    if (tagVal == "Mowz_Sad") 
        strncat(mOutstrBin, (char*)0x56, 1);
    if (tagVal == "KingBoo_Talk") 
        strncat(mOutstrBin, (char*)0x57, 1);
    if (tagVal == "KingBoo_Sad") 
        strncat(mOutstrBin, (char*)0x58, 1);
    if (tagVal == "RedBoo_Talk") 
        strncat(mOutstrBin, (char*)0x5A, 1);
    if (tagVal == "RedBoo_Sad") 
        strncat(mOutstrBin, (char*)0x5B, 1);
    if (tagVal == "Toadsworth_Talk") 
        strncat(mOutstrBin, (char*)0x5C, 1);
    if (tagVal == "Toadsworth_Sad") 
        strncat(mOutstrBin, (char*)0x5D, 1);
}

void xmlToBinString (const char *filePath, char *outputstr) {
    pugi::xml_document doc;
    pugi::xml_parse_result inputDoc = doc.load_file(filePath);
    if (!inputDoc) {
        printf(FAIL "FATAL" STRRESET ": Failed to initialise XML.\nAbort.\n");
        exit(2);
    }
    for (pugi::xml_node curTag = doc.first_child(); curTag; curTag = curTag.next_sibling()) {
        if (!strcmp(curTag.name(), "voice")) 
            voiceToBin(curTag.attribute("value").value());
    }
    
    /*char delims[] = "<>";
    for (int i = 0; i < strlen((char*)mInputstr); i++) {
        switch (mInputstr[i]) {
            case '<':
                tagToString(strtok(mInputstr, delims));
                break;
            default:
                strncat(mOutstrBin, mInputstr[i], 1);
                break;
        }
    }*/
}