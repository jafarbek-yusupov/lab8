#include <iostream>
using namespace std;

int getType(int n){
    int c=0;
    while(n!=0){
        n/=10;  c++;
    }
    return c%2==0 ? 1:0 ;
}



int main() {
    int n;
    cin >> n;
//    cout << (getType(n) == 1 ? "Even digit int" : "Odd digit int")  << endl;
    return 0;
}
