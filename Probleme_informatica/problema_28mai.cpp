#include <iostream>
using namespace std;


int main() {
	int m[5][7];
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 7; ++j) {
			m[i][j] = 0;
		}
	} 

	cout<<endl;
	cout<<"Matricea este:"<<endl;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 7; ++j) {
			cout<<m[i][j]<<" "; 
		}
		cout<<endl;
	}

	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 7; ++j) {
			if(i == 0 || j == 6) m[i][j] = 1;
			if(i == 1) m[i][j] = (m[i][j + 1] + m[i - 1][j]) % 10;
			if(j == 5) m[i][j] = i + 1;
		}
	}

	for(int i = 0; i < 5; ++i) {
		for(int j =0; j < 7; ++j) {
			if(m[i][j] == 0 and m[i-1][j] != 0 and m[i][j+1] != 0) m[i][j] = (m[i-1][j] + m[i][j + 1])%10;
		} 
		for(int j = 6; j >= 0; --j) {
			if(m[i][j] == 0) m[i][j] = (m[i-1][j] + m[i][j+1]) % 10;
		} 
	}
	cout<<endl;
	cout<<"Dupa constructia matricii"<<endl;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 7; ++j) {
            cout<<m[i][j]<<" "; 
        }
        cout<<endl;
    }

	return 0;
}
