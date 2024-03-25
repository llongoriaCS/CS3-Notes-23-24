#include<iostream>
#include<vector>
#include<sstream> //String stream
using namespace std;

int main(){
    cout << "Enter a phrase/sentence: ";
    string phrase;
    getline(cin, phrase);

    vector<string> words = splitLn(phrase);

    for (string word : words)
        cout << word << endl;

    return 0;
}

vector<string> splitLn(string input, char delimeter=' '){
    vector<string> output;
    istringstream stream(input);
    string token;

    while(getline(stream, token, delimeter))

}