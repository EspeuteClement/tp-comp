
#include "LexicalAnalyser.h"
#include "SyntaxAnalyser.h"

#include <iostream>
#include <iterator>

int main() {



// use stream iterators to copy the stream to a string

    std::string results;
    int c;
    while((c = getchar()) != EOF) {
        results += c;
    }

    SyntaxAnalyser analyser;
    analyser.analyse(results);


    getchar();
    return 0;
}

