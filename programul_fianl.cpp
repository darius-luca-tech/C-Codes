#include <stdio.h> 
#include <string.h> 
  
char ch; 
  
// Function to print the letter A 
void a(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int a = 0; a < 8; a++) { 
            if (i == 0 && (a == 0 || a == 7)) 
                printf(" "); 
            else if (a < 2 || a > 5) { 
                printf("%c", ch); 
            } 
            else if (i < 2 || (i > 3 && i < 5)) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter B 
void b(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 9; i++) { 
        printf(" %c%c", ch, ch); 
  
        for (int r = 0; r < 6; r++) { 
            if (i == 0 && r < 5) 
                printf("%c", ch); 
            else if (i == 1) 
                printf("%c", ch); 
            else if (i < 4 && i > 0 
                     && r > 3) { 
                printf("%c", ch); 
            } 
  
            else if (i == 4 && r < 5) { 
                printf("%c", ch); 
            } 
            else if (i > 4 && i < 7 
                     && r > 3) { 
                printf("%c", ch); 
            } 
            else if (i == 7) { 
                printf("%c", ch); 
            } 
            else if (i == 8 && r < 5) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter C 
void c(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
  
        printf(" "); 
        for (int o = 0; o < 8; o++) { 
            if (i == 0 && (o <= 1)) 
                printf(" "); 
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o > 1))) 
                printf(" "); 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o > 1))) 
                printf(" "); 
            else if ((i == 3 || i == 4 
                      || i == 5) 
                     && (o > 0)) 
                printf(" "); 
            else if (i == 6 
                     && (o == 0 || o == 8 + 5 - i 
                         || (o > 1))) 
                printf(" "); 
            else if (i == 7 
                     && (o <= 1)) 
                printf(" "); 
            else { 
                printf("%c", ch); 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter D 
void d(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        { 
            printf(" %c", ch); 
        } 
  
        for (int o = 0; o < 8; o++) { 
            if (i == 0 && (o >= 6 - i)) 
                printf(" "); 
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o < 6))) 
                printf(" "); 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o < 6))) 
                printf(" "); 
            else if ((i == 3 || i == 4 
                      || i == 5) 
                     && (o < 7)) 
                printf(" "); 
            else if (i == 6 
                     && (o == 0 || o == 8 + 5 - i 
                         || (o < 6))) 
                printf(" "); 
            else if (i == 7 
                     && (o >= 6 - i + 7)) 
                printf(" "); 
            else { 
                printf("%c", ch); 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter E 
void e(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 7; j++) { 
            if (i == 0) { 
                printf("%c", ch); 
            } 
            else if (i > 0 && i < 3 
                     && j < 2) { 
                printf("%c", ch); 
            } 
            else if (i == 3 && j < 6) { 
                printf("%c", ch); 
            } 
            else if (i > 3 && i < 6 
                     && j < 2) { 
                printf("%c", ch); 
            } 
            else if (i == 6) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter F 
void f(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 7; j++) { 
            if (i == 0) { 
                printf("%c", ch); 
            } 
            else if (i > 0 && i < 3 
                     && j < 2) { 
                printf("%c", ch); 
            } 
            else if (i == 3 && j < 6) { 
                printf("%c", ch); 
            } 
            else if (i > 3 && i < 7 
                     && j < 2) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter G 
void g(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
  
        printf(" "); 
        for (int o = 0; o < 8; o++) { 
            if (i == 4 && o > 3 
                || (o == 4 || o == 7) 
                       && i > 4) { 
                printf("%c", ch); 
            } 
  
            else if (i == 0 && (o <= 1)) 
                printf(" "); 
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o > 1))) 
                printf(" "); 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o > 1))) 
                printf(" "); 
            else if ((i == 3 || i == 4 
                      || i == 5) 
                     && (o > 0)) 
                printf(" "); 
            else if (i == 6 
                     && (o == 0 || (o > 1))) 
                printf(" "); 
            else if (i == 7 
                     && (o <= 1 || o == 5 
                         || o == 6)) 
                printf(" "); 
            else { 
                printf("%c", ch); 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter H 
void h(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int h = 0; h < 8; h++) { 
            if (h < 2 || h > 5) { 
                printf("%c", ch); 
            } 
            else if (i > 2 && i < 5) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter I 
void i(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
  
        printf(" "); 
  
        for (int t = 0; t < 8; t++) { 
  
            if ((i < 1 || i > 6) 
                && t < 8) { 
                printf("%c", ch); 
            } 
  
            else if (i > 0 && t < 3) 
                printf(" "); 
            else if (i > 0 && t > 2 
                     && t < 5) { 
                printf("%c", ch); 
            } 
            else if (i > 0 && t > 4) 
                printf(" "); 
            else { 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter J 
void j(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
  
        for (int h = 0; h < 8; h++) { 
            if (i < 1) { 
                printf("%c", ch); 
            } 
            else if (i == 5 && h < 1) { 
                printf("%c", ch); 
            } 
            else if (i < 7 && h > 5) { 
                printf("%c", ch); 
            } 
            else if (i == 7 
                     && (h == 0 || h == 7)) 
                printf(" "); 
            else if (i > 5) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter K 
void k(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
  
        for (int k1 = 0; k1 < 7; k1++) { 
            if (k1 < 2) { 
                printf("%c", ch); 
            } 
            else if ((k1 >= 5 - i) 
                     && (k1 <= 6 - i)) { 
                printf("%c", ch); 
            } 
  
            else if (i >= 4) { 
                if (k1 == i - 2 || k1 == i - 1) { 
                    printf("%c", ch); 
                } 
                else
                    printf(" "); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter L 
void l(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
  
        { 
            printf("%c%c", ch, ch); 
        } 
        if (i == 6) { 
            { 
                printf("%c%c", ch, ch); 
            } 
            { 
                printf("%c%c", ch, ch); 
            } 
            printf("%c%c", ch, ch); 
        } 
        if (i == 7) { 
            { 
                printf("%c%c", ch, ch); 
            } 
            { 
                printf("%c%c", ch, ch); 
            } 
            printf("%c%c", ch, ch); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter M 
void m(void) 
{ 
    printf("\n"); 
  
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 8; j++) { 
            if (j == 0 || j == 7) { 
                printf("%c", ch); 
            } 
            else if (i < 4 
                     && (j == 7 - i || j == i)) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter N 
void n(void) 
{ 
    printf("\n"); 
  
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int n = 0; n < 8; n++) { 
            if (n < 2 || n > 5) { 
                printf("%c", ch); 
            } 
            else if (i == n - 1 
                     || i == n + 1 || i == n) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter O 
void o(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int o = 0; o < 8; o++) { 
            if (i == 0 && (o <= 1 || o >= 6 - i)) 
                printf(" "); 
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if ((i == 3 || i == 4 || i == 5) 
                     && (o > 0 && o < 7)) 
                printf(" "); 
            else if (i == 6 
                     && (o == 0 || o == 8 + 5 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if (i == 7 
                     && (o <= 1 || o >= 6 - i + 7)) 
                printf(" "); 
            else { 
                printf("%c", ch); 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter P 
void p(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        { 
            printf("%c%c", ch, ch); 
        } 
  
        for (int r = 0; r < 6; r++) { 
            if (i == 0 && r < 5) 
                printf("%c", ch); 
            else if (i == 1) 
                printf("%c", ch); 
            else if (i < 4 && i > 0 && r > 3) { 
                printf("%c", ch); 
            } 
  
            else if (i == 4 && r < 5) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter Q 
void q(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int o = 0; o < 8; o++) { 
            if (o == i) 
                printf("%c", ch); 
  
            else if (i == 0 
                     && (o <= 1 || o >= 6 - i)) 
                printf(" "); 
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if ((i == 3 || i == 4 || i == 5) 
                     && (o > 0 && o < 7)) 
                printf(" "); 
            else if (i == 6 
                     && (o == 0 || o == 8 + 5 - i 
                         || (o < 6 && o > 1))) 
                printf(" "); 
            else if (i == 7 
                     && (o <= 1 || o >= 6 - i + 7)) 
                printf(" "); 
            else { 
                printf("%c", ch); 
            } 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter R 
void r(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        { 
            printf("%c%c", ch, ch); 
        } 
  
        for (int r = 0; r < 6; r++) { 
            if (i == 0 && r < 5) 
                printf("%c", ch); 
            else if (i == 1) 
                printf("%c", ch); 
            else if (i < 4 && i > 0 
                     && r > 3) { 
                printf("%c", ch); 
            } 
  
            else if (i >= 4) { 
                if (i == 4 
                    && (r == 3 || r == 4)) { 
                    printf("%c", ch); 
                } 
  
                else if (r == i - 2 
                         || r == i - 3) { 
                    printf("%c", ch); 
                } 
                else
                    printf(" "); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter S 
void s(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 7; j++) { 
            if (i == 0 && j > 0) { 
                printf("%c", ch); 
            } 
            else if (i > 0 && i < 3 
                     && j < 2) { 
                printf("%c", ch); 
            } 
            else if (i == 3 && j > 0 
                     && j < 6) { 
                printf("%c", ch); 
            } 
            else if (i > 3 && i < 6 
                     && j > 4) { 
                printf("%c", ch); 
            } 
            else if (i == 6 && j < 6) { 
                printf("%c", ch); 
            } 
  
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter T 
void t(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
  
        printf(" "); 
        for (int t = 0; t < 8; t++) { 
  
            if (i < 2 && t < 8) { 
                printf("%c", ch); 
            } 
  
            if (i > 1 && t < 3) 
                printf(" "); 
            if (i > 1 && t > 2 
                && t < 5) { 
                printf("%c", ch); 
            } 
            if (i > 1 && t > 4) 
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter U 
void u(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
  
        for (int h = 0; h < 8; h++) { 
            if (i < 7 && (h < 2 || h > 5)) { 
                printf("%c", ch); 
            } 
            else if (i == 7 
                     && (h == 0 || h == 7)) 
                printf(" "); 
            else if (i > 5) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter V 
void v(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int v = 0; v < 8; v++) 
            if ((v == 0 || v == 7) 
                && i < 4) { 
                printf("%c", ch); 
            } 
            else if ((v == i - 4 || v == 11 - i) 
                     && i >= 4) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        printf("\n"); 
    } 
} 
  
// Function to print the letter W 
void w(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 8; j++) { 
            if (j == 0 || j == 7) { 
                printf("%c", ch); 
            } 
            else if (i > 3 
                     && (j == 7 - i || j == i)) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter X 
void x(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int m = 0; m < 8; m++) { 
            if (i == m || m == 7 - i) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
  
        printf("\n"); 
    } 
} 
  
// Function to print the letter Y 
void y(void) 
{ 
    printf("\n"); 
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
  
        for (int y = 0; y < 8; y++) { 
            if (i < 4) { 
                if (y == i || y == i + 1 
                    || y == 6 - i || y == 7 - i) { 
                    printf("%c", ch); 
                } 
                else
                    printf(" "); 
            } 
            else if (y == 3 || y == 4) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the letter Z 
void z(void) 
{ 
    printf("\n"); 
  
    for (int i = 0; i < 8; i++) { 
        printf(" "); 
        for (int j = 0; j < 8; j++) { 
            if (i == 0 || i == 7) { 
                printf("%c", ch); 
            } 
            else if (j == 7 - i) { 
                printf("%c", ch); 
            } 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
  
// Function to print the required pattern 
// by taking out each characters in it 
void printPattern(char* str) 
{ 
  
    int in = 0; 
  
    while (str[in]) { 
  
        char ch = str[in]; 
        if (ch < 95) 
            ch = ch + 32; 
        switch (ch) { 
        case 'a': 
            a(); 
            break; 
        case 'b': 
            b(); 
            break; 
        case 'c': 
            c(); 
            break; 
        case 'd': 
            d(); 
            break; 
        case 'e': 
            e(); 
            break; 
        case 'f': 
            f(); 
            break; 
        case 'g': 
            g(); 
            break; 
        case 'h': 
            h(); 
            break; 
        case 'i': 
            i(); 
            break; 
        case 'j': 
            j(); 
            break; 
        case 'k': 
            k(); 
            break; 
        case 'l': 
            l(); 
            break; 
        case 'm': 
            m(); 
            break; 
        case 'n': 
            n(); 
            break; 
        case 'o': 
            o(); 
            break; 
        case 'p': 
            p(); 
            break; 
        case 'q': 
            q(); 
            break; 
        case 'r': 
            r(); 
            break; 
        case 's': 
            s(); 
            break; 
        case 't': 
            t(); 
            break; 
        case 'u': 
            u(); 
            break; 
        case 'v': 
            v(); 
            break; 
        case 'w': 
            w(); 
            break; 
        case 'x': 
            x(); 
            break; 
        case 'y': 
            y(); 
            break; 
        case 'z': 
            z(); 
            break; 
        default: 
            break; 
        } 
        in++; 
    } 
} 
  
// Driver code 
int main() 
{ 
    ch = '8'; 
    char str = 'GFG'; 
    printPattern(str); 
  
    return 0; 
} 