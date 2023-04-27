#include <iostream>
#include "functions.h"

int main() {
    std::string inputText;
    functions obj;

    std::cout << "Please enter some text: " << std::endl;
    getline(std::cin, inputText);
    std::cout << "Text You entered: " << "'" << inputText << "'" << std::endl;

    obj.removeWhiteSpaces(inputText);
    std::cout << "Text after predicate modification: " << "'" << inputText << "'" << std::endl;

    return 0;
}
