#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20];
    cout<<"s1:";
    cin>>s1;
    cout<<strlen(s1)<<endl;

    char s2[20],s3[20];
    cout<<"s3:"; cin>>s3;
    strcpy(s2,s3);
    cout<<s2<<endl;

    cout<<"s1:"; cin>>s1;
    cout<<"s2:"; cin>>s2;
    strcat(s1,s2); //concateneaza sir2 la sir1
    cout<<s1<<endl;

   return 0;
}