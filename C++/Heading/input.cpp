#include "input.h"

string readline(string prompt){
    cout << prompt;

    string newInput;
    getline(cin, newInput);

    return newInput;
}