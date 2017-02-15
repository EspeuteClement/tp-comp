//
// Created by Element on 15/02/2017.
//

#ifndef TP_COMP_ALANYSESYNTAXIQUE_H
#define TP_COMP_ALANYSESYNTAXIQUE_H

// Include stoi
//#define _GLIBCXX_USE_C99 1

#include <string.h>
#include <fstream>

class LexicalAnalyser {
public:
    enum charToken{
        UNKNOWN,
        EOF_CHAR,
        PLUS,
        MULT,
        OPEN,
        CLOSE,
        EXPR,
        NUMBER
    };

    union token {
        int number;
        char c;
    };

    struct Symbol {
        charToken tokenType;
        token data;
    };

    LexicalAnalyser();

    void openString(std::string);

    Symbol readSymbol(bool updateCursor = false);

private:

    std::string analysedString;

    int cursor;
};


#endif //TP_COMP_ALANYSESYNTAXIQUE_H
