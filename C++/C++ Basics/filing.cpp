#include<fstream>  //file stream
#include<iostream> //input/output stream
#include<string>
#include<vector>
using namespace std;

int main(){
    //ifstream = input file stream
    ifstream fileIn;
    //ofstream = output file stream
    ofstream fileOut;

    fileIn.open("openMe.txt");
    fileOut.open("output.txt");
    if(fileIn.fail())
        cout << "File not found!" << endl;
    else
        cout << "File Loaded!" << endl;
    
    string line;
    vector<string> inputs;
    
    while(true){
        getline(fileIn, line);
        if(fileIn.fail()) break;
        // cout << line << endl;
        inputs.push_back(line); //everything gets saved
        //                          into my vector "inputs"
    }

    fileOut << "hello from filing.cpp";

    fileIn.close(); //not that important for ifstream but still can
    fileOut.close();//IMPORTANT you close ofstream

    return 0;
}