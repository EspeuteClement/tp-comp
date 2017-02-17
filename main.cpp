
#include "LexicalAnalyser.h"
#include "SyntaxAnalyser.h"

#include <iostream>
#include <iterator>
#include <sstream>

int main(int argc, char* argv[]) {

    // === PART 1 : Read the Data ===//

    std::string results("");

    // Check for file argument
    if (argc >= 2)
    {
        if (strcmp(argv[1], "-f") == 0 && argc >= 3) {
            std::ifstream t(argv[2]);
            if (t.is_open())
            {
                std::stringstream buffer;
                buffer << t.rdbuf();
                results = buffer.str();
                std::cout << "Opened file " << argv[2] << std::endl;
            } else{
                std::cout << "Error, couldn't open file " << argv[2] << std::endl;
            }
        }
        else if (strcmp(argv[2], "-p") == 0 && argc >= 3) {
            results = argv[3];
        }
        else{
            std::cout << "Argument error" << std::endl;
        }
    }

    // Read from standard input if results was not set
    if (results.size() == 0) {
        std::cout << "Please enter your program below :" << std::endl;
        int c;
        while((c = getchar()) != EOF) {
            results += c;
        }
    }

    // === PART 2 : Analyse === //

    SyntaxAnalyser analyser;

    analyser.analyse(results);

    // Wait for input before closing
    getchar();
    return 0;
}

