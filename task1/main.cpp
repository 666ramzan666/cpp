#include <iostream>
#include <ctime>
#include <random>
#include <string>
#include <list>
#include <cmath>
using namespace std;

int main()
{
    //подключение поддержки русского языка
    setlocale(LC_ALL, "RU");

    // Задания на циклы
    cout << "\n=== Задания на циклы ===\n";

    // Задание на циклы - 1
    cout << "\nЗадание на циклы 1: Сумма чисел до N\n";
    {
        int user_Numbero, summa = 0;
        cout << "Введите число Numbero: ";
        cin >> user_Numbero;

        for (int i = 0; i <= user_Numbero; i++) {
            summa += i;
        }
        cout << "Сумма чисел до Numbero = " << summa << endl;
    }

    // Задание на циклы - 2
    cout << "\nЗадание на циклы 2: Факториал числа\n";
    {
        int user_Numn, factorialZ = 1, i = 1;
        cout << "Введите число Numn: ";
        cin >> user_Numn;

        while (i <= user_Numn) {
            factorialZ *= i;
            i += 1;
        }
        cout << "Факториал числа Numn: " << factorialZ << endl;
    }

    // Задание на циклы - 3
    cout << "\nЗадание на циклы 3: Четные и нечетные числа\n";
    {
        int number123;
        cout << "Введите число number123: ";
        cin >> number123;

        for (int i = 0; i <= number123; i++) {
            i % 2 == 0 ? cout << "Число " << i << " чётное\n" : cout << "Число " << i << " нечётное\n";
        }
    }

    // Задание на циклы - 4
    cout << "\nЗадание на циклы 4: Отрицательные числа\n";
    {
        int num112;
        cout << "Введите переменную num: ";
        cin >> num112;
        cout << endl;

        for (int i = -num112; i <= -1; i++) {
            cout << -i << endl;
        }
    }

    // Задание на циклы - 5
    cout << "\nЗадание на циклы 5: Таблица умножения\n";
    {
        int numpop;
        cout << "Введите переменную numpop: ";
        cin >> numpop;
        cout << endl;

        for (int i = 1; i <= 10; i++) {
            cout << "Переменная numpop умноженная на " << i << " : " << (numpop * i) << endl;
        }
    }

    // Задание на циклы - 6
    cout << "\nЗадание на циклы 6: Число Фибоначчи\n";
    {
        int numero, fibbbb = 0;
        cout << "Введите переменную numero: ";
        cin >> numero;
        cout << endl;

        if (numero == 0) {
            cout << "Число фибоначи numero: 0" << endl;
        }
        else if (numero == 1) {
            cout << "Число фибоначи numero: 1" << endl;
        }
        else {
            for (int i = 0; i < numero; i++) {
                fibbbb = (pow((1 + sqrt(5)), numero) - pow((1 - sqrt(5)), numero)) / (pow(2, numero) * sqrt(5));
            }
            cout << "Число фибоначи numero: " << fibbbb << endl;
        }
    }

    // Задание на циклы - 7
    cout << "\nЗадание на циклы 7: Сумма цифр числа\n";
    {
        int numeron, result = 0;
        cout << "Введите переменную numero: ";
        cin >> numeron;
        cout << endl;

        string n = to_string(numeron);
        for (int i = 0; i < n.length(); i++) {
            char a = n[i];
            int num = a - '0';
            result += num;
        }
        cout << "Сумма цифр числа numero: " << result << endl;
    }

    // Задание на циклы - 8
    cout << "\nЗадание на циклы 8: Перевернутая строка\n";
    {
        string usr_strr, resulto;
        cout << "Введите переменную usr_strr: ";
        cin >> usr_strr;
        cout << endl;

        for (int i = usr_strr.length() - 1; i >= 0; i--) {
            resulto += usr_strr[i];
        }
        cout << "Перевёрнутая переменная usr_strr: " << resulto << endl;
    }

    // Задание на циклы - 9
    cout << "\nЗадание на циклы 9: Простое число\n";
    {
        int primee;
        bool isPrime = true;
        cout << "Введите переменную primee: ";
        cin >> primee;
        cout << endl;

        if (primee <= 1) {
            cout << "Данное число не является ни простым ни составным." << endl;
        }
        else {
            for (int i = 2; i <= sqrt(primee); i++) {
                if (primee % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << "Данное число является простым." << endl;
            }
            else {
                cout << "Данное число является составным." << endl;
            }
        }
    }

    // Задание на циклы - 10
    cout << "\nЗадание на циклы 10: Симметричное число\n";
    {
        string chislo;
        bool simmetry = true;
        cout << "Введите переменную chislo: ";
        cin >> chislo;
        cout << endl;

        int z = chislo.length() - 1;
        for (int i = 0; i < z; i++, z--) {
            if (chislo[i] != chislo[z]) {
                simmetry = false;
                break;
            }
        }

        if (simmetry) {
            cout << "Данные введённые пользователем симметричны." << endl;
        }
        else {
            cout << "Данные введённые пользователем не симметричны." << endl;
        }
    }

    // Задания на логические операторы и условия
    cout << "\n=== Задания на логические операторы и условия ===\n";

    // Задание 1
    cout << "\nЗадание 1: Четное/нечетное\n";
    {
        int lingangu;
        cout << "Введите число lingangu: ";
        cin >> lingangu;
        cout << endl;

        if (lingangu % 2 == 0) {
            cout << "Число, введённое пользователем является чётным." << endl;
        }
        else {
            cout << "Число, введённое пользователем является не чётным." << endl;
        }
    }

    // Задание 2
    cout << "\nЗадание 2: Положительное/отрицательное\n";
    {
        int wazalingangu;
        cout << "Введите число wazalingangu: ";
        cin >> wazalingangu;
        cout << endl;

        if (wazalingangu > 0) {
            cout << "Число, введённое пользователем является положительным." << endl;
        }
        else if (wazalingangu < 0) {
            cout << "Число, введённое пользователем является отрицательным." << endl;
        }
        else {
            cout << "Число, введённое пользователем является равным нулю." << endl;
        }
    }

    // Задание 3
    cout << "\nЗадание 3: Сравнение с 10\n";
    {
        int numerrrr;
        cout << "Введите число numerrrr: ";
        cin >> numerrrr;
        cout << endl;

        cout << (numerrrr > 10 ? "Больше 10." : "10 и меньше.") << endl;
    }

    // Задание 4
    cout << "\nЗадание 4: Кратность 5\n";
    {
        int nomba;
        cout << "Введите число nomba: ";
        cin >> nomba;
        cout << endl;

        cout << (nomba % 5 == 0 ? "Введённое число кратно 5." : "Введённое число кратно не 5.") << endl;
    }

    // Задание 5
    cout << "\nЗадание 5: Високосный год\n";
    {
        int yeargod;
        cout << "Введите переменную yeargod: ";
        cin >> yeargod;
        cout << endl;

        if ((yeargod % 4 == 0 && yeargod % 100 != 0) || yeargod % 400 == 0) {
            cout << "Введённый год является високосным." << endl;
        }
        else {
            cout << "Введённый год не является високосным." << endl;
        }
    }

    // Задание 6
    cout << "\nЗадание 6: Диапазон 1-100\n";
    {
        int chillnumb;
        cout << "Введите переменную chillnumb: ";
        cin >> chillnumb;
        cout << endl;

        if (chillnumb >= 1 && chillnumb <= 100) {
            cout << "Введённое число попадает в диапазон от 1 до 100." << endl;
        }
        else {
            cout << "Введённое число не попадает в диапазон от 1 до 100." << endl;
        }
    }

    // Задание 7
    cout << "\nЗадание 7: День недели\n";
    {
        int weeeeekday;
        cout << "Введите переменную weeeeekday от 1 до 7: ";
        cin >> weeeeekday;
        cout << endl;

        switch (weeeeekday) {
            case 1: cout << "Сегодня понедельник." << endl; break;
            case 2: cout << "Сегодня вторник." << endl; break;
            case 3: cout << "Сегодня среда." << endl; break;
            case 4: cout << "Сегодня четверг." << endl; break;
            case 5: cout << "Сегодня пятница." << endl; break;
            case 6: cout << "Сегодня суббота!" << endl; break;
            case 7: cout << "Сегодня воскресенье!" << endl; break;
            default: cout << "Неверный ввод данных." << endl; break;
        }
    }

    // Задание 8
    cout << "\nЗадание 8: Месяц года\n";
    {
        int monthnumero;
        cout << "Введите переменную monthnumero от 1 до 12: ";
        cin >> monthnumero;
        cout << endl;

        switch (monthnumero) {
            case 1: cout << "Январь." << endl; break;
            case 2: cout << "Февраль." << endl; break;
            case 3: cout << "Март." << endl; break;
            case 4: cout << "Апрель." << endl; break;
            case 5: cout << "Май." << endl; break;
            case 6: cout << "Июнь." << endl; break;
            case 7: cout << "Июль." << endl; break;
            case 8: cout << "Август." << endl; break;
            case 9: cout << "Сентябрь." << endl; break;
            case 10: cout << "Октябрь." << endl; break;
            case 11: cout << "Ноябрь." << endl; break;
            case 12: cout << "Декабрь." << endl; break;
            default: cout << "Неверный ввод данных." << endl; break;
        }
    }

    // Задание 9
    cout << "\nЗадание 9: Четное и положительное\n";
    {
        int chritsdlo;
        cout << "Введите переменную chritsdlo: ";
        cin >> chritsdlo;
        cout << endl;

        if (chritsdlo % 2 == 0 && chritsdlo >= 0) {
            cout << "Число, введённое пользователем и чётное и положительное." << endl;
        }
    }

    // Задание 10
    cout << "\nЗадание 10: Нечетное или отрицательное\n";
    {
        int dlochislogo;
        cout << "Введите переменную dlochislogo: ";
        cin >> dlochislogo;
        cout << endl;

        if (dlochislogo % 2 != 0 || dlochislogo < 0) {
            cout << "Число, введённое пользователем либо не чётное, либо отрицательное." << endl;
        }
    }

    // Задания на комбинирование операторов
    cout << "\n=== Задания на комбинирование операторов ===\n";

    // Задание 1
    cout << "\nЗадание 1: Диапазон 10-20 и четное\n";
    {
        int combonum;
        cout << "Введите переменную combonum: ";
        cin >> combonum;
        cout << endl;

        if (combonum >= 10 && combonum <= 20 && combonum % 2 == 0) {
            cout << "Введённое число попадает в диапазон от 10 до 20 и является чётным." << endl;
        }
        else {
            cout << "Введённое число не попадает в диапазон от 10 до 20 или не является чётным." << endl;
        }
    }

    // Задание 2
    cout << "\nЗадание 2: Положительное и четное\n";
    {
        int terno;
        cout << "Введите число terno: ";
        cin >> terno;
        cout << endl;

        cout << ((terno >= 0 && terno % 2 == 0) ? "Введённое число и больше 0 и чётное" : "Введённое число или меньше 0 или не чётное.") << endl;
    }

    // Задание 3
    cout << "\nЗадание 3: Оценка\n";
    {
        char ocenkoz;
        cout << "Введите переменную ocenkoz (A, B, C, D, F): ";
        cin >> ocenkoz;
        cout << endl;

        switch (ocenkoz) {
            case 'A': cout << "Отличная оценка." << endl; break;
            case 'B': cout << "Хорошая оценка." << endl; break;
            case 'C': cout << "Удовлетворительная оценка." << endl; break;
            case 'D': 
            case 'F': cout << "Не удовлетворительная оценка." << endl; break;
            default: cout << "Неверный ввод данных." << endl; break;
        }
    }

    // Задание 4
    cout << "\nЗадание 4: Положительное и кратное 3\n";
    {
        int dobzhe;
        cout << "Введите переменную dobzhe: ";
        cin >> dobzhe;
        cout << endl;

        if (dobzhe >= 0 && dobzhe % 3 == 0) {
            cout << "Число, введённое пользователем является положительным и делится на 3." << endl;
        }
        else {
            cout << "Число, введённое пользователем или не является положительным или не делится на 3." << endl;
        }
    }

    // Задание 5
    cout << "\nЗадание 5: Диапазон 1-100 и нечетное\n";
    {
        int us_numbero;
        cout << "Введите переменную us_numbero: ";
        cin >> us_numbero;
        cout << endl;

        if ((us_numbero >= 1 && us_numbero <= 100) && us_numbero % 2 != 0) {
            cout << "Введённое число попадает в диапазон от 1 до 100 и не является чётным." << endl;
        }
        else {
            cout << "Введённое число не попадает в диапазон от 1 до 100 или является чётным." << endl;
        }
    }

    // Дополнительные задания
    cout << "\n=== Дополнительные задания ===\n";

    // Дополнительное задание 1
    cout << "\nДополнительное задание 1: Угадай число\n";
    {
        int usero_munr, secret;
        bool done = false;

        random_device rnd;
        mt19937 geno(rnd());
        uniform_int_distribution<> dis(1, 100);

        secret = dis(geno);

        while (!done) {
            cout << "Попытайтесь угадать число (1-100): ";
            cin >> usero_munr;
            cout << endl;
            if (usero_munr == secret) {
                cout << "Вы угадали!" << endl;
                done = true;
            }
            else if (usero_munr < secret) {
                cout << "Загаданное число больше." << endl;
            }
            else {
                cout << "Загаданное число меньше." << endl;
            }
        }
    }

    // Дополнительное задание 2
    cout << "\nДополнительное задание 2: Калькулятор\n";
    {
        double resultat;
        double a, b;
        char operation;

        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите математическую операцию (+, -, *, /): ";
        cin >> operation;
        cout << "Введите второе число: ";
        cin >> b;

        if (operation == '/' && b == 0) {
            cout << "На 0 делить нельзя" << endl;
        }
        else {
            switch (operation) {
                case '+': resultat = a + b; break;
                case '-': resultat = a - b; break;
                case '*': resultat = a * b; break;
                case '/': resultat = a / b; break;
                default: cout << "Ошибка в данных"; return 0;
            }
            cout << "Результат операции = " << resultat << endl;
        }
    }

    // Дополнительное задание 3
    cout << "\nДополнительное задание 3: Возрастные группы\n";
    {
        int vozrast;
        cout << "Введите ваш возраст: ";
        cin >> vozrast;

        if (vozrast < 13) {
            cout << "Вы ребенок." << endl;
        }
        else if (vozrast <= 19) {
            cout << "Вы подросток." << endl;
        }
        else if (vozrast <= 30) {
            cout << "Вы взрослый." << endl;
        }
        else {
            cout << "Вы пожилой." << endl;
        }
    }

    // Дополнительное задание 4
    cout << "\nДополнительное задание 4: Проверка пароля\n";
    {
        string parolpassword;
        bool hasDigit = false, hasSpecial = false;

        cout << "Введите пароль, который должен содержать как минимум 8 символов, содержать цифры а также специальные символы(& $ # @ /): ";
        cin >> parolpassword;

        if (parolpassword.length() < 8) {
            cout << "Пароль должен содержать как минимум 8 символов." << endl;
            return 0;
        }

        for (char c : parolpassword) {
            if (isdigit(c)) hasDigit = true;
            if (c == '&' || c == '$' || c == '#' || c == '@' || c == '/') hasSpecial = true;
        }

        if (!hasDigit) {
            cout << "Пароль должен содержать цифры." << endl;
            return 0;
        }

        if (!hasSpecial) {
            cout << "Пароль должен содержать специальные символы (& $ # @ /)." << endl;
            return 0;
        }

        cout << "Вы успешно создали пароль." << endl;
    }

    // Дополнительное задание 5
    cout << "\nДополнительное задание 5: Существование треугольника\n";
    {
        double x, y, z;
        cout << "Введите сторону x: ";
        cin >> x;
        cout << "Введите сторону y: ";
        cin >> y;
        cout << "Введите сторону z: ";
        cin >> z;

        if (x + y > z && x + z > y && y + z > x) {
            cout << "Треугольник существует." << endl;
        }
        else {
            cout << "Треугольник не существует." << endl;
        }
    }

    return 0;
}