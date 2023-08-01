#include <stdio.h>
#include <string.h>
#include "xmlParser.cpp"
#define MAX_OUTPUT_LENGTH 4096
#define STRRESET "\033[0m"
#define FAIL "\033[31m"
#define NOTICE "\033[33m"
#define SUCCESS "\033[32m"

char voiceToBin (std::string tagVal) {
    if (tagVal == "Ballyhoo_Hello") 
        return 0x01;
    if (tagVal == "Ballyhoo_Howdy") 
        return 0x02;
    if (tagVal == "Ballyhoo_Welcome") 
        return 0x03;
    if (tagVal == "Ballyhoo_SeeYa") 
        return 0x04;
    if (tagVal == "Ballyhoo_Talk1") 
        return 0x05;
    if (tagVal == "Ballyhoo_Talk2") 
        return 0x06;
    if (tagVal == "Ballyhoo_Talk3") 
        return 0x07;
    if (tagVal == "Ballyhoo_AmIRight") 
        return 0x08;
    if (tagVal == "Ballyhoo_Hoho") 
        return 0x09;
    if (tagVal == "Ballyhoo_Haha") 
        return 0x0A;
    if (tagVal == "Ballyhoo_Laughter") 
        return 0x0B;
    if (tagVal == "Ballyhoo_Ohh") 
        return 0x0C;
    if (tagVal == "Ballyhoo_BadaBoom") 
        return 0x0D;
    if (tagVal == "Ballyhoo_GoodLuck") 
        return 0x0E;
    if (tagVal == "Ballyhoo_Whoa") 
        return 0x0F;
    if (tagVal == "BigTop_Hello") 
        return 0x10;
    if (tagVal == "BigTop_ByeBye") 
        return 0x11;
    if (tagVal == "BigTop_Talk1") 
        return 0x12;
    if (tagVal == "BigTop_Talk2") 
        return 0x13;
    if (tagVal == "BigTop_Talk3") 
        return 0x14;
    if (tagVal == "BigTop_AhhHaa") 
        return 0x15;
    if (tagVal == "BigTop_MmmHmm") 
        return 0x16;
    if (tagVal == "BigTop_LaughterAlt1") 
        return 0x17;
    if (tagVal == "BigTop_LaughterAlt2") 
        return 0x18;
    if (tagVal == "BigTop_Laughter") 
        return 0x19;
    if (tagVal == "BigTop_Surprised") 
        return 0x1A;
    if (tagVal == "BigTop_LaughterAlt3") 
        return 0x1B;
    if (tagVal == "BigTop_LaughterAlt4") 
        return 0x1C;
    if (tagVal == "BigTop_GoodLuck") 
        return 0x1D;
    if (tagVal == "BigTop_Whoa") 
        return 0x1E;
    if (tagVal == "DK_Talk") 
        return 0x1F;
    if (tagVal == "DK_Sad") 
        return 0x20;
    if (tagVal == "DK_Happy") 
        return 0x21;
    if (tagVal == "Bowser_Bwahahaha") 
        return 0x22;
    if (tagVal == "Bowser_Disappointed") 
        return 0x23;
    if (tagVal == "Bowser_DisappointedAlt") 
        return 0x24;
    if (tagVal == "Bowser_Roar") 
        return 0x25;
    if (tagVal == "Bowser_Blarrgh") 
        return 0x26;
    if (tagVal == "Bowser_Talk1") 
        return 0x27;
    if (tagVal == "Bowser_Talk2") 
        return 0x28;
    if (tagVal == "Bowser_Talk3") 
        return 0x29;
    if (tagVal == "Bowser_Laughter") 
        return 0x2A;
    if (tagVal == "Bowser_Huh") 
        return 0x2B;
    if (tagVal == "Bowser_DoneFor") 
        return 0x2C;
    if (tagVal == "Beep") 
        return 0x2D;
    if (tagVal == "ShyGuy_Talk") 
        return 0x30;
    if (tagVal == "ShyGuy_Sad") 
        return 0x31;
    if (tagVal == "ShyGuy_Happy") 
        return 0x32;
    if (tagVal == "Goomba_Talk") 
        return 0x33;
    if (tagVal == "Goomba_Sad") 
        return 0x34;
    if (tagVal == "Goomba_Happy") 
        return 0x35;
    if (tagVal == "Koopa_Talk") 
        return 0x36;
    if (tagVal == "Koopa_Sad") 
        return 0x37;
    if (tagVal == "Koopa_Happy") 
        return 0x38;
    if (tagVal == "Whomp") 
        return 0x39;
    if (tagVal == "Thwomp") 
        return 0x3A;
    if (tagVal == "BobOmb") 
        return 0x3B;
    if (tagVal == "BobOmb_Alt") 
        return 0x3C;
    if (tagVal == "ChainChomp_Bark") 
        return 0x3D;
    if (tagVal == "Monkey_Talk") 
        return 0x3E;
    if (tagVal == "Monkey_Sad") 
        return 0x3F;
    if (tagVal == "Kamek_Talk") 
        return 0x40;
    if (tagVal == "Kamek_Sad") 
        return 0x41;
    if (tagVal == "Toady_Talk") 
        return 0x42;
    if (tagVal == "Toady_Sad") 
        return 0x43;
    if (tagVal == "Unknown1") 
        return 0x44;
    if (tagVal == "SpearGuy_Talk") 
        return 0x45;
    if (tagVal == "SpearGuy_Sad") 
        return 0x46;
    if (tagVal == "Bandit_Talk") 
        return 0x47;
    if (tagVal == "Bandit_Sad") 
        return 0x48;
    if (tagVal == "Pianta_Talk") 
        return 0x49;
    if (tagVal == "Pianta_Sad") 
        return 0x4A;
    if (tagVal == "CutePianta_Talk") 
        return 0x4B;
    if (tagVal == "CutePianta_Sad") 
        return 0x4C;
    if (tagVal == "Unknown2") 
        return 0x4D;
    if (tagVal == "Unknown3") 
        return 0x4E;
    if (tagVal == "CaptainGoombaAlt") 
        return 0x4F;
    if (tagVal == "CaptainGoomba") 
        return 0x50;
    if (tagVal == "Dolphin_Talk") 
        return 0x53;
    if (tagVal == "Dolphin_Sad") 
        return 0x54;
    if (tagVal == "Mowz_Talk") 
        return 0x55;
    if (tagVal == "Mowz_Sad") 
        return 0x56;
    if (tagVal == "KingBoo_Talk") 
        return 0x57;
    if (tagVal == "KingBoo_Sad") 
        return 0x58;
    if (tagVal == "RedBoo_Talk") 
        return 0x5A;
    if (tagVal == "RedBoo_Sad") 
        return 0x5B;
    if (tagVal == "Toadsworth_Talk") 
        return 0x5C;
    if (tagVal == "Toadsworth_Sad") 
        return 0x5D;
	printf(FAIL "WHAT THE HELL" STRRESET "\n");
	exit(69);
}

void xmlToBinString (FILE *inputfile, char *outputstr) {
	char inputstr[MAX_OUTPUT_LENGTH];
	fread(inputstr, 1, sizeof(inputstr), inputfile);
	strcpy(outputstr, replaceXMLTagsWithBin(inputstr).data());
	// Replace rest of symbols
    for (int i = 0; i < strlen(outputstr); i++) {
        switch (outputstr[i]) {
            case ' ':
                outputstr[i] = 0x10;
                break;
            case '!':
                outputstr[i] = 0xC2;
                break;
            case '?':
                outputstr[i] = 0xC3;
                break;
            case '\n':
                outputstr[i] = 0x0A;
                break;
            case '\t':
                outputstr[i] = 0x1B;
                break;
            case '-':
                outputstr[i] = 0x3D;
                break;
            case '\'':
                outputstr[i] = 0x5C;
                break;
            case '.':
                outputstr[i] = 0x85;
                break;
		}
	}
}