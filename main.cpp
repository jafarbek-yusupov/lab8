#include <iostream>
using namespace std;

// PROBLEM 10
void revChar(char& c){
    cout << (char)(c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c + 'A' - 'a') << endl;
}

int getType(int n){
    int c=0;
    while(n!=0){
        n/=10;  c++;
    }
    return c%2==0 ? 1:0 ;
}
// PROBLEM 16
int digits(int n){
    int d = 0;
    while(n!=0){ n/=10; d++; }
    return d;
}
int rvrs(int n){
    int d = digits(n);
    int m = 0;
    while(n!=0){
        m += n%10 * pow(10, d-1);
        n/=10; d--;
    }
    return m;
}
bool isLychrel(int n){
    return (rvrs(n)+n == rvrs(rvrs(n)+n) ? false : true);
}
// PROBLEM 16

int main() {
    int n;
    cin >> n;
    cout << (isLychrel(n) == 1 ? "This is Lychrel number" : "This is NOT Lychrel number");
    //cout << (getType(n) == 1 ? "Even digit int" : "Odd digit int")  << endl;
    return 0;
}
