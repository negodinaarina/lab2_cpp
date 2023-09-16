#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    // Объявляем переменные, просим ввести количество выстрелов
    int n; double x, y;
    int count = 0;
    cout << "Enter number of shots";
    cin >> n;
    // В цикле каждый раз принимает координаты выстрела и
    // проверяем на попадание в зоны с очками, прибавляем к общему счету count
    for(int i=0; i < n; i++){
        cout << "Enter X and Y";
        cin >> x;
        cin >> y;
        if(x*x + y*y <= 1){
            count += 10;
        }
        else if(x*x + y*y <= 4){
            count += 5;
        }
    }
    cout << "Total score " << count;
}