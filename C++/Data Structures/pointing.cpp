#include<iostream>
#include<string>
using namespace std;

int main(){
    //referencing operator
    int *num = new int; //interger pointer
    int num2 = 25;
    string *name; //string pointer
    double *rate; //double pointer

    // num = new int; //creates a new memory location
    *num = 10; //deference operator
    cout << num << endl;
    cout << *num << endl;
    cout << num2 << endl;

    int *number1, *number2, *number3;
    number1 = new int;
    *number1 = 100;
    number2 = number1;
    *number2 = 200;
    cout << *number1 << " " << *number2 << endl;

    number3 = new int;
    *number3 = 300;
    cout << *number1 << " " << *number2 << " " << *number3<< endl;

    return 0;
}