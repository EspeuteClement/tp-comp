//
// Created by Element on 15/02/2017.
//

#include <cstdlib>
#include "LexicalAnalyser.h"

LexicalAnalyser::LexicalAnalyser() : cursor(0) {

}

void LexicalAnalyser::openString(std::string theString) {
    analysedString = theString;
    cursor = 0;
}

LexicalAnalyser::Symbol LexicalAnalyser::readSymbol(bool updateCursor) {

    const char * c_string = analysedString.c_str();
    char readChar = c_string[cursor];

    Symbol next;
    next.tokenType = charToken::UNKNOWN;

    switch (readChar) {
        case '\0' :
            next.tokenType = charToken::EOF_CHAR;
            break;
        case ' ':
        case '\t':
        case '\n':
            cursor ++;
            return readSymbol(updateCursor);
            break;
        case '+' :
            next.tokenType = charToken::PLUS;
            if (updateCursor) {cursor ++; }
            break;
        case '*':
            next.tokenType = charToken::MULT;
            if (updateCursor) {cursor ++; }
            break;
        case '(':
            next.tokenType = charToken ::OPEN;
            if (updateCursor) {cursor ++; }
            break;
        case ')':
            next.tokenType = charToken::CLOSE;
            if (updateCursor) {cursor ++; }
            break;
        default:
            if (readChar >= '0' && readChar <= '9')
            {
                std::string numberString = "";
                int tempCursor = cursor;

                while (c_string[tempCursor] >= '0' && c_string[tempCursor] <= '9'){
                    numberString += c_string[tempCursor];
                    tempCursor ++;
                }

                int number = atoi(numberString.c_str());

                next.tokenType = charToken::NUMBER;
                next.data.number = number;

                if (updateCursor){
                    cursor = tempCursor;
                }

            }
            break;

    }


    return next;
}
