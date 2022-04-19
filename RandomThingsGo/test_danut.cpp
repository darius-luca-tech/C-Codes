#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char  c1,c2,s[251];
    int i,t=0,k=0;
    cout<<"Textul este :";cin.get(s,250);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ) {
            t++;
        } else if(s[i] == ' ') {
            k++; 
    }       
}
    cout<<endl;
    if(t==0){
        cout<<"Sirul nu contine vocale"<<endl;
    } else {
        cout<<"Sirul contine "<<t<<" vocale"<<endl;
        cout<<"Sirul contine "<<(s)+ t-k<<" consoane";
    }

return 0;
}



