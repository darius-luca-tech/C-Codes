#include <iostream>
using namespace std;

int main() {
	int m[101][101];
	int r;
	cout<<"r=";
	cin>>r;

	int c;
	cout<<"c=";
	cin>>c;
	
	int zero, pos, neg = 0;
	for(int i=0; i < r; ++i) {
		for(int j = 0; j < c; ++j) {
			cout<<"m["<<i<<"]["<<j<<"]=";
			cin>>m[i][j];
			if(m[i][j] == 0) {
				zero++;
			} else if (m[i][j] < 0) {
				neg++;
			} else {
				pos++;
			}
		}
	}

	cout<<endl;
	cout<<"Elemente pozitive:"<<pos<<endl;
	cout<<"Elemente negative:"<<neg<<endl;
	cout<<"Elemente nule:"<<zero<<endl;
	return 0;
}
