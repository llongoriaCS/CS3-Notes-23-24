#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    queue<double> doubleQ;
    queue<string> stringQ;

    stringQ.push("Owen");
    stringQ.push("Willis");
    stringQ.push("Arianna");
    stringQ.pop();
    stringQ.pop();
    stringQ.pop();
    stringQ.pop();
    cout << stringQ.front()<< endl;

    return 0;
}