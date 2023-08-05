#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void colorToXML (unsigned char inputColor, FILE *outputfile) {
    switch (inputColor) {
        case 0x01:
        case 0x0B:
            fputs("<color value=\"black\" />", outputfile);
            break;
        case 0x02:
            fputs("<color value=\"blue\" />", outputfile);
            break;
        case 0x03:
            fputs("<color value=\"red\" />", outputfile);
            break;
        case 0x04:
            fputs("<color value=\"purple\" />", outputfile);
            break;
        case 0x05:
            fputs("<color value=\"green\" />", outputfile);
            break;
        case 0x06:
            fputs("<color value=\"cyan\" />", outputfile);
            break;
        case 0x07:
            fputs("<color value=\"yellow\" />", outputfile);
            break;
        case 0x08:
            fputs("<color value=\"white\" />", outputfile);
            break;
        case 0x09:
            fputs("<color value=\"gray\" />", outputfile);
            break;
    }
}

void voiceToXML (unsigned char inputVoice, FILE *outputfile) {
    switch (inputVoice) {
        case 0x01:
            fputs("<voice value=\"Ballyhoo_Hello\" />", outputfile);
            break;
        case 0x02:
            fputs("<voice value=\"Ballyhoo_Howdy\" />", outputfile);
            break;
        case 0x03:
            fputs("<voice value=\"Ballyhoo_Welcome\" />", outputfile);
            break;
        case 0x04:
            fputs("<voice value=\"Ballyhoo_SeeYa\" />", outputfile);
            break;
        case 0x05:
            fputs("<voice value=\"Ballyhoo_Talk1\" />", outputfile);
            break;
        case 0x06:
            fputs("<voice value=\"Ballyhoo_Talk2\" />", outputfile);
            break;
        case 0x07:
            fputs("<voice value=\"Ballyhoo_Talk3\" />", outputfile);
            break;
        case 0x08:
            fputs("<voice value=\"Ballyhoo_AmIRight\" />", outputfile);
            break;
        case 0x09:
            fputs("<voice value=\"Ballyhoo_Hoho\" />", outputfile);
            break;
        case 0x0A:
            fputs("<voice value=\"Ballyhoo_Haha\" />", outputfile);
            break;
        case 0x0B:
            fputs("<voice value=\"Ballyhoo_Laughter\" />", outputfile);
            break;
        case 0x0C:
            fputs("<voice value=\"Ballyhoo_Ohh\" />", outputfile);
            break;
        case 0x0D:
            fputs("<voice value=\"Ballyhoo_BadaBoom\" />", outputfile);
            break;
        case 0x0E:
            fputs("<voice value=\"Ballyhoo_GoodLuck\" />", outputfile);
            break;
        case 0x0F:
            fputs("<voice value=\"Ballyhoo_Whoa\" />", outputfile);
            break;
        case 0x10:
            fputs("<voice value=\"BigTop_Hello\" />", outputfile);
            break;
        case 0x11:
            fputs("<voice value=\"BigTop_ByeBye\" />", outputfile);
            break;
        case 0x12:
            fputs("<voice value=\"BigTop_Talk1\" />", outputfile);
            break;
        case 0x13:
            fputs("<voice value=\"BigTop_Talk2\" />", outputfile);
            break;
        case 0x14:
            fputs("<voice value=\"BigTop_Talk3\" />", outputfile);
            break;
        case 0x15:
            fputs("<voice value=\"BigTop_AhhHaa\" />", outputfile);
            break;
        case 0x16:
            fputs("<voice value=\"BigTop_MmmHmm\" />", outputfile);
            break;
        case 0x17:
            fputs("<voice value=\"BigTop_LaughterAlt1\" />", outputfile);
            break;
        case 0x18:
            fputs("<voice value=\"BigTop_LaughterAlt2\" />", outputfile);
            break;
        case 0x19:
            fputs("<voice value=\"BigTop_Laughter\" />", outputfile);
            break;
        case 0x1A:
            fputs("<voice value=\"BigTop_Surprised\" />", outputfile);
            break;
        case 0x1B:
            fputs("<voice value=\"BigTop_LaughterAlt3\" />", outputfile);
            break;
        case 0x1C:
            fputs("<voice value=\"BigTop_LaughterAlt4\" />", outputfile);
            break;
        case 0x1D:
            fputs("<voice value=\"BigTop_GoodLuck\" />", outputfile);
            break;
        case 0x1E:
            fputs("<voice value=\"BigTop_Whoa\" />", outputfile);
            break;
        case 0x1F:
            fputs("<voice value=\"DK_Talk\" />", outputfile);
            break;
        case 0x20:
            fputs("<voice value=\"DK_Sad\" />", outputfile);
            break;
        case 0x21:
            fputs("<voice value=\"DK_Happy\" />", outputfile);
            break;
        case 0x22:
            fputs("<voice value=\"Bowser_Bwahahaha\" />", outputfile);
            break;
        case 0x23:
            fputs("<voice value=\"Bowser_Disappointed\" />", outputfile);
            break;
        case 0x24:
            fputs("<voice value=\"Bowser_DisappointedAlt\" />", outputfile);
            break;
        case 0x25:
            fputs("<voice value=\"Bowser_Roar\" />", outputfile);
            break;
        case 0x26:
            fputs("<voice value=\"Bowser_Blarrgh\" />", outputfile);
            break;
        case 0x27:
            fputs("<voice value=\"Bowser_Talk1\" />", outputfile);
            break;
        case 0x28:
            fputs("<voice value=\"Bowser_Talk2\" />", outputfile);
            break;
        case 0x29:
            fputs("<voice value=\"Bowser_Talk3\" />", outputfile);
            break;
        case 0x2A:
            fputs("<voice value=\"Bowser_Laughter\" />", outputfile);
            break;
        case 0x2B:
            fputs("<voice value=\"Bowser_Huh\" />", outputfile);
            break;
        case 0x2C:
            fputs("<voice value=\"Bowser_DoneFor\" />", outputfile);
            break;
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x51:
        case 0x52:
            fputs("<voice value=\"Beep\" />", outputfile);
            break;
        case 0x30:
            fputs("<voice value=\"ShyGuy_Talk\" />", outputfile);
            break;
        case 0x31:
            fputs("<voice value=\"ShyGuy_Sad\" />", outputfile);
            break;
        case 0x32:
            fputs("<voice value=\"ShyGuy_Happy\" />", outputfile);
            break;
        case 0x33:
            fputs("<voice value=\"Goomba_Talk\" />", outputfile);
            break;
        case 0x34:
            fputs("<voice value=\"Goomba_Sad\" />", outputfile);
            break;
        case 0x35:
            fputs("<voice value=\"Goomba_Happy\" />", outputfile);
            break;
        case 0x36:
            fputs("<voice value=\"Koopa_Talk\" />", outputfile);
            break;
        case 0x37:
            fputs("<voice value=\"Koopa_Sad\" />", outputfile);
            break;
        case 0x38:
            fputs("<voice value=\"Koopa_Happy\" />", outputfile);
            break;
        case 0x39:
            fputs("<voice value=\"Whomp\" />", outputfile);
            break;
        case 0x3A:
            fputs("<voice value=\"Thwomp\" />", outputfile);
            break;
        case 0x3B:
            fputs("<voice value=\"BobOmb\" />", outputfile);
            break;
        case 0x3C:
            fputs("<voice value=\"BobOmb_Alt\" />", outputfile);
            break;
        case 0x3D:
            fputs("<voice value=\"ChainChomp_Bark\" />", outputfile);
            break;
        case 0x3E:
            fputs("<voice value=\"Monkey_Talk\" />", outputfile);
            break;
        case 0x3F:
            fputs("<voice value=\"Monkey_Sad\" />", outputfile);
            break;
        case 0x40:
            fputs("<voice value=\"Kamek_Talk\" />", outputfile);
            break;
        case 0x41:
            fputs("<voice value=\"Kamek_Sad\" />", outputfile);
            break;
        case 0x42:
            fputs("<voice value=\"Toady_Talk\" />", outputfile);
            break;
        case 0x43:
            fputs("<voice value=\"Toady_Sad\" />", outputfile);
            break;
        case 0x44:
            fputs("<voice value=\"Unknown1\" />", outputfile);
            break;
        case 0x45:
            fputs("<voice value=\"SpearGuy_Talk\" />", outputfile);
            break;
        case 0x46:
            fputs("<voice value=\"SpearGuy_Sad\" />", outputfile);
            break;
        case 0x47:
            fputs("<voice value=\"Bandit_Talk\" />", outputfile);
            break;
        case 0x48:
            fputs("<voice value=\"Bandit_Sad\" />", outputfile);
            break;
        case 0x49:
            fputs("<voice value=\"Pianta_Talk\" />", outputfile);
            break;
        case 0x4A:
            fputs("<voice value=\"Pianta_Sad\" />", outputfile);
            break;
        case 0x4B:
            fputs("<voice value=\"CutePianta_Talk\" />", outputfile);
            break;
        case 0x4C:
            fputs("<voice value=\"CutePianta_Sad\" />", outputfile);
            break;
        case 0x4D:
            fputs("<voice value=\"Unknown2\" />", outputfile);
            break;
        case 0x4E:
            fputs("<voice value=\"Unknown3\" />", outputfile);
            break;
        case 0x4F:
            fputs("<voice value=\"CaptainGoombaAlt\" />", outputfile);
            break;
        case 0x50:
            fputs("<voice value=\"CaptainGoomba\" />", outputfile);
            break;
        case 0x53:
            fputs("<voice value=\"Dolphin_Talk\" />", outputfile);
            break;
        case 0x54:
            fputs("<voice value=\"Dolphin_Sad\" />", outputfile);
            break;
        case 0x55:
            fputs("<voice value=\"Mowz_Talk\" />", outputfile);
            break;
        case 0x56:
            fputs("<voice value=\"Mowz_Sad\" />", outputfile);
            break;
        case 0x57:
            fputs("<voice value=\"KingBoo_Talk\" />", outputfile);
            break;
        case 0x58:
        case 0x59:
            fputs("<voice value=\"KingBoo_Sad\" />", outputfile);
            break;
        case 0x5A:
            fputs("<voice value=\"RedBoo_Talk\" />", outputfile);
            break;
        case 0x5B:
            fputs("<voice value=\"RedBoo_Sad\" />", outputfile);
            break;
        case 0x5C:
            fputs("<voice value=\"Toadsworth_Talk\" />", outputfile);
            break;
        case 0x5D:
            fputs("<voice value=\"Toadsworth_Sad\" />", outputfile);
            break;
    }
}

