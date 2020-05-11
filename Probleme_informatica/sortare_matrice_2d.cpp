#include <iostream> 
using namespace std; 

int main() { 
	int v[10][10]; 
	int m, n;	
	cout<<"randuri si coloane:"; 
	cin>>m>>n; 

	for(int i = 0; i < m; i++) { 
		for(int j = 0; j < n; j++) { 
			cout<<"v["<<i<<"]["<<j<<"]="; 
			cin>>v[i][j];
		}
	} 



	for(int i = 0; i < m - 1; i++) { 
		for(int j = 0; j < n - i - 1; j++) { 
			for(int k = j + 1; k < m; k++) {
				if(v[i][j] > v[i][k]) { 
					int aux = v[i][j]; 
					v[i][j] = v[i][k]; 
					v[i][k] = aux;	
				}
			}	
		}
	} 

	for(int i = 0; i < m; i++) {  
		for(int j = 0; j < n; j++) { 
			cout<<v[i][j]<<" ";  
		} 
		cout<<endl;
	}


}
