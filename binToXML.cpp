#include <stdio.h>
#include <stdbool.h>
#include <string.h>

unsigned int convertToLittleEndian(unsigned int value) {
    return ((value >> 24) & 0xFF) | ((value >> 8) & 0xFF00) | ((value << 8) & 0xFF0000) | ((value << 24) & 0xFF000000);
}

void colorToXML (unsigned char inputColor, FILE *outputfile) {
    switch (inputColor) {
        case 0x01:
        case 0x0B:
            fputs("<color black>", outputfile);
            break;
        case 0x02:
            fputs("<color blue>", outputfile);
            break;
        case 0x03:
            fputs("<color red>", outputfile);
            break;
        case 0x04:
            fputs("<color purple>", outputfile);
            break;
        case 0x05:
            fputs("<color green>", outputfile);
            break;
        case 0x06:
            fputs("<color cyan>", outputfile);
            break;
        case 0x07:
            fputs("<color yellow>", outputfile);
            break;
        case 0x08:
            fputs("<color white>", outputfile);
            break;
        case 0x09:
            fputs("<color gray>", outputfile);
            break;
    }
}

void voiceToXML (unsigned char inputVoice, FILE *outputfile) {
    switch (inputVoice) {
        case 0x01:
            fputs("<voice Ballyhoo_Hello>", outputfile);
            break;
        case 0x02:
            fputs("<voice Ballyhoo_Howdy>", outputfile);
            break;
        case 0x03:
            fputs("<voice Ballyhoo_Welcome>", outputfile);
            break;
        case 0x04:
            fputs("<voice Ballyhoo_SeeYa>", outputfile);
            break;
        case 0x05:
            fputs("<voice Ballyhoo_Talk1>", outputfile);
            break;
        case 0x06:
            fputs("<voice Ballyhoo_Talk2>", outputfile);
            break;
        case 0x07:
            fputs("<voice Ballyhoo_Talk3>", outputfile);
            break;
        case 0x08:
            fputs("<voice Ballyhoo_AmIRight>", outputfile);
            break;
        case 0x09:
            fputs("<voice Ballyhoo_Hoho>", outputfile);
            break;
        case 0x0A:
            fputs("<voice Ballyhoo_Haha>", outputfile);
            break;
        case 0x0B:
            fputs("<voice Ballyhoo_Laughter>", outputfile);
            break;
        case 0x0C:
            fputs("<voice Ballyhoo_Ohh>", outputfile);
            break;
        case 0x0D:
            fputs("<voice Ballyhoo_BadaBoom>", outputfile);
            break;
        case 0x0E:
            fputs("<voice Ballyhoo_GoodLuck>", outputfile);
            break;
        case 0x0F:
            fputs("<voice Ballyhoo_Whoa>", outputfile);
            break;
        case 0x10:
            fputs("<voice BigTop_Hello>", outputfile);
            break;
        case 0x11:
            fputs("<voice BigTop_ByeBye>", outputfile);
            break;
        case 0x12:
            fputs("<voice BigTop_Talk1>", outputfile);
            break;
        case 0x13:
            fputs("<voice BigTop_Talk2>", outputfile);
            break;
        case 0x14:
            fputs("<voice BigTop_Talk3>", outputfile);
            break;
        case 0x15:
            fputs("<voice BigTop_AhhHaa>", outputfile);
            break;
        case 0x16:
            fputs("<voice BigTop_MmmHmm>", outputfile);
            break;
        case 0x17:
            fputs("<voice BigTop_LaughterAlt1>", outputfile);
            break;
        case 0x18:
            fputs("<voice BigTop_LaughterAlt2>", outputfile);
            break;
        case 0x19:
            fputs("<voice BigTop_Laughter>", outputfile);
            break;
        case 0x1A:
            fputs("<voice BigTop_Surprised>", outputfile);
            break;
        case 0x1B:
            fputs("<voice BigTop_LaughterAlt3>", outputfile);
            break;
        case 0x1C:
            fputs("<voice BigTop_LaughterAlt4>", outputfile);
            break;
        case 0x1D:
            fputs("<voice BigTop_GoodLuck>", outputfile);
            break;
        case 0x1E:
            fputs("<voice BigTop_Whoa>", outputfile);
            break;
        case 0x1F:
            fputs("<voice DK_Talk>", outputfile);
            break;
        case 0x20:
            fputs("<voice DK_Sad>", outputfile);
            break;
        case 0x21:
            fputs("<voice DK_Happy>", outputfile);
            break;
        case 0x22:
            fputs("<voice Bowser_Bwahahaha>", outputfile);
            break;
        case 0x23:
            fputs("<voice Bowser_Disappointed>", outputfile);
            break;
        case 0x24:
            fputs("<voice Bowser_DisappointedAlt>", outputfile);
            break;
        case 0x25:
            fputs("<voice Bowser_Roar>", outputfile);
            break;
        case 0x26:
            fputs("<voice Bowser_Blarrgh>", outputfile);
            break;
        case 0x27:
            fputs("<voice Bowser_Talk1>", outputfile);
            break;
        case 0x28:
            fputs("<voice Bowser_Talk2>", outputfile);
            break;
        case 0x29:
            fputs("<voice Bowser_Talk3>", outputfile);
            break;
        case 0x2A:
            fputs("<voice Bowser_Laughter>", outputfile);
            break;
        case 0x2B:
            fputs("<voice Bowser_Huh>", outputfile);
            break;
        case 0x2C:
            fputs("<voice Bowser_DoneFor>", outputfile);
            break;
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x51:
        case 0x52:
            fputs("<voice Beep>", outputfile);
            break;
        case 0x30:
            fputs("<voice ShyGuy_Talk>", outputfile);
            break;
        case 0x31:
            fputs("<voice ShyGuy_Sad>", outputfile);
            break;
        case 0x32:
            fputs("<voice ShyGuy_Happy>", outputfile);
            break;
        case 0x33:
            fputs("<voice Goomba_Talk>", outputfile);
            break;
        case 0x34:
            fputs("<voice Goomba_Sad>", outputfile);
            break;
        case 0x35:
            fputs("<voice Goomba_Happy>", outputfile);
            break;
        case 0x36:
            fputs("<voice Koopa_Talk>", outputfile);
            break;
        case 0x37:
            fputs("<voice Koopa_Sad>", outputfile);
            break;
        case 0x38:
            fputs("<voice Koopa_Happy>", outputfile);
            break;
        case 0x39:
            fputs("<voice Whomp>", outputfile);
            break;
        case 0x3A:
            fputs("<voice Thwomp>", outputfile);
            break;
        case 0x3B:
            fputs("<voice BobOmb>", outputfile);
            break;
        case 0x3C:
            fputs("<voice BobOmb_Alt>", outputfile);
            break;
        case 0x3D:
            fputs("<voice ChainChomp_Bark>", outputfile);
            break;
        case 0x3E:
            fputs("<voice Monkey_Talk>", outputfile);
            break;
        case 0x3F:
            fputs("<voice Monkey_Sad>", outputfile);
            break;
        case 0x40:
            fputs("<voice Kamek_Talk>", outputfile);
            break;
        case 0x41:
            fputs("<voice Kamek_Sad>", outputfile);
            break;
        case 0x42:
            fputs("<voice Toady_Talk>", outputfile);
            break;
        case 0x43:
            fputs("<voice Toady_Sad>", outputfile);
            break;
        case 0x44:
            fputs("<voice Unknown1>", outputfile);
            break;
        case 0x45:
            fputs("<voice SpearGuy_Talk>", outputfile);
            break;
        case 0x46:
            fputs("<voice SpearGuy_Sad>", outputfile);
            break;
        case 0x47:
            fputs("<voice Bandit_Talk>", outputfile);
            break;
        case 0x48:
            fputs("<voice Bandit_Sad>", outputfile);
            break;
        case 0x49:
            fputs("<voice Pianta_Talk>", outputfile);
            break;
        case 0x4A:
            fputs("<voice Pianta_Sad>", outputfile);
            break;
        case 0x4B:
            fputs("<voice CutePianta_Talk>", outputfile);
            break;
        case 0x4C:
            fputs("<voice CutePianta_Sad>", outputfile);
            break;
        case 0x4D:
            fputs("<voice Unknown2>", outputfile);
            break;
        case 0x4E:
            fputs("<voice Unknown3>", outputfile);
            break;
        case 0x4F:
            fputs("<voice CaptainGoombaAlt>", outputfile);
            break;
        case 0x50:
            fputs("<voice CaptainGoomba>", outputfile);
            break;
        case 0x53:
            fputs("<voice Dolphin_Talk>", outputfile);
            break;
        case 0x54:
            fputs("<voice Dolphin_Sad>", outputfile);
            break;
        case 0x55:
            fputs("<voice Mowz_Talk>", outputfile);
            break;
        case 0x56:
            fputs("<voice Mowz_Sad>", outputfile);
            break;
        case 0x57:
            fputs("<voice KingBoo_Talk>", outputfile);
            break;
        case 0x58:
        case 0x59:
            fputs("<voice KingBoo_Sad>", outputfile);
            break;
        case 0x5A:
            fputs("<voice RedBoo_Talk>", outputfile);
            break;
        case 0x5B:
            fputs("<voice RedBoo_Sad>", outputfile);
            break;
        case 0x5C:
            fputs("<voice Toadsworth_Talk>", outputfile);
            break;
        case 0x5D:
            fputs("<voice Toadsworth_Sad>", outputfile);
            break;
    }
}

