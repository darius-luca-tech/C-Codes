#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, x, y, btc = 0;
    int prev_y = 0;
    cin>>n>>m;
    string s;
    cin>>s;
    pair<int, int> p;

    cin>>x>>y;
    for(int i = 1; i < m; ++i) {
        p = make_pair(x, y);
        if(prev_y == p.first and s[i] == 'X') {
            cout<<prev_y<<" "<<p.first<<endl;
            btc++;
        } else if(prev_y == p.first and s[i] == '.') {
            cout<<prev_y<<" "<<p.first<<endl;
            btc--;
        }
        prev_y = p.second;
        cin>>x>>y;
    }

    cout<<btc<<endl;


    return 0;
}