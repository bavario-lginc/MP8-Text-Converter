#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void voiceToXML (char inputVoice, char *outputstr) {
    switch (inputVoice) {
        case 0x01:
            strncat(outputstr, "<voice value=\"Ballyhoo_Hello\" />", 32);
            break;
        case 0x02:
            strncat(outputstr, "<voice value=\"Ballyhoo_Howdy\" />", 32);
            break;
        case 0x03:
            strncat(outputstr, "<voice value=\"Ballyhoo_Welcome\" />", 34);
            break;
        case 0x04:
            strncat(outputstr, "<voice value=\"Ballyhoo_SeeYa\" />", 32);
            break;
        case 0x05:
            strncat(outputstr, "<voice value=\"Ballyhoo_Talk1\" />", 32);
            break;
        case 0x06:
            strncat(outputstr, "<voice value=\"Ballyhoo_Talk2\" />", 32);
            break;
        case 0x07:
            strncat(outputstr, "<voice value=\"Ballyhoo_Talk3\" />", 32);
            break;
        case 0x08:
            strncat(outputstr, "<voice value=\"Ballyhoo_AmIRight\" />", 35);
            break;
        case 0x09:
            strncat(outputstr, "<voice value=\"Ballyhoo_Hoho\" />", 31);
            break;
        case 0x0A:
            strncat(outputstr, "<voice value=\"Ballyhoo_Haha\" />", 31);
            break;
        case 0x0B:
            strncat(outputstr, "<voice value=\"Ballyhoo_Laughter\" />", 35);
            break;
        case 0x0C:
            strncat(outputstr, "<voice value=\"Ballyhoo_Ohh\" />", 30);
            break;
        case 0x0D:
            strncat(outputstr, "<voice value=\"Ballyhoo_BadaBoom\" />", 35);
            break;
        case 0x0E:
            strncat(outputstr, "<voice value=\"Ballyhoo_GoodLuck\" />", 35);
            break;
        case 0x0F:
            strncat(outputstr, "<voice value=\"Ballyhoo_Whoa\" />", 31);
            break;
        case 0x10:
            strncat(outputstr, "<voice value=\"BigTop_Hello\" />", 30);
            break;
        case 0x11:
            strncat(outputstr, "<voice value=\"BigTop_ByeBye\" />", 31);
            break;
        case 0x12:
            strncat(outputstr, "<voice value=\"BigTop_Talk1\" />", 30);
            break;
        case 0x13:
            strncat(outputstr, "<voice value=\"BigTop_Talk2\" />", 30);
            break;
        case 0x14:
            strncat(outputstr, "<voice value=\"BigTop_Talk3\" />", 30);
            break;
        case 0x15:
            strncat(outputstr, "<voice value=\"BigTop_AhhHaa\" />", 31);
            break;
        case 0x16:
            strncat(outputstr, "<voice value=\"BigTop_MmmHmm\" />", 31);
            break;
        case 0x17:
            strncat(outputstr, "<voice value=\"BigTop_LaughterAlt1\" />", 37);
            break;
        case 0x18:
            strncat(outputstr, "<voice value=\"BigTop_LaughterAlt2\" />", 37);
            break;
        case 0x19:
            strncat(outputstr, "<voice value=\"BigTop_Laughter\" />", 33);
            break;
        case 0x1A:
            strncat(outputstr, "<voice value=\"BigTop_Surprised\" />", 34);
            break;
        case 0x1B:
            strncat(outputstr, "<voice value=\"BigTop_LaughterAlt3\" />", 37);
            break;
        case 0x1C:
            strncat(outputstr, "<voice value=\"BigTop_LaughterAlt4\" />", 37);
            break;
        case 0x1D:
            strncat(outputstr, "<voice value=\"BigTop_GoodLuck\" />", 33);
            break;
        case 0x1E:
            strncat(outputstr, "<voice value=\"BigTop_Whoa\" />", 29);
            break;
        case 0x1F:
            strncat(outputstr, "<voice value=\"DK_Talk\" />", 25);
            break;
        case 0x20:
            strncat(outputstr, "<voice value=\"DK_Sad\" />", 24);
            break;
        case 0x21:
            strncat(outputstr, "<voice value=\"DK_Happy\" />", 26);
            break;
        case 0x22:
            strncat(outputstr, "<voice value=\"Bowser_Bwahahaha\" />", 34);
            break;
        case 0x23:
            strncat(outputstr, "<voice value=\"Bowser_Disappointed\" />", 37);
            break;
        case 0x24:
            strncat(outputstr, "<voice value=\"Bowser_DisappointedAlt\" />", 40);
            break;
        case 0x25:
            strncat(outputstr, "<voice value=\"Bowser_Roar\" />", 29);
            break;
        case 0x26:
            strncat(outputstr, "<voice value=\"Bowser_Blarrgh\" />", 32);
            break;
        case 0x27:
            strncat(outputstr, "<voice value=\"Bowser_Talk1\" />", 30);
            break;
        case 0x28:
            strncat(outputstr, "<voice value=\"Bowser_Talk2\" />", 30);
            break;
        case 0x29:
            strncat(outputstr, "<voice value=\"Bowser_Talk3\" />", 30);
            break;
        case 0x2A:
            strncat(outputstr, "<voice value=\"Bowser_Laughter\" />", 33);
            break;
        case 0x2B:
            strncat(outputstr, "<voice value=\"Bowser_Huh\" />", 28);
            break;
        case 0x2C:
            strncat(outputstr, "<voice value=\"Bowser_DoneFor\" />", 32);
            break;
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x51:
        case 0x52:
            strncat(outputstr, "<voice value=\"Beep\" />", 22);
            break;
        case 0x30:
            strncat(outputstr, "<voice value=\"ShyGuy_Talk\" />", 29);
            break;
        case 0x31:
            strncat(outputstr, "<voice value=\"ShyGuy_Sad\" />", 28);
            break;
        case 0x32:
            strncat(outputstr, "<voice value=\"ShyGuy_Happy\" />", 30);
            break;
        case 0x33:
            strncat(outputstr, "<voice value=\"Goomba_Talk\" />", 29);
            break;
        case 0x34:
            strncat(outputstr, "<voice value=\"Goomba_Sad\" />", 28);
            break;
        case 0x35:
            strncat(outputstr, "<voice value=\"Goomba_Happy\" />", 30);
            break;
        case 0x36:
            strncat(outputstr, "<voice value=\"Koopa_Talk\" />", 28);
            break;
        case 0x37:
            strncat(outputstr, "<voice value=\"Koopa_Sad\" />", 27);
            break;
        case 0x38:
            strncat(outputstr, "<voice value=\"Koopa_Happy\" />", 29);
            break;
        case 0x39:
            strncat(outputstr, "<voice value=\"Whomp\" />", 23);
            break;
        case 0x3A:
            strncat(outputstr, "<voice value=\"Thwomp\" />", 24);
            break;
        case 0x3B:
            strncat(outputstr, "<voice value=\"BobOmb\" />", 24);
            break;
        case 0x3C:
            strncat(outputstr, "<voice value=\"BobOmb_Alt\" />", 28);
            break;
        case 0x3D:
            strncat(outputstr, "<voice value=\"ChainChomp_Bark\" />", 33);
            break;
        case 0x3E:
            strncat(outputstr, "<voice value=\"Monkey_Talk\" />", 29);
            break;
        case 0x3F:
            strncat(outputstr, "<voice value=\"Monkey_Sad\" />", 28);
            break;
        case 0x40:
            strncat(outputstr, "<voice value=\"Kamek_Talk\" />", 28);
            break;
        case 0x41:
            strncat(outputstr, "<voice value=\"Kamek_Sad\" />", 27);
            break;
        case 0x42:
            strncat(outputstr, "<voice value=\"Toady_Talk\" />", 28);
            break;
        case 0x43:
            strncat(outputstr, "<voice value=\"Toady_Sad\" />", 27);
            break;
        case 0x44:
            strncat(outputstr, "<voice value=\"Unknown1\" />", 26);
            break;
        case 0x45:
            strncat(outputstr, "<voice value=\"SpearGuy_Talk\" />", 31);
            break;
        case 0x46:
            strncat(outputstr, "<voice value=\"SpearGuy_Sad\" />", 30);
            break;
        case 0x47:
            strncat(outputstr, "<voice value=\"Bandit_Talk\" />", 29);
            break;
        case 0x48:
            strncat(outputstr, "<voice value=\"Bandit_Sad\" />", 28);
            break;
        case 0x49:
            strncat(outputstr, "<voice value=\"Pianta_Talk\" />", 29);
            break;
        case 0x4A:
            strncat(outputstr, "<voice value=\"Pianta_Sad\" />", 28);
            break;
        case 0x4B:
            strncat(outputstr, "<voice value=\"CutePianta_Talk\" />", 33);
            break;
        case 0x4C:
            strncat(outputstr, "<voice value=\"CutePianta_Sad\" />", 32);
            break;
        case 0x4D:
            strncat(outputstr, "<voice value=\"Unknown2\" />", 26);
            break;
        case 0x4E:
            strncat(outputstr, "<voice value=\"Unknown3\" />", 26);
            break;
        case 0x4F:
            strncat(outputstr, "<voice value=\"CaptainGoombaAlt\" />", 34);
            break;
        case 0x50:
            strncat(outputstr, "<voice value=\"CaptainGoomba\" />", 31);
            break;
        case 0x53:
            strncat(outputstr, "<voice value=\"Dolphin_Talk\" />", 30);
            break;
        case 0x54:
            strncat(outputstr, "<voice value=\"Dolphin_Sad\" />", 29);
            break;
        case 0x55:
            strncat(outputstr, "<voice value=\"Mowz_Talk\" />", 27);
            break;
        case 0x56:
            strncat(outputstr, "<voice value=\"Mowz_Sad\" />", 26);
            break;
        case 0x57:
            strncat(outputstr, "<voice value=\"KingBoo_Talk\" />", 30);
            break;
        case 0x58:
        case 0x59:
            strncat(outputstr, "<voice value=\"KingBoo_Sad\" />", 29);
            break;
        case 0x5A:
            strncat(outputstr, "<voice value=\"RedBoo_Talk\" />", 29);
            break;
        case 0x5B:
            strncat(outputstr, "<voice value=\"RedBoo_Sad\" />", 28);
            break;
        case 0x5C:
            strncat(outputstr, "<voice value=\"Toadsworth_Talk\" />", 33);
            break;
        case 0x5D:
            strncat(outputstr, "<voice value=\"Toadsworth_Sad\" />", 32);
            break;
    }
}

