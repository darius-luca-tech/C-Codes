#include <iostream> 
using namespace std; 

int main() { 
    unsigned int legs_chicken = 2; 
    unsigned int legs_cow = 4; 
    unsigned int legs_pig = 4; 
    
    int chickens; 
    int cows; 
    int pigs;

    unsigned int sumOfLegs = 0;

    cout<<"legs of the chickens:"<<endl; 
    cin>>chickens; 
    cout<<"legs of the cows:"<<endl; 
    cin>>cows; 
    cout<<"legs of the pigs:"<<endl; 
    cin>>pigs;  

    sumOfLegs = (legs_chicken * chickens) + (legs_cow * cows) + (legs_pig * pigs); 
    cout<<"Suma picioarelor:"<<sumOfLegs<<endl; 

    return 0;


    


}