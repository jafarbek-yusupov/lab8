#include <iostream>
using namespace std;

void revChar(char& c){
    cout << (char)(c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c + 'A' - 'a') << endl;
}


// PROBLEM 15
bool isKaprekak(int n) {
    int d = 4;
    int m = n*n;
    while(m!=0) {
        if( m%pow(10, d-1) + m/pow(10, d-1) == n) {
            return true;
        }
    }
    return false;
}
int main() {
    cout << isKaprekak(55) << endl;
    return 0;
}
