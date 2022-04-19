#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class BinaryElements {
private:
    vector<int> binaryDigits;
    int numberOfBinaryDigits = 0;
    vector<int>::iterator it = binaryDigits.begin();

public:
    BinaryElements(int n = 8) {

        for(int i = 0; i < n; ++i) {
            binaryDigits.insert(it, 0);
            it = binaryDigits.begin();
        }
        numberOfBinaryDigits = n;
        cout<<"[INFO] Constructor called ... "<<endl;
    }

    ~BinaryElements() {
        cout<<"[INFO] Deconstruct called ..."<<endl;
    }

    void getBinaryElements() {
        for(int i : binaryDigits){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    vector<int> getBinaryVector() {
        return binaryDigits;
    }

    int getCalculateSQR() {
        int sum = 0;
        for(int i = 0; i < numberOfBinaryDigits; ++i) {
            sum += pow(2, i);
        }
        return sum;
    }

    int getNumberofBinaryDigits() const {
        return numberOfBinaryDigits;
    }

    void setBinaryDigit(int position, int value) {
        binaryDigits.at(position) = value;
    }

    void insertZeroIfNeeded(int number) {
        while(getCalculateSQR() < number) {
            binaryDigits.push_back(0);
            numberOfBinaryDigits++;
        }
    }

    vector<int> transformNumberToBinary(int number) {
        insertZeroIfNeeded(number);
        for(int i = numberOfBinaryDigits; i >= 0; i--) {
            if(number >= pow(2, i)) {
                number -= pow(2, i);
                setBinaryDigit(numberOfBinaryDigits - i - 1, 1);
            }
        }
        return binaryDigits;
    }

    int transformBinaryToNumber(vector<int> v) {
        int numar = 0;
        for(int i = 0; i < v.size(); ++i) {
            if(v[i] == 1) {
                numar += pow(2, v.size() - i - 1);
            }
        }
        return numar;
    }

};


int main() {
    BinaryElements *bin = new BinaryElements();
    bin->getBinaryElements();
    bin->transformNumberToBinary(2900);
    bin->getBinaryElements();
    cout<<bin->transformBinaryToNumber(bin->getBinaryVector())<<endl;

    delete bin;
    return 0;
}
