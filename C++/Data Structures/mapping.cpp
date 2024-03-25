#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // map<string, double> catalog;
    map<int, string> products;
    map<string, int> roster;

    map<string, double> catalog{
        {"treats", 3.99},
        {"leash", 8.99},
        {"crate", 24.99}
    };

    catalog.insert(pair<string, double>("bed", 19.99));
    catalog["chew toy"] = 8.99;

    cout << catalog["ball"] << endl;
    cout << catalog.at("crate") << endl;

    return 0;
}