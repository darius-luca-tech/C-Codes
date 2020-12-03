#include <iostream>
#include <fstream>
using namespace std;

//

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

int main() {
    int x;
    cout<<"x=";
    cin>>x;
    int n;
    fin>>n;
    int *v {nullptr};
    v = new int[n];

    cout<<"[FILE STATUS]:OPENING...."<<endl;
    if(fin.is_open()) {
        cout<<"[FILE STATUS]:SUCCESSFULLY OPENED"<<endl<<endl;
        for(int i = 0; i < n; ++i) {
            fin>>*(v+i);
        }
        cout<<"[INFO]: Vectorul este:";
        for(int i = 0; i < n; ++i) {
            cout<<*(v+i)<<" ";
            if(*(v+i) % x == 0) {
                fout<<*(v+i)<<" ";
            }
        }
        cout<<endl<<endl<<"[INFO]:Elementele au fost scrise in fisierul out.txt"<<endl;

    } else {
        cout<<"[FILE STATUS]: ERROR"<<endl;
    }

    
    free(v);
    cout<<"[INFO]:Memory buffer is free...."<<endl;
    fin.close();
    fout.close();
    return 0;
}