void iconToXML (unsigned char inputIcon, FILE *outputfile) {
    switch (inputIcon) {
        case 0x01:
            fputs("<icon type=\"LeftArrow\" />", outputfile);
            break;
        case 0x02:
            fputs("<icon type=\"RightArrow\" />", outputfile);
            break;
        case 0x03:
            fputs("<icon type=\"UpArrow\" />", outputfile);
            break;
        case 0x04:
            fputs("<icon type=\"DownArrow\" />", outputfile);
            break;
        case 0x05:
            fputs("<icon type=\"LeftRightArrow\" />", outputfile);
            break;
        case 0x06:
            fputs("<icon type=\"UpDownArrow\" />", outputfile);
            break;
        case 0x07:
            fputs("<icon type=\"WiiRemote\" />", outputfile);
            break;
        case 0x08:
            fputs("<icon type=\"AButton\" />", outputfile);
            break;
        case 0x09:
            fputs("<icon type=\"BButton\" />", outputfile);
            break;
        case 0x0A:
            fputs("<icon type=\"1Button\" />", outputfile);
            break;
        case 0x0B:
            fputs("<icon type=\"2Button\" />", outputfile);
            break;
        case 0x0C:
            fputs("<icon type=\"PlusButton\" />", outputfile);
            break;
        case 0x0D:
            fputs("<icon type=\"MinusButton\" />", outputfile);
            break;
        case 0x0E:
            fputs("<icon type=\"PowerButton\" />", outputfile);
            break;
        case 0x0F:
            fputs("<icon type=\"DPad\" />", outputfile);
            break;
        case 0x10:
            fputs("<icon type=\"HomeButton\" />", outputfile);
            break;
        case 0x11:
            fputs("<icon type=\"SquarePlusButton\" />", outputfile);
            break;
        case 0x12:
            fputs("<icon type=\"Nunchuck\" />", outputfile);
            break;
        case 0x13:
            fputs("<icon type=\"CButton\" />", outputfile);
            break;
        case 0x14:
            fputs("<icon type=\"ZButton\" />", outputfile);
            break;
        case 0x15:
            fputs("<icon type=\"NunchuckStick\" />", outputfile);
            break;
        case 0x16:
            fputs("<icon type=\"Star\" />", outputfile);
            break;
        case 0x17:
            fputs("<icon type=\"Coin\" />", outputfile);
            break;
        case 0x18:
            fputs("<icon type=\"AButtonBlink\" />", outputfile);
            break;
        case 0x19:
            fputs("<icon type=\"AButtonBlinkFloatLeft\" />", outputfile);
            break;
        case 0x1A:
            fputs("<icon type=\"P1 Hand\" />", outputfile);
            break;
        case 0x1B:
            fputs("<icon type=\"ButtonHover\" />", outputfile);
            break;
        case 0x1C:
            fputs("<icon type=\"LongButtonHover\" />", outputfile);
            break;
    }
}

