#include <iostream>
#include <ctime>
#include <string>

using namespace std;
int main(){
    int n;
    cout << "Enter number";
    cin >> n;
    cout << "10 ruble coins - " << n / 10 << endl;
    n %= 10;
    cout << "5 ruble coins - " << n / 5 << endl;
    n %= 5;
    cout << "2 ruble coins - " << n / 2 << endl;
    n %= 2;
    cout << "1 ruble coins - " << n << endl;
    return 0;
}