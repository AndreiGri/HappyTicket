#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;
    int number;                                                                           // Объявляем переменную для записи номера билета
    int revNum = 0;                                                                       // Объявляем и инициализируем вспомогательные переменные
    int number1 = 0;
    int revNum1 = 0;
    int count = 0;

    cout << " Введите номер билета содержащий чётное кол-во чисел но не более восьми: "; // Запрашиваем номер билета 
    cin >> number;                                                                       // и записываем его в переменную number
    int num = number;                                                                    // Объявляем переменную num и присваиваем ей значение number

    while (num > 0) {                                                                    // Инвертируем значение переменной num
        count++;                                                                         // и считаем кол-во знаков в номере билета
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }

    number /= pow(10, count / 2);                                                       // Сокращаем половину последних знаков в переменных
    revNum /= pow(10, count / 2);                                                       // number и revNum

    while (number > 0 && revNum > 0) {                                                  // Складываем значения цифр обеих переменных
        number1 += number % 10;
        revNum1 += revNum % 10;
        number /= 10;
        revNum /= 10;
    }

    if (number1 == revNum1) {                                                           // Сравниваем суммы значений цифр переменных
        cout << " Вам повезло, это счастливый билет!" << endl;                          // Если равно выводим поздравление 
    }
    else
    {
        cout << " В следующий раз повезёт больше!" << endl;                             // Иначе выводим стимулирующую надпись
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}