void addToStr (unsigned char current, FILE *outputfile) {
    switch (current) {
        // Umlauts and probably more missing!
        case 0x10:
            fputc(' ', outputfile);
            break;
        case 0xC2:
            fputc('!', outputfile);
            break;
        case 0xC3:
            fputc('?', outputfile);
            break;
        case 0x0A:
            fputc('\n', outputfile);
            break;
        case 0x1B:
            fputc('\t', outputfile);
            break;
        case 0x3D:
            fputc('-', outputfile);
            break;
        case 0x5C:
            fputc('\'', outputfile);
            break;
        case 0x85:
            fputc('.', outputfile);
            break;
        case 0x5F:
            fputc('/', outputfile);
            break;
        // -------------
        default:
            fputc(current, outputfile);
            break;
    }
}

void binToXMLString (FILE *mInput, FILE *outputfile) {
    bool isWaitingForFF = false;
    char numSections[4];
    fgets(numSections, 4, mInput);
    fseek(mInput, atoi(numSections) * 4 + 4, SEEK_SET);
    while (true) {
        fgets(numSections, 4, mInput);
        fseek(mInput, atoi(numSections) * 4 + 8, SEEK_CUR);
        fputs("<section>\n", outputfile);
        char current;
        while ((current = fgetc(mInput)) != EOF) {
            if (current == 0x0E)
                iconToXML(fgetc(mInput), outputfile);
            else if (current == 0x1C) 
                voiceToXML(fgetc(mInput), outputfile);
            else if (current == 0x1E) 
                colorToXML(fgetc(mInput), outputfile);
            
            /* NULL + FF a few bytes later = next message entry
               NULL + No FF = message data for next section */
            else if (current == '\0') 
                isWaitingForFF = true;
            else if (current == 0xFF) {
                isWaitingForFF = false;
                fputs("<pagebreak />", outputfile);
            } else if (isWaitingForFF) {
                isWaitingForFF = false;
                fputs("</section>\n", outputfile);
                fseek(mInput, -3, SEEK_CUR); // Addresses are 4 bytes long
                continue;
            } else 
                addToStr(current, outputfile);
        }
        // Reached EOF
        break;
    }
}