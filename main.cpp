#include <stdio.h>
#include <string>
#include "binToXML.cpp"
#include "xmlToBin.cpp"
#define MAX_OUTPUT_LENGTH 4096
#define STRRESET "\033[0m"
#define FAIL "\033[31m"
#define NOTICE "\033[33m"
#define SUCCESS "\033[32m"

unsigned char mInputstr[MAX_OUTPUT_LENGTH];
char mOutstr[MAX_OUTPUT_LENGTH];

int main (int argc, char *argv[]) {
    printf("Mario Party 8 Text Exporter v0.1\nMade by Bavario in 2023\n\n");
    
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL) {
        printf(FAIL "FATAL" STRRESET ": Could not open input file %s.\nAbort.\n", argv[1]);
        return 1;
    }
    if (argv[2][0] == '\0') {
        printf(FAIL "FATAL" STRRESET ": No output file specified.\nAbort.\n");
        return 2;
    }
    FILE *output = fopen(argv[2], "w");
    if (output == NULL) {
        printf(FAIL "FATAL" STRRESET ": Could not open output file %s.\nAbort.\n", argv[2]);
        return 2;
    }
    std::string inputFileStr = argv[1];
    std::string outputFileStr = argv[2];
    if (inputFileStr.find(".bin\0") != -1) {
        printf(NOTICE "CONVERTING" STRRESET " .bin -> .xml\n");
        
        printf(NOTICE "NOTICE" STRRESET ": fseek'ing to 0x1BFC\n");
        fseek(input, 0x1BFC, SEEK_SET);
        fread(mInputstr, 1, sizeof(mInputstr), input);
        binToXMLString(mInputstr, mOutstr);
    } else if (outputFileStr.find(".bin\0") != -1) {
        printf(NOTICE "CONVERTING" STRRESET " .xml -> .bin\n");

        xmlToBinString(argv[1], mOutstr);
        printf("\"%s\"\n", mOutstr);
    } else {
        printf(FAIL "FATAL" STRRESET ": Neither file is a .bin file.\nAbort.\n");
        return 3;
    }

    fwrite(mOutstr, 1, strlen(mOutstr), output);
    fclose(input);
    fclose(output);
    printf(SUCCESS "SUCCESS" STRRESET "\n");
}