void iconToXML (unsigned char inputIcon, FILE *outputfile) {
    switch (inputIcon) {
        case 0x01:
            fputs("<icon LeftArrow>", outputfile);
            break;
        case 0x02:
            fputs("<icon RightArrow>", outputfile);
            break;
        case 0x03:
            fputs("<icon UpArrow>", outputfile);
            break;
        case 0x04:
            fputs("<icon DownArrow>", outputfile);
            break;
        case 0x05:
            fputs("<icon LeftRightArrow>", outputfile);
            break;
        case 0x06:
            fputs("<icon UpDownArrow>", outputfile);
            break;
        case 0x07:
            fputs("<icon WiiRemote>", outputfile);
            break;
        case 0x08:
            fputs("<icon AButton>", outputfile);
            break;
        case 0x09:
            fputs("<icon BButton>", outputfile);
            break;
        case 0x0A:
            fputs("<icon 1Button>", outputfile);
            break;
        case 0x0B:
            fputs("<icon 2Button>", outputfile);
            break;
        case 0x0C:
            fputs("<icon PlusButton>", outputfile);
            break;
        case 0x0D:
            fputs("<icon MinusButton>", outputfile);
            break;
        case 0x0E:
            fputs("<icon PowerButton>", outputfile);
            break;
        case 0x0F:
            fputs("<icon DPad>", outputfile);
            break;
        case 0x10:
            fputs("<icon HomeButton>", outputfile);
            break;
        case 0x11:
            fputs("<icon SquarePlusButton>", outputfile);
            break;
        case 0x12:
            fputs("<icon Nunchuck>", outputfile);
            break;
        case 0x13:
            fputs("<icon CButton>", outputfile);
            break;
        case 0x14:
            fputs("<icon ZButton>", outputfile);
            break;
        case 0x15:
            fputs("<icon NunchuckStick>", outputfile);
            break;
        case 0x16:
            fputs("<icon Star>", outputfile);
            break;
        case 0x17:
            fputs("<icon Coin>", outputfile);
            break;
        case 0x18:
            fputs("<icon AButtonBlink>", outputfile);
            break;
        case 0x19:
            fputs("<icon AButtonBlinkFloatLeft>", outputfile);
            break;
        case 0x1A:
            fputs("<icon P1 Hand>", outputfile);
            break;
        case 0x1B:
            fputs("<icon ButtonHover>", outputfile);
            break;
        case 0x1C:
            fputs("<icon LongButtonHover>", outputfile);
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
        case 0x82:
            fputc(',', outputfile);
            break;
        case 0x7B:
            fputc(':', outputfile);
            break;
        // -------------
        default:
            fputc(current, outputfile);
            break;
    }
}

