#include <iostream>
using namespace std;

int cLCULteFibonacciness(int a1, int a2, int a3, int a4, int a5) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a3 == a4 - a2) count++;
    if (a3 == a5 - a4) count++;
    return count;  // Add return statement
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5, a3;
        cin >> a1 >> a2 >> a4 >> a5;
        int max_fibonacciness = 0;
        
        
        a3 = a1 + a2;
        max_fibonacciness = cLCULteFibonacciness(a1, a2, a3, a4, a5);
        
       
        a3 = a4 - a2;
        int fib = cLCULteFibonacciness(a1, a2, a3, a4, a5);
        if (fib > max_fibonacciness) {
            max_fibonacciness = fib;
        }
        
        cout << max_fibonacciness << endl;
    }
    return 0;
}