void binToXMLString (unsigned char *mInputstr, char *outputstr) {
    bool mIsColorMode = false;
    bool mIsColorDefined = false;
    for (int i = 0; i < strlen((char*)mInputstr); i++) {
        switch (mInputstr[i]) {
            case 0x10:
                strncat(outputstr, " ", 1);
                break;
            case 0xC2:
                strncat(outputstr, "!", 1);
                break;
            case 0xC3:
                strncat(outputstr, "?", 1);
                break;
            case 0x0A:
                strncat(outputstr, "\n", 1);
                break;
            case 0x1B:
                strncat(outputstr, "\t", 1);
                break;
            case 0x3D:
                strncat(outputstr, "-", 1);
                break;
            case 0x5C:
                strncat(outputstr, "'", 1);
                break;
            case 0x85:
                strncat(outputstr, ".", 1);
                break;
            // Special chars
            case 0xFF:
                strncat(outputstr, "<pagebreak />\n", 14);
                break;
            case 0x1C:
                voiceToXML(mInputstr[i + 1], outputstr);
                i++;
                break;
            case 0x1E:
                if (mInputstr[i + 1] != 0x08) 
                    strncat(outputstr, "<color value=\"", 14);
                mIsColorMode = true;
                break;
            // Color modes
            case 0x01:
            case 0x0B:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "black\">", 7);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x02:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "blue\">", 6);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x03:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "red\">", 5);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x04:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "purple\">", 8);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x05:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "green\">", 7);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x06:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "cyan\">", 6);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x07:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "yellow\">", 8);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x09:
                if (!mIsColorMode) 
                    break;
                strncat(outputstr, "gray\">", 6);
                mIsColorDefined = true;
                mIsColorMode = false;
                break;
            case 0x08:
                printf("%i: Is White\n", i);
                if (!mIsColorMode) 
                    break;
                if (mIsColorDefined) 
                    strncat(outputstr, "</color>", 8);
                else 
                    strncat(outputstr, "<color value=\"white\">", 21);
                mIsColorDefined = false;
                mIsColorMode = false;
                break;
            // -----------
            default:
                strncat(outputstr, (char*)&mInputstr[i], 1);
                break;
        }
    }
}