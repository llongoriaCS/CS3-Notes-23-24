#include<iostream>
#include<string>
#include<vector>
using namespace std;

//structs are placed at the top of the program
struct studentInfo{
    //all values are PUBLIC by default
    string name;
    int grade;
};

struct point{
    int x, y;
};

int main(){
    studentInfo huzaifa;
    huzaifa.name = "Huzaifa";
    huzaifa.grade = 11;

    cout << huzaifa.name << " is in grade "
        << huzaifa.grade << endl;

    vector<point> points;
    point p1;
    p1.x = 5;
    p1.y = 10;
    point p2;
    p2.x = 6;
    p2.y = 12;
    point p3;
    p3.x = 7;
    p3.y = 13;
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);

    for(int i = 0; i < points.size(); i++){
        cout << points[i].x << ", " << points[i].y << endl;
    }

    return 0;
}