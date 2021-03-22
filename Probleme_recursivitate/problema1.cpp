#include <iostream>
using namespace std;

void f(int a, int b) {
    if(a) {
        if(a % 2 == 1) {
            cout<<b<<" ";
        }
        f(a / 2, b * 2);
    }
}

int f1(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        int x = 0;
        x = f1(a, b / 2);
        if(b % 2 == 0) {
            return x * x;
        } else {
            return a * x * x;
        }
    }
}

void f2(int a) {
    if(a) {
        f2(a/16);
        if(a % 16 < 10) {
            cout<<a%16;
        } else {
            cout<<(char)('A'+(a%16-10));
        }
    }
}

void f3(int n) {
    if(n == 1){
        cout<<1<<" ";
    } else {
        f3(n - 1);
        cout<<n<<" ";
        f3(n - 1);
    }
}

void f4(int a, int b) {
    for(int i = a; i <= b; ++i) {
        cout<<i<<" ";
        f4(i+1, b);
    }
}

void f5(int n) {
    if(n != 0) {
        if(n % 10 < 4) cout<<n%10;
        f5(n / 10);
        cout<<n % 10;
    }
}

int f6(int i) {
    if(i > 12) {
        return 1;
    } else {
        return 1 + f6(i + 2);
    }
}

void f7(int x) {
    if(x != 0) {
        cout<<x;
        f7(x - 1);
        
    }
}

int f8(int x) {
    if(x < 10) return x;
    return f8(x / 10) + x % 10;
}

int f9(int x) {
    if(x <= 4) 
        return x * x -3;
    return f8(x - 3) + 4;
}

int f10(int x) {
    if(x < 10) return 1;
    return f10(x / 10) + 1;
}

int f11(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return f11(x, y+1);
    }
}

int f12(int x) {
    if(x == 0) {
        return 0;
    } else {
        return f12(x-1) + 2; 
    }
}

long f13(int n) {
    if(!n) {
        return 0;
    } else {
        return n+f13(n-1); 
    }
}

int f14(int n) {
    if(n > 15) {
        return 0;
    } else {
        // cout<<n<<" "<<n+5<<endl;
        return f14(n+5) + 5;
    }
}

int f15(int n) {
    if(n == 0) {
        return 0;
    } else {
        return 1 + f15(n / 2);
    }
}

int f16(int n) {
    if(!n) {
        return 0;
    } else {
        return f16(n-1) + 2*n;
    }
}

int f17(int n) {
    if(!n) {
        return 0;
    } else {
        return f17(n / 10) * 10 + 1;
    }
}

int f18(int x) {
    if(x % 2 == 0) return 0;
    return 1 + f18(x / 2);
}

void f19(int x) {
    cout<<"*";
    if(x) {
        cout<<x;
        f19(x / 100);
        cout<<x;
    }
}

int f20(int m, int n) {
    if(n == 0) {
        return 1;
    } else {
        return 1 + f20(n, m % n);
    }
} 

void f21(long n) {
    cout<<n%10;
    if(n != 0) {
        f21(n / 100);
        cout<<n % 10;
    }
}

void f22(int x) {
    if(x > 0) {
        if(x % 4 == 0) {
            cout<<"x";
            f22(x - 1);
        } else {
            f22(x / 3);
            cout<<"y";
        }
    }
}

int f23(int n) {
    int c;
    if(n == 0) {
        return 9;
    } else {
        c = f23(n / 10);
        if(n % 10 < c) {
            return n % 10;
        } else {
            return c;
        }
    }
}

int g(long x) {
    if(x > 9) {
        return (x / 10 + x % 10);
    } else { 
        return x;
    }
}

int f24(int c) {
    if(c < 1) {
        return 1;
    } else {
        return g(c+f24(c - 1));
    }
}

void f25(char c) {
    if(c > 'A') f25(c - 1);
    cout<<c;
    if(c > 'A') f25(c - 1);
}

int f26(int n)
{ if (n<=0) return -1;
  if (n%2==0) return 0;
  if (n%3==0) return 0;
  return 1+f26(n-10);
} 

int f27(int x, int y) {
    if(x == 0) return y;
    if(y == 0) return x;
    return f27(x - y, x % y);
}

void f28(int x) {
    cout<<x;
    while(x > 0) {
        f28(x - 1);
        x--;
    }
}

void f29(int n) {
    int i;
    for(i = n; i >= 1; i--) {
        f29(n - 1);
        cout<<i<<" "<<n<<" "<<i<<endl;;
    }
}

void f30(char ch, int x) {
    cout<<ch;
    if(x == 0) {
        cout<<'*';
    } else if(ch == 'a') {
        cout<<x;
    } else {
        f30(ch - 1, x - 1);
    }
}

void f31(int n) {
    if(n > 0) {
        for(int i = 1; i <= n; i++) {
            cout<<i;
        }
        f31(n - 1);
    }
}

int f32(int x, int y) {
    if(x * 5 > y / 5) {
        return x;
    }
    
}

int main() {
    //f(45, 1);
    // cout<<f1(2, 10);
    // cout<<(char)('A'+(12%16-10))<<endl;
    // f2(198);
    // f3(4);
    // f5(54621);
    // cout<<f6(6)<<" "<<f6(5)<<endl;
    // cout<<f10(23461)<<endl;
    // cout<<f11(35, 2)<<endl;
    // cout<<f12(4)<<endl;
    // cout<<f17(3713)<<endl;
    // cout<<bool(20 < 21)<<endl;
    // cout<<f16(7)<<endl;
    // f19(12345);
    // f19(57);
    // cout<<f20(210, 49)<<endl;
    // f21(12345);
    // cout<<f23(23159)<<endl;
    // cout<<f24(6)<<endl;?
    // f25('C')
    // cout<<f26(95)<<endl;
    // cout<<f27(2020, 15)<<endl;
    // f29(3);
    // cout<<f30(30, 15)<<endl;
    // f30('e', -7);
    f31(4);
    return 0;
}


/*




*/





/* O: 3 2 1 0 0
    f(3) -> 3 f(2) -> f(1) -> f(0) -> X 3 2 1 0 0 1 0 0
    f(2) = 2 f(1) -> f(0)  2 1 0 0
    f(1) = 1 f(0) 1 0 
    f(0) = 0


    f(3) - f(2) - f(1) - f(0)
    x = 0
    x = 1

    O:121131211  
    f(3) - f(2) 3 - f(2) 2 - f(2) 1 121131211212111
    f(2) - f(1) 2 - f(1) 1   1211
    f(1) - 1       
                                          
    
*/