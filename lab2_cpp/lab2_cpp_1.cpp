#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // объявляем переменные введенного для проверки числа и результат проверки числа на простоту
    bool is_prime = true;
    int x;
    cout << "Enter number"; cin >> x;
    // проверка введенного числа на простоту
    if (x < 2) { is_prime = false; }
    else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) { is_prime = false; break; }
        };
    }
    // подсчет простых чисел, предшествующих введенному числу
    int count = 0;
    bool is_prime_2;
    for (int i = 1; i <= x; i++) {
        is_prime_2 = true;
        if (i < 2) { is_prime_2 = false;}
        else {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) { is_prime_2 = false; break; }
            };
        }
        if (is_prime_2) { count++; };
    }
    // проверка простоты номера простого числа
    bool is_prime_3 = true;
    if (count < 2) { is_prime_3 = false; }
    else {
        for (int i = 2; i <= sqrt(count); i++) {
            if (count % i == 0) { is_prime_3 = false; break; }
        };
    }
    if (is_prime && is_prime_3) {
        cout << "Number is super prime\n";
        cout << count << "\n";
    }
    else {
        cout << "Number is not super prime\n";
        cout << count << "\n";
    }

}
