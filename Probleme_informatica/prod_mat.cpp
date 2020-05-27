
-

#include <iostream>
using namespace std; 

//ca doua matrici sa se poata inmulti, numarul de coloane a mat1 trebuie sa fie egal cu numarul de linii al lui mat2
int main() { 
	int mat1[101][101];
	int mat2[101][101];
	int mat_prod[101][101];

	int r1; 
	cout<<"r1=";
	cin>>r1;
	
	int c1;
	cout<<"c1=";
	cin>>c1;

	int r2;
	cout<<"r2=";
	cin>>r2; 

	int c2;
	cout<<"c2=";
	cin>>c2;

	while(c1 != r2) {
		cout<<"ca doua matrici sa se poata inmulti, numarul de coloane a mat1 trebuie sa fie egal cu numarul de linii al lui mat2"<<endl;
		cout<<endl;
 
    	cout<<"r1=";
    	cin>>r1;

    	cout<<"c1=";
    	cin>>c1;

    	cout<<"r2="; 
		cin>>r2; 

		cout<<"c2="; 
		cin>>c2;
	} 

	for(int i = 0; i < r1; ++i) { 
		for(int j=0; j < c1; ++j) { 
			cout<<"mat1["<<i<<"]["<<j<<"]=";
			cin>>mat1[i][j];
		}
	}

	cout<<endl;
	for(int i = 0; i < r2; ++i) {
		for(int j = 0; j < c2; ++j) {
			cout<<"mat2["<<i<<"]["<<j<<"]=";
			cin>>mat2[i][j];
		}
	}

	cout<<endl;
	cout<<"Prima matrice:"<<endl;
	for(int i = 0; i < r1; ++i) {
		for(int j = 0; j < c1; ++j) {
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"Cea de-a doua matrice:"<<endl;
	for(int i = 0; i < r2; ++i) {
		for(int j = 0; j < c2; ++j) {
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i = 0; i < r1; ++i) {
		for(int j = 0; j < c2; ++j) {
			for(int k = 0; k < r2; ++k)
				mat_prod[i][j] += mat1[i][k] * mat2[k][j];
		}
	}


	cout<<endl;
	cout<<"Matricea produs:"<<endl;
	for(int i = 0; i < r1; ++i) {
		for(int j = 0; j < c2; ++j) {
			cout<<mat_prod[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
