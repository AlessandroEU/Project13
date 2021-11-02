/*
Bondarenko Alex
Group COI-21-1
Exercise #5
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS"); 
    cout << "Найти сумму ряда: S = 1/2 + 1/11 + 1/26 + 1/47 + ...\n"; 
    float a = 2, s = 0, e = 0.001; 
    int n = 1; 
    while (1 / a >= e) { 
        s += 1 / a; 
        n++; 
        a = a + 3 * (2 * n - 1); 
    }
    cout.precision(3); 
    cout << "S = " << s << endl;  
    return 0; 
}
