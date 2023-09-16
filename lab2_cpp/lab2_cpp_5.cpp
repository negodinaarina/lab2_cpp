#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    // Объявляем переменные, просим ввести количество выстрелов
    double x; double y; int count; int score;
    count, score = 0, 0;
    // В цикле каждый раз принимает координаты выстрела и
    // проверяем на попадание в зоны с очками, прибавляем к общему счету count
    // пока количество очков менее 50
    while(score < 50){
        cout << "Enter X and Y";
        cin >> x;
        cin >> y;
        count += 1;
        if(x*x + y*y <= 1){
            score += 10;
        }
        else if(x*x + y*y <= 4){
            score += 5;
        }
    }
    cout << "Total score " << score << endl;
    cout << "Shots count " << count << endl;
    // Определяем уровень по количеству выстрелов
    if(count <= 9){
        cout << "You're a pro!";
    }
    else if(count <= 20){
        cout << "You're not bad!";
    }
    else{
        cout << "You're a beginner...";
    }
}