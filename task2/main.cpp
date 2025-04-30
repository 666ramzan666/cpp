#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <list>
#include <algorithm>
#include <windows.h> // Для цветного вывода в Windows

using namespace std;

// Функция для установки цвета текста в консоли
void SetColor(int text, int background = 0) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main() {
    setlocale(LC_ALL, "RU");

    // Задание 1: Сумма четных чисел до Z
    {
        SetColor(10); // Зеленый цвет
        cout << "\n=== Задание 1: Сумма четных чисел до Z ===" << endl;
        SetColor(7); // Возвращаем белый цвет

        auto summa = [](int a) {
            int n = 0;
            for (int i = 1; i <= a; i++) {
                i % 2 == 0 ? n += i : n += 0;
            }
            return n;
        };

        int z;
        cout << "Введите число Z: ";
        cin >> z;
        cout << "Сумма четных чисел от 1 до Z: " << summa(z) << endl;
    }

    // Задание 2: Проверка на палиндром
    {
        SetColor(11); // Голубой цвет
        cout << "\n=== Задание 2: Проверка на палиндром ===" << endl;
        SetColor(7);

        auto polind = [](string palo) {
            int k = palo.length() - 1;
            bool symmetry = true;

            for (int i = 0; i < k; i++, k--) {
                if (palo[i] != palo[k]) {
                    symmetry = false;
                    break;
                }
            }
            return symmetry ? "Является палиндромом!" : "Не является палиндромом.";
        };

        string polin;
        cout << "Введите слово: ";
        cin >> polin;
        cout << polind(polin) << endl;
    }

    // Задание 3: Минимальная и максимальная цифра числа
    {
        SetColor(9); // Синий цвет
        cout << "\n=== Задание 3: Минимальная и максимальная цифра числа ===" << endl;
        SetColor(7);

        auto tsin = [](int num) {
            string s = to_string(num);
            char min_digit = s[0], max_digit = s[0];
            
            for (char c : s) {
                if (c < min_digit) min_digit = c;
                if (c > max_digit) max_digit = c;
            }
            
            return string("Минимальная цифра: ") + min_digit + 
                   ", Максимальная цифра: " + max_digit;
        };

        int h;
        cout << "Введите число h: ";
        cin >> h;
        cout << tsin(h) << endl;
    }

    // Задание 4: Римские цифры
    {
        SetColor(13); // Фиолетовый цвет
        cout << "\n=== Задание 4: Преобразование в римские цифры ===" << endl;
        SetColor(7);

        auto roma = [](int n) {
            if (n < 1 || n > 3999) return string("Число должно быть от 1 до 3999");
            
            string result;
            int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
            string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
            
            for (int i = 0; i < 13; i++) {
                while (n >= values[i]) {
                    n -= values[i];
                    result += symbols[i];
                }
            }
            return result;
        };

        int z;
        cout << "Введите число z (1-3999): ";
        cin >> z;
        cout << "Римское представление: " << roma(z) << endl;
    }

    // Задание 5: Сумма факториалов
    {
        SetColor(10);
        cout << "\n=== Задание 5: Сумма факториалов ===" << endl;
        SetColor(7);

        auto factorn = [](int g) {
            int a = 1, result = 0;
            for (int i = 1; i <= g; i++) {
                a *= i;
                result += a;
            }
            return result;
        };

        int zov;
        cout << "Введите число zov: ";
        cin >> zov;
        cout << "Сумма факториалов: " << factorn(zov) << endl;
    }

    // Задание 6: Сумма квадратов
    {
        SetColor(11);
        cout << "\n=== Задание 6: Сумма квадратов ===" << endl;
        SetColor(7);

        auto sumquadro = [](int n) {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                sum += i * i;
            }
            return sum;
        };

        int u;
        cout << "Введите число u: ";
        cin >> u;
        cout << "Сумма квадратов: " << sumquadro(u) << endl;
    }

    // Задание 7: Логарифм
    {
        SetColor(9);
        cout << "\n=== Задание 7: Логарифм ===" << endl;
        SetColor(7);

        auto loga = [](int n, int b) {
            return log(n) / log(b);
        };

        int h, m;
        cout << "Введите аргумент логарифма: ";
        cin >> h;
        cout << "Введите основание логарифма: ";
        cin >> m;
        cout << "Результат: " << loga(h, m) << endl;
    }

    // Задание 8: Сумма цифр числа
    {
        SetColor(13);
        cout << "\n=== Задание 8: Сумма цифр числа ===" << endl;
        SetColor(7);

        auto summachisel = [](int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        };

        int q;
        cout << "Введите число q: ";
        cin >> q;
        cout << "Сумма цифр: " << summachisel(q) << endl;
    }

    // Задание 9: Совершенное число
    {
        SetColor(10);
        cout << "\n=== Задание 9: Совершенное число ===" << endl;
        SetColor(7);

        auto perfect = [](int a) {
            int sum = 0;
            for (int i = 1; i <= a/2; i++) {
                if (a % i == 0) sum += i;
            }
            return sum == a ? "Число является совершенным!" : "Число не является совершенным!";
        };

        int p;
        cout << "Введите число: ";
        cin >> p;
        cout << perfect(p) << endl;
    }

    // Задание 10: Сложение дробей
    {
        SetColor(11);
        cout << "\n=== Задание 10: Сложение дробей ===" << endl;
        SetColor(7);

        auto drobi = [](int x1, int x2, int x3, int x4) {
            int num = x1 * x4 + x3 * x2;
            int den = x2 * x4;
            
            // Сокращение дроби
            int gcd = [](int a, int b) {
                while (b) {
                    a %= b;
                    swap(a, b);
                }
                return a;
            }(num, den);
            
            num /= gcd;
            den /= gcd;
            
            if (den == 1) return to_string(num);
            return to_string(num) + "/" + to_string(den);
        };

        int x1, x2, x3, x4;
        cout << "Введите числитель первой дроби: ";
        cin >> x1;
        cout << "Введите знаменатель первой дроби: ";
        cin >> x2;
        cout << "Введите числитель второй дроби: ";
        cin >> x3;
        cout << "Введите знаменатель второй дроби: ";
        cin >> x4;
        
        cout << "Результат: " << drobi(x1, x2, x3, x4) << endl;
    }

    // Задание 11: Делители числа
    {
        SetColor(9);
        cout << "\n=== Задание 11: Делители числа ===" << endl;
        SetColor(7);

        auto deliteli = [](int x) {
            list<int> dels;
            for (int i = 1; i <= x; i++) {
                if (x % i == 0) dels.push_back(i);
            }
            return dels;
        };

        int f;
        cout << "Введите число: ";
        cin >> f;
        
        auto divisors = deliteli(f);
        cout << "Делители числа " << f << ": ";
        for (int d : divisors) cout << d << " ";
        cout << endl;
    }

    // Задание 12: НОД двух чисел
    {
        SetColor(13);
        cout << "\n=== Задание 12: Наибольший общий делитель ===" << endl;
        SetColor(7);

        auto NODs = [](int a, int b) {
            while (b) {
                a %= b;
                swap(a, b);
            }
            return a;
        };

        int xa, xb;
        cout << "Введите первое число: ";
        cin >> xa;
        cout << "Введите второе число: ";
        cin >> xb;
        
        cout << "НОД(" << xa << ", " << xb << ") = " << NODs(xa, xb) << endl;
    }

    // Задание 13: Сумма чисел Фибоначчи
    {
        SetColor(10);
        cout << "\n=== Задание 13: Сумма чисел Фибоначчи ===" << endl;
        SetColor(7);

        auto summafib = [](int b) {
            if (b == 0) return 0;
            if (b == 1) return 1;
            
            int prev = 0, curr = 1, sum = 1;
            for (int i = 2; i <= b; i++) {
                int next = prev + curr;
                sum += next;
                prev = curr;
                curr = next;
            }
            return sum;
        };

        int g;
        cout << "Введите число: ";
        cin >> g;
        cout << "Сумма чисел Фибоначчи: " << summafib(g) << endl;
    }

    // Задание 14: Сортировка строки
    {
        SetColor(11);
        cout << "\n=== Задание 14: Сортировка строки ===" << endl;
        SetColor(7);

        auto sortString = [](string str) {
            sort(str.begin(), str.end());
            return str;
        };

        string input;
        cout << "Введите строку: ";
        cin >> input;
        cout << "Отсортированная строка: " << sortString(input) << endl;
    }

    // Задание 15: Анаграммы
    {
        SetColor(9);
        cout << "\n=== Задание 15: Проверка на анаграммы ===" << endl;
        SetColor(7);

        auto anogrammo = [](string first, string second) {
            if (first.length() != second.length()) return false;
            
            sort(first.begin(), first.end());
            sort(second.begin(), second.end());
            
            return first == second;
        };

        string s1, s2;
        cout << "Введите первую строку: ";
        cin >> s1;
        cout << "Введите вторую строку: ";
        cin >> s2;
        
        cout << "Строки " << (anogrammo(s1, s2) ? "являются" : "не являются") << " анаграммами" << endl;
    }

    // Задание 16: Объединение строк с ограничением длины
    {
        SetColor(13);
        cout << "\n=== Задание 16: Объединение строк с ограничением длины ===" << endl;
        SetColor(7);

        auto operation = [](string str1, string str2, size_t length) {
            string result = str1 + str2;
            if (result.length() > length) {
                result = result.substr(0, length);
            }
            return result;
        };

        string s1, s2;
        size_t len;
        cout << "Введите первую строку: ";
        cin >> s1;
        cout << "Введите вторую строку: ";
        cin >> s2;
        cout << "Введите максимальную длину: ";
        cin >> len;
        
        cout << "Результат: " << operation(s1, s2, len) << endl;
    }

    // Задание 17: Удаление повторяющихся символов
    {
        SetColor(10);
        cout << "\n=== Задание 17: Удаление повторяющихся символов ===" << endl;
        SetColor(7);

        auto deleto = [](string str) {
            sort(str.begin(), str.end());
            str.erase(unique(str.begin(), str.end()), str.end());
            return str;
        };

        string s;
        cout << "Введите строку: ";
        cin >> s;
        cout << "Результат: " << deleto(s) << endl;
    }

    // Задание 18: Сравнение дробей
    {
        SetColor(11);
        cout << "\n=== Задание 18: Сравнение дробей ===" << endl;
        SetColor(7);

        auto showsravnenie = [](int a, int b, int c, int d) {
            double left = (double)a / b;
            double right = (double)c / d;
            
            if (left > right) return 1;
            if (left < right) return -1;
            return 0;
        };

        int x1, x2, x3, x4;
        cout << "Введите числитель первой дроби: ";
        cin >> x1;
        cout << "Введите знаменатель первой дроби: ";
        cin >> x2;
        cout << "Введите числитель второй дроби: ";
        cin >> x3;
        cout << "Введите знаменатель второй дроби: ";
        cin >> x4;
        
        int res = showsravnenie(x1, x2, x3, x4);
        cout << "Результат сравнения: ";
        if (res == 1) cout << "Первая дробь больше";
        else if (res == -1) cout << "Вторая дробь больше";
        else cout << "Дроби равны";
        cout << endl;
    }

    // Задание 19: Верхний регистр
    {
        SetColor(9);
        cout << "\n=== Задание 19: Преобразование в верхний регистр ===" << endl;
        SetColor(7);

        auto uppero = [](string str) {
            transform(str.begin(), str.end(), str.begin(), ::toupper);
            return str;
        };

        string s;
        cout << "Введите строку: ";
        cin >> s;
        cout << "Результат: " << uppero(s) << endl;
    }

    // Задание 20: Число Армстронга
    {
        SetColor(13);
        cout << "\n=== Задание 20: Проверка на число Армстронга ===" << endl;
        SetColor(7);

        auto armstrongnumber = [](string n) {
            int len = n.length();
            int sum = 0;
            for (char c : n) {
                sum += pow(c - '0', len);
            }
            return sum == stoi(n);
        };

        string num;
        cout << "Введите число: ";
        cin >> num;
        cout << "Число " << (armstrongnumber(num) ? "является" : "не является") << " числом Армстронга" << endl;
    }

    return 0;
}