#include <iostream> 
using namespace std; 

int main()  { 
        int a; 
        cout<<"valoarea impartitorului:"<<endl; 
        cin>>a; 

        int b; 
        cout<<"valoarea deimpartitului:"<<endl;
        cin>>b; 

        int val = 0; 
        val = a % b; 
        cout<<a<<" % "<<b<<" = "<<val<<endl;  
        cout<<"vrei sa it calculez alt numar?"<<endl;
 

    return 0; 
}