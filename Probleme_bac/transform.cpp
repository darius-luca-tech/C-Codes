#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

/**
 * ! HELPER FUNCTIONS FUNCTIONS
**/

long long reverseNumber(long long n) {
    long long revN = 0;
    while(n) {
        revN = revN * 10 + (n % 10);
        n /= 10;
    }

    return revN;
}

double binaryFractionalToFloats(char *c) {
    double suma = 0;
    for(int i = 1; i <= strlen(c); ++i) {
        if(*(c + i) == '1') {
            suma += pow(2, -i);
        }
    }

    return suma;
}

/**
 * ! FROM BINARY CONVERSION FUNCTIONS
**/

char* decimalToBinary(long long n) {
    int binaryDigits = (int)log2(n) ;
    char *bin = (char *)malloc(sizeof(char) * (binaryDigits));
    bin[binaryDigits + 1] = '\0';

    for(int i = binaryDigits; i >= 0; i--) {
        if(n >= pow(2, i)) {
            bin[binaryDigits - i] = '1';
            n -= pow(2, i);
        } else {
            bin[binaryDigits - i] = '0'; 
        }
    }

    return bin;
}

char* decimalFractionToBinary(double n) {
    int number = (int)n;
    char *binN = decimalToBinary(number);
    strcat(binN, ".");
    double floatPart = n - number;

    while(floatPart * 2 != 0) {
        floatPart *= 2;
        number = (int)floatPart;
        floatPart -= number;

        if(number == 0) {
            strcat(binN, "0");
        } else {
            strcat(binN, "1");
        }

        /**
         * TODO: rescrie partea de mai sus 63 - 67
        **/
    }
    return binN;
}

double binaryToDecimal(char *c) {
    long long decimalNumber = 0;
    char one = '1';
    
    for(int i = 0; i < strlen(c); ++i) {
        if(*(c + i) == one) {
            decimalNumber += pow(2, strlen(c) - i - 1);
        }
    }

    return decimalNumber;
}

double binaryFractionalToDecimal(char *c) {
    char *intN {nullptr};
    intN = (char *)malloc(sizeof(char) * strlen(c) + 1);
    char *intF {nullptr};
    intF = (char *)malloc(sizeof(char) * strlen(c) + 1);// char intF[20];
    char *pch {nullptr};

    double decimalBinaryNumber = 0;
    double floatBinaryNumber = 0;
    int pos = 0, i = 0;

    pch = strchr(c, '.');
    pos = pch - c;
    strncpy(intN, c, pch - c);
    intN[pch-c] = '\0';
    
    while(*(c + pos) != '\0') {
        intF[i] = *(c + pos);
        pos++; i++;
    }

    decimalBinaryNumber = binaryToDecimal(intN);
    floatBinaryNumber = binaryFractionalToFloats(intF);

    decimalBinaryNumber += floatBinaryNumber;
    return decimalBinaryNumber;
}

void octalFractionaltoBinary(float f) {
    
}


int main() {
    long long n = 31;
    char *c = decimalToBinary(n);
    double f = 31.25;
    c = decimalFractionToBinary(f);
    cout<<c;

    return 0;
}