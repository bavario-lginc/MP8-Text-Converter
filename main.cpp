#include <stdio.h>
#include <string>
#include "binToXML.cpp"
#include "xmlToBin.cpp"
#define STRRESET "\033[0m"
#define FAIL "\033[31m"
#define NOTICE "\033[33m"
#define SUCCESS "\033[32m"

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
    FILE *output = fopen(argv[2], "wb");
    if (output == NULL) {
        printf(FAIL "FATAL" STRRESET ": Could not open output file %s.\nAbort.\n", argv[2]);
        return 2;
    }
    std::string inputFileStr = argv[1];
    std::string outputFileStr = argv[2];
    if (inputFileStr.find(".bin\0") != -1) {
        printf(NOTICE "CONVERTING" STRRESET " .bin -> .xml\n");
        
        //fread(mInputstr, 1, sizeof(mInputstr), input);
        binToXMLString(input, output);
        fclose(input);
        fclose(output);
    } else if (outputFileStr.find(".bin\0") != -1) {
        printf(NOTICE "CONVERTING" STRRESET " .xml -> .bin\n");

        //xmlToBinString(input, output);
        fclose(input);
        fclose(output);
    } else {
        printf(FAIL "FATAL" STRRESET ": Neither file is a .bin file.\nAbort.\n");
        return 3;
    }

    printf(SUCCESS "SUCCESS" STRRESET "\n");
}