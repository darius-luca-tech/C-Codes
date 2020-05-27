#include <iostream>
using namespace std; 


int main() { 
	int mat1[101][101]; 
	int mat2[101][101]; 
	int mats[101][101];
	int r; 
	cout<<"r="; 
	cin>>r;
	
	int c;
	cout<<"c="; 
	cin>>c;

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) { 
			cout<<"mat1["<<i<<"]["<<j<<"]=";
			cin>>mat1[i][j]; 
			cout<<"mat2["<<i<<"]["<<j<<"]=";
			cin>>mat2[i][j];
		}
	}

	cout<<endl;
	for(int i=0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
	// Doua matrici se pot aduna daca au acelasi numar de randuri si coloane
	for(int i = 0; i < r; i++) { 
		for(int j = 0; j < c; j++) { 
			mats[i][j] = mat1[i][j] + mat2[i][j];
		}
	} 
	
	cout<<endl;
	cout<<"Aceasta este matricea suma"<<endl;
	for(int i=0; i < r; i++) { 
		for(int j = 0; j < c; j++) { 
			cout<<mats[i][j]<<" ";
		} 
		cout<<endl;
	}

	return 0;
}

