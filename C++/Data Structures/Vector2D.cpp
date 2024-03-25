#include<iostream>
#include<vector>
using namespace std;

int main(){         //column    0  1  2
    vector<vector<int> > nums {{1, 2, 3}, //row 0
                               {4, 5, 6}};//row 1
    // accessing & updating pretty much the same
    cout << nums[0][2] << endl; // prints 3
    nums[0][2] = 8;

    nums[0].push_back(4);
    nums[1].push_back(8);
    for(int row = 0; row < nums.size(); row++){
        for(int col = 0; col < nums[row].size(); col++){
            cout << nums[row][col] << "\t";
        }
        cout << endl;
    }

    //defines blank 2D vector
    vector<vector<string> > words;
    for(int i = 0; i < 10; i++){
        vector<string> row;
        for(int j = 0; j< 10; j++){
            row.push_back("joe mama"); //creates default val.
        }
        words.push_back(row);
    }
    words[8][6] = "Hello";
    for(int row = 0; row < words.size(); row++){
        for(int col = 0; col < words[row].size(); col++){
            cout << words[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}