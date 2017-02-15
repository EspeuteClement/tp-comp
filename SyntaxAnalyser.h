//
// Created by Element on 15/02/2017.
//

#ifndef TP_COMP_SYNTAXANALYSER_H
#define TP_COMP_SYNTAXANALYSER_H


#include <stack>
#include "LexicalAnalyser.h"
#include "State.h"

class State;

class SyntaxAnalyser {
public:
    SyntaxAnalyser();
    void decalage(LexicalAnalyser::Symbol s, State * e);
    void reduction(int n, LexicalAnalyser::Symbol s);

    void analyse(std::string theString);
    LexicalAnalyser::Symbol readSymbol();
    void moveCursor();

    LexicalAnalyser::Symbol popSymbol();

    void syntaxError();
private:
    std::stack<State*> states;
    std::stack<LexicalAnalyser::Symbol> symbols;

    LexicalAnalyser * lex;
};


#endif //TP_COMP_SYNTAXANALYSER_H
