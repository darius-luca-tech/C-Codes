#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"n=";
    cin>>n;
    int var;

    int v[101];
    for(int i = 0; i < n; i++) {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }

    for(int i = 0; i < n - 1; i++) {
      for(int j = 0; j < n - i - 1; j++) {
        if(v[j] > v[j + 1]) {
          var = v[j];
    	    v[j] = v[j + 1];
    	    v[j + 1] = var;
        }
      }
    }

    for(int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}
