#include<iostream>      //libraries
#include<string>
using namespace std;    //namespace

int someNum;

int main(){
    // cout << "Hello " << "World!" << endl << "Github Special";
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << name << "? That's a nice name!" << endl;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << num << " is a great number! :)" << endl;
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << fullName << "? More like trash name." << endl;
    someNum = 10;

    return 0;
}