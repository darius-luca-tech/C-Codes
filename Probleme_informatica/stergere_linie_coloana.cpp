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

	int x;
	cout<<"x(linia)=";
	cin>>x;
	
	int y;
	cout<<"y(coloana)=";
	cin>>y;

	for(int i = 0; i < r;i++) {
		for(int j = 0; j < c; j++) {
			cout<<"m["<<i<<"]["<<j<<"]=";
			cin>>m[i][j];
		}
	}
	
	cout<<endl;
	cout<<"Aceasta este matricea"<<endl;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = x; i < r; i++) {
		for(int j = 0; j < c; j++) {
			m[i][j] = m[i + 1][j];
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = y; j < c; j++) {
			m[i][j] = m[i][j + 1];
		}
	} 

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(m[i][j] == 0) {
				//nada
			} else {
				cout<<m[i][j]<<" "; 
			}
		}
		cout<<endl;
	}
	
	return 0;
}
