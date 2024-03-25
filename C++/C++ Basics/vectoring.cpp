#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> students {"Shelby", "Jackson", "Dimitry", "Owen"};
    cout << "Good morning, " << students[1] << endl;
    cout << "Good afternoon, " << students.at(3) << endl;

    students.push_back("Addam");
    cout <<  students[4] << endl;

    vector<string>::iterator itr = students.begin();
    students.insert(itr + 2, "Sammy");

    for (int i = 0; i <= students.size(); i++){
        cout << i << ": " << students[i] << endl;
    }
    
    for(string name : students){
        cout << name << ", " ;
    }

    return 0;
}