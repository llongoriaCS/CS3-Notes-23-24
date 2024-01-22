#include<iostream>
#include<string>
using namespace std;

int main(){
    for(int i = 1; i < 10; i += 2){
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    while(true){
        cout << "Enter a num (0 to quit): ";
        int num;
        cin >> num;
        if (num == 0) break;
        sum += num;
    }
    cout << sum << endl;


    int test = 0;
    do{
        cout << test << endl;
        test++;
    }while(test > 5);

    string str = "Longoria";
    cout << str.find("z") << endl;
    if(str.find("z") != string::npos){
        cout << "Found the string uwu" << endl;
    }

    return 0;
}