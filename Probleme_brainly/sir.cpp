#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int n;
	cout<<"n=";
	cin>>n;
	
	int p = 1;
	int val = 3;
	for(int i = 1; i <= n; i++) {
		cout<<p<<"*"<<val<<"=";
		p = p * val;
		cout<<p<<endl;
		val += 3;
	} 
	cout<<p<<endl;
	return 0;
}