void binToXMLString (FILE *mInput, FILE *outputfile) {
    bool isWaitingForFF = false;
    bool ignoreFFs = false;
    unsigned int numSections;
    fread(&numSections, sizeof(numSections), 1, mInput);
    fseek(mInput, convertToLittleEndian(numSections) * 4 + 4, SEEK_SET);
    char current;
    fread(&numSections, sizeof(numSections), 1, mInput);
    fseek(mInput, convertToLittleEndian(numSections) * 4 + 4, SEEK_CUR);
    fputs("<section>\n", outputfile);
    do {
        current = fgetc(mInput);
        if (current == 0x0E)
            iconToXML(fgetc(mInput), outputfile);
        else if (current == 0x1C) 
            voiceToXML(fgetc(mInput), outputfile);
        else if (current == 0x1E) 
            colorToXML(fgetc(mInput), outputfile);
        else if (current == 0x0D) 
            fputs("<button confirm>", outputfile);
        else if (current == 0x0F) 
            fputs("<button reject>", outputfile);
        else if (current == 0x1A) 
            fputs("</button>", outputfile);
        else if (current == 0x1F) 
            fprintf(outputfile, "<variable no=\"%d\" />", fgetc(mInput));

        /* NULL + FF a few bytes later = next message entry
           NULL + No FF = message data for next section */
        else if (current == '\0') 
            isWaitingForFF = true;
        else if (current == -1) {
            isWaitingForFF = false;
            if (!ignoreFFs) {
                ignoreFFs = true;
                fputs("<pagebreak>\n", outputfile);
            }
        } else if (isWaitingForFF) {
            isWaitingForFF = false;
            fputs("\n</section>\n", outputfile);
            fseek(mInput, -4, SEEK_CUR); // Addresses are 4 bytes long
            fread(&numSections, sizeof(numSections), 1, mInput);
            fprintf(outputfile, "%d", convertToLittleEndian(numSections));
            fseek(mInput, convertToLittleEndian(numSections) * 4 + 4, SEEK_CUR);
            fputs("<section>\n", outputfile);
        } else if (current != '\0' && current != -1) {
            ignoreFFs = false;
            addToStr(current, outputfile);
        }
    } while (!feof(mInput));
}