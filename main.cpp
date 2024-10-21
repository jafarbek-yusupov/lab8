#include <iostream>
using namespace std;

int getType(int n){
    int c=0;
    while(n!=0){
        n/=10;  c++;
    }
    return c%2==0 ? 1:0 ;
}

int digits(int n){
    int d = 0;
    while(n!=0){ n/=10; d++; }
    return d;
}

// PROBLEM 16

bool isLychrel(int n){
    int d = digits(n);
    int m = 0;
    while(n!=0){
        m += n%10 * pow(10, d-1);
        n/=10; d--;
    }

    //return m + n == isPal(m + n) ? true : false;
}


int main() {
    int m, n;
    cin >> m >> n;
    cout << isLychrel(n);
    //cout << (getType(n) == 1 ? "Even digit int" : "Odd digit int")  << endl;
    return 0;
}
