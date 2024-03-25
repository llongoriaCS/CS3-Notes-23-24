#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    stack<int> intStack;
    stack<string> stringStack;

    intStack.push(4);
    intStack.push(5);
    intStack.push(8);
    intStack.push(2);
    intStack.push(1);
    intStack.pop();
    intStack.pop();
    intStack.pop();
    intStack.pop();
    intStack.pop();
    if(intStack.empty()){
        cout << "oh no i'm out of pringles :(" << endl;
    }
    // intStack.pop();
    // cout << intStack.top() << endl;

    return 0;
}