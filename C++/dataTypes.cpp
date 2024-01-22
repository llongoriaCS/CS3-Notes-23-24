#include<iostream>
#include<string>
using namespace std;

int main(){
    //dataType varName = value;
    //dataType varName;
    //varName = value;
    string str1;
    str1 = "hello";

    string str2 = "Howdy!";

    cout << str1 << endl << str2 << endl;
    //strings are MUTABLE (able to change)

    str1.insert(5, " world");
    cout << str1 << endl;
    cout << str1[4] << endl << str1.at(4) << endl;

    int num1 = 10;
    double num2 = 11.5;

    cout << num1 << "\t" << num2 << endl;

    int num3, num4, num5, num6;
    num3 = num4 = num5 = num6 = 15;


    string sign = "Speed: " + to_string(num1);
    int someNum = stoi("12"); //STRING TO INT
                              //stod - STRING TO DOUBLE
    cout << someNum << endl;
    cout << sign << endl;

    bool hasDog = true;
    cout << hasDog << endl;
    bool hasCat = 0;
    cout << hasCat << endl;
    cout << true << false << endl; \






    return 0;
}