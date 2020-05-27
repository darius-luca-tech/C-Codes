//4, 5, 6, 9, 10, 11
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
	
	int suma_r = 0; 
	int suma_c = 0;
	for(int i = 0; i < r; i++) { 
		for(int j = 0; j < c; j++) {
			cout<<"m["<<i<<"]["<<j<<"]="; 
			cin>>m[i][j];
		}
	} 
	cout<<endl; 
	cout<<"Aceasta este matricea!"<<endl;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) { 
			cout<<m[i][j]<<" ";
		} 
		cout<<endl;
	}

	cout<<endl;
	for(int i = 0; i < r; i++) {
		suma_r = 0;
		for(int j = 0; j < c; j++) { 
			suma_r += m[i][j];
		}
		cout<<"Suma elementelor din linia"<<" "<<i<<" "<<"este:"<<suma_r<<endl; 
	} 
	
	for(int j = 0; j < c; j++) { 
		suma_c = 0; 
		for(int i = 0; i < r; i++) {
			suma_c += m[i][j];
		} 
		cout<<"Suma elementelor din coloana"<<" "<<j<<" "<<"este:"<<suma_c<<endl;
	} 

	cout<<endl; 
	cout<<"Matricea transpusa:"<<endl; 
	for(int i = 0; i < c; i++) { 
		for(int j = 0; j < r; j++) { 
			cout<<m[j][i]<<" ";
		} 
		cout<<endl;
	}
	return 0;
}
