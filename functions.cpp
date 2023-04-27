#include "functions.h"

std::string functions::removeWhiteSpaces(std::string &text) {
    if(text.size() == 1 && text != " ") return text;
    if(text == " "){
        text = "";
        return text;
    }

    int k = text.size() -1;

    while(text.at(0) == ' ' || text.at(k) == ' ' ){
        if(text.at(0) == ' ') {
            text = text.substr(1, text.size()-1);
            k--;
        }
        if(text.at(k) == ' '){
            text.erase(std::prev(text.end()));
            k--;
        }
    }
    return text;
}
