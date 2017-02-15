//
// Created by Element on 15/02/2017.
//

#include <iostream>
#include "State.h"

State::State(std::string name) {

}

State::~State() {

}

void State::print() const {
    std::cout << name << std::endl;
}

S0::S0(): State::State("S0"){

}


bool S0::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    switch (s.tokenType){
        case LexicalAnalyser::charToken::NUMBER :
            syntaxAnalyser.decalage(s, new S3);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::OPEN :
            syntaxAnalyser.decalage(s, new S2);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken ::EXPR :
            syntaxAnalyser.decalage(s, new S1);
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;
}

S0::~S0() {

}

S1::S1() : State("S1") {

}

S1::~S1() {

}

bool S1::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    LexicalAnalyser::Symbol val;
    switch (s.tokenType) {
        case LexicalAnalyser::charToken::PLUS :
            syntaxAnalyser.decalage(s, new S4);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::MULT :
            syntaxAnalyser.decalage(s, new S5);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::EOF_CHAR :
            // TODO : make better
            val = syntaxAnalyser.popSymbol();
            std::cout << "EOF reached, value computed : " << val.data.number;

            return false;
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;
}


S2::S2() : State("S2") {

}

S2::~S2() {

}

bool S2::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    switch (s.tokenType) {
        case LexicalAnalyser::charToken::NUMBER :
            syntaxAnalyser.decalage(s, new S3);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::OPEN :
            syntaxAnalyser.decalage(s, new S2);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::EXPR :
            syntaxAnalyser.decalage(s, new S6);
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;
}

S3::S3() : State("S3") {

}

S3::~S3() {

}

bool S3::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    LexicalAnalyser::Symbol val;
    switch (s.tokenType) {
        case LexicalAnalyser::charToken::PLUS :
        case LexicalAnalyser::charToken::MULT :
        case LexicalAnalyser::charToken::CLOSE :
        case LexicalAnalyser::charToken::EOF_CHAR :
            val = syntaxAnalyser.popSymbol();
            val.tokenType = LexicalAnalyser::charToken::EXPR;
            syntaxAnalyser.reduction(1, val);
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;}

S4::S4() : State("S4") {

}

S4::~S4() {

}

bool S4::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    switch (s.tokenType) {
        case LexicalAnalyser::charToken::NUMBER :
            syntaxAnalyser.decalage(s, new S3);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::OPEN :
            syntaxAnalyser.decalage(s, new S2);
            syntaxAnalyser.moveCursor();
            break;
        case LexicalAnalyser::charToken::EXPR :
            syntaxAnalyser.decalage(s, new S7);
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;
}

S5::S5() : State("S5") {

}

S5::~S5() {

}

bool S5::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    return false;
}

S6::S6() : State("S6") {

}

S6::~S6() {

}

bool S6::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    return false;
}

S7::S7() : State("S7") {

}

S7::~S7() {

}

bool S7::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    LexicalAnalyser::Symbol val1;
    LexicalAnalyser::Symbol val2;
    LexicalAnalyser::Symbol result;
    switch (s.tokenType) {
        case LexicalAnalyser::charToken::NUMBER :
            // TODO : IMPLEMENT
            break;
        case LexicalAnalyser::charToken::OPEN :
            // TODO : IMPLEMENT
            break;
        case LexicalAnalyser::charToken::EOF_CHAR :
            val1 = syntaxAnalyser.popSymbol();
            syntaxAnalyser.popSymbol();
            val2 = syntaxAnalyser.popSymbol();
            result.tokenType = LexicalAnalyser::charToken::EXPR;
            result.data.number = val1.data.number + val2.data.number;
            syntaxAnalyser.reduction(3, result);
            break;
        default:
            syntaxAnalyser.syntaxError();
            return false;
            break;
    }

    return true;
}

S8::S8() : State("S8") {

}

S8::~S8() {

}

bool S8::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    return false;
}

S9::S9() : State("S9") {

}

S9::~S9() {

}

bool S9::transition(SyntaxAnalyser &syntaxAnalyser, LexicalAnalyser::Symbol s) {
    return false;
}