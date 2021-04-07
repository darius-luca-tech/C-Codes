#include <iostream>
#include <fstream>
#include <math.h>
#include <cstring>
#include <vector>
using namespace std;

fstream fin("in.txt", ios::in);

vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0];
    int min = scores[0];
    
    int mic = 0;
    int mac = 0;
     
    vector<int> return_value;
    for(int a : scores) {
        if(a > max) {
            max = a;
            mac++;
            cout<<"max:"<<a<<endl;
        } else if(a < min) {
            min = a;
            mic++;
            cout<<"min:"<<a<<endl;
        }
    }
    
    // cout<<mac<<" "<<min<<endl;
    return_value.push_back(mac);
    return_value.push_back(mic);
    
    return return_value;
}

int main() {
    vector<int> grades = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    vector<int> finals = breakingRecords(grades);
    for(int a : finals) {
        cout<<a<<" ";
    }

    return 0;
}