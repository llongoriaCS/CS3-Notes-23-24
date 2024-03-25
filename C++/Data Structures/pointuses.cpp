#include<iostream>
#include<queue>
using namespace std;

// void add5(int *num){
//     *num += 5;
// }

// void add5(int num){
//     num += 5;
// }

int main(){
    // int *someNum = new int;
    // *someNum = 5;

    // add5(someNum);
    // cout << *someNum << endl;

    // int someNum = 5;
    // cout << &someNum << endl;
    // add5(&someNum); //& creates a reference point.
    // cout << someNum << endl;

    // int *someNum = new int;
    // *someNum = 5;
    // add5(*someNum);
    // cout << *someNum << endl;

    // queue<int*> nums;
    // int *num1 = new int;
    // *num1 = 50;
    // nums.push(num1);

    // cout << *nums.front() << endl;
    // nums.pop();


    queue<int> *nums = new queue<int>;

    (*nums).push(20);
    nums->push(60);
    nums->pop();
    cout << nums->front() << endl;

    return 0;
}