#include<iostream>

using namespace std;
long comb(int a ,int b){
    long long facta=1,factb=1,factab=1,combinare;

 for(int i=1;i<=a;i++){
    facta*=i;
 }
for(int i=1;i<=(a-b);i++){
    factab*=i;
 }

for(int i=1;i<=b;i++){
    factb*=i;
 }
 combinare=(facta)/(factb*factab);
return combinare;
}
int main(){
    int a,b;

    cout<<"La ce putere(intre 1-20) doriti sa ridicati binomul (x+y)^n?"<<endl;
    cin>>a;

cout<<"(x+y)^"<<a<<"= ";
while (true)
  for(b=0;b<=a;b++)
      if(b==0){
      cout<<"x^"<<a<<" + ";
      }
  else if(b!=0 && b!=a ){
      cout<<comb(a,b)<<"x^"<<b<<"y^"<<a-b<<" + ";
  }else if(b==a){
          cout<<"y^"<<a;
  }



return 0;

}
