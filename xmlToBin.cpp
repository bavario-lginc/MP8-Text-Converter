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

void voiceToBin (std::string tagVal, char *mOutstrBin) {
    strncat(mOutstrBin, "", 1);
if (tagVal == "Ballyhoo_Hello") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Howdy") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Welcome") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_SeeYa") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Talk1") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Talk2") 
		strncat(mOutstrBin, "", 1);
    if (tagVal == "Ballyhoo_Talk3") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_AmIRight") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Hoho") 
		strncat(mOutstrBin, "\t", 1);
	if (tagVal == "Ballyhoo_Haha") 
		strncat(mOutstrBin, "\n", 1);
	if (tagVal == "Ballyhoo_Laughter") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Ohh") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_BadaBoom") 
		strncat(mOutstrBin, "\r", 1);
	if (tagVal == "Ballyhoo_GoodLuck") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "Ballyhoo_Whoa") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Hello") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_ByeBye") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Talk1") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Talk2") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Talk3") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_AhhHaa") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_MmmHmm") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_LaughterAlt1") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_LaughterAlt2") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Laughter") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Surprised") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_LaughterAlt3") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_LaughterAlt4") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_GoodLuck") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "BigTop_Whoa") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "DK_Talk") 
		strncat(mOutstrBin, "", 1);
	if (tagVal == "DK_Sad") 
		strncat(mOutstrBin, " ", 1);
	if (tagVal == "DK_Happy") 
        strncat(mOutstrBin, "!", 1);
	if (tagVal == "Bowser_Bwahahaha") 
		strncat(mOutstrBin, "\"", 1);
	if (tagVal == "Bowser_Disappointed") 
		strncat(mOutstrBin, "#", 1);
	if (tagVal == "Bowser_DisappointedAlt") 
		strncat(mOutstrBin, "$", 1);
	if (tagVal == "Bowser_Roar") 
		strncat(mOutstrBin, "%", 1);
	if (tagVal == "Bowser_Blarrgh") 
		strncat(mOutstrBin, "&", 1);
    if (tagVal == "Bowser_Talk1") 
		strncat(mOutstrBin, "'", 1);
	if (tagVal == "Bowser_Talk2") 
		strncat(mOutstrBin, "(", 1);
	if (tagVal == "Bowser_Talk3") 
		strncat(mOutstrBin, ")", 1);
	if (tagVal == "Bowser_Laughter") 
		strncat(mOutstrBin, "*", 1);
	if (tagVal == "Bowser_Huh") 
		strncat(mOutstrBin, "+", 1);
	if (tagVal == "Bowser_DoneFor") 
		strncat(mOutstrBin, ",", 1);
	if (tagVal == "Beep") 
		strncat(mOutstrBin, "-", 1);
	if (tagVal == "ShyGuy_Talk") 
		strncat(mOutstrBin, "0", 1);
	if (tagVal == "ShyGuy_Sad") 
		strncat(mOutstrBin, "1", 1);
	if (tagVal == "ShyGuy_Happy") 
		strncat(mOutstrBin, "2", 1);
	if (tagVal == "Goomba_Talk") 
		strncat(mOutstrBin, "3", 1);
	if (tagVal == "Goomba_Sad") 
		strncat(mOutstrBin, "4", 1);
	if (tagVal == "Goomba_Happy") 
		strncat(mOutstrBin, "5", 1);
	if (tagVal == "Koopa_Talk") 
		strncat(mOutstrBin, "6", 1);
	if (tagVal == "Koopa_Sad") 
		strncat(mOutstrBin, "7", 1);
	if (tagVal == "Koopa_Happy") 
		strncat(mOutstrBin, "8", 1);
	if (tagVal == "Whomp") 
		strncat(mOutstrBin, "9", 1);
	if (tagVal == "Thwomp") 
		strncat(mOutstrBin, ":", 1);
	if (tagVal == "BobOmb") 
		strncat(mOutstrBin, ";", 1);
	if (tagVal == "BobOmb_Alt") 
		strncat(mOutstrBin, "<", 1);
	if (tagVal == "ChainChomp_Bark") 
		strncat(mOutstrBin, "=", 1);
	if (tagVal == "Monkey_Talk") 
		strncat(mOutstrBin, ">", 1);
	if (tagVal == "Monkey_Sad") 
		strncat(mOutstrBin, "?", 1);
	if (tagVal == "Kamek_Talk") 
		strncat(mOutstrBin, "@", 1);
	if (tagVal == "Kamek_Sad") 
		strncat(mOutstrBin, "A", 1);
	if (tagVal == "Toady_Talk") 
		strncat(mOutstrBin, "B", 1);
	if (tagVal == "Toady_Sad") 
		strncat(mOutstrBin, "C", 1);
	if (tagVal == "Unknown1") 
		strncat(mOutstrBin, "D", 1);
	if (tagVal == "SpearGuy_Talk") 
		strncat(mOutstrBin, "E", 1);
	if (tagVal == "SpearGuy_Sad") 
		strncat(mOutstrBin, "F", 1);
	if (tagVal == "Bandit_Talk") 
		strncat(mOutstrBin, "G", 1);
	if (tagVal == "Bandit_Sad") 
		strncat(mOutstrBin, "H", 1);
	if (tagVal == "Pianta_Talk") 
		strncat(mOutstrBin, "I", 1);
	if (tagVal == "Pianta_Sad") 
		strncat(mOutstrBin, "J", 1);
	if (tagVal == "CutePianta_Talk") 
		strncat(mOutstrBin, "K", 1);
	if (tagVal == "CutePianta_Sad") 
		strncat(mOutstrBin, "L", 1);
	if (tagVal == "Unknown2") 
		strncat(mOutstrBin, "M", 1);
	if (tagVal == "Unknown3") 
		strncat(mOutstrBin, "N", 1);
	if (tagVal == "CaptainGoombaAlt") 
		strncat(mOutstrBin, "O", 1);
	if (tagVal == "CaptainGoomba") 
		strncat(mOutstrBin, "P", 1);
	if (tagVal == "Dolphin_Talk") 
		strncat(mOutstrBin, "S", 1);
	if (tagVal == "Dolphin_Sad") 
		strncat(mOutstrBin, "T", 1);
	if (tagVal == "Mowz_Talk") 
		strncat(mOutstrBin, "U", 1);
	if (tagVal == "Mowz_Sad") 
		strncat(mOutstrBin, "V", 1);
	if (tagVal == "KingBoo_Talk") 
		strncat(mOutstrBin, "W", 1);
	if (tagVal == "KingBoo_Sad") 
		strncat(mOutstrBin, "X", 1);
	if (tagVal == "RedBoo_Talk") 
		strncat(mOutstrBin, "Z", 1);
	if (tagVal == "RedBoo_Sad") 
		strncat(mOutstrBin, "[", 1);
	if (tagVal == "Toadsworth_Talk") 
		strncat(mOutstrBin, "\\", 1);
	if (tagVal == "Toadsworth_Sad") 
		strncat(mOutstrBin, "]", 1);
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
            voiceToBin(curTag.attribute("value").value(), outputstr);
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