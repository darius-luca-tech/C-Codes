#include <iostream>
using namespace std; 


int main() {
	int m[101][101];
	int n;
	cout<<"n=";
	cin>>n;

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cout<<"m["<<i<<"]["<<j<<"]="; 
			cin>>m[i][j];
		}
	}

	cout<<endl;
	cout<<"Aceasta este matricea:"<<endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; ++j) {
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}

	int suma = 0;
	cout<<endl;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if(i > j) {
				cout<<m[i][j]<<" ";
				suma += m[i][j];
			}
		}
	}

	cout<<endl;
	cout<<"Suma elementelor este:"<<suma<<endl;
	return 0;
}
