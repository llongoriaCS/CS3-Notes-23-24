#include<iostream>
using namespace std;

int addOne(int &num){
    num++;
    return num;
}

int main(){
    int a = 5;  //declaring an int var
    int &b = a; //declaring a reference int var of a
    cout << a << " " << b << endl;
    a++;
    cout << a << " " << b << endl;

    cout << a << " ";
    addOne(a);
    cout << a << endl;
    int *pointA = &a;
    cout <<  pointA << endl;

    return 0;
}