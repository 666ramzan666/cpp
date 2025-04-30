#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <string>
using namespace std;

// ANSI escape codes for colors
#define COLOR_RESET   "\033[0m"
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN    "\033[36m"

void printTaskHeader(int taskNumber, const string& description) {
    cout << COLOR_CYAN << "[ - - - " << COLOR_YELLOW << taskNumber << COLOR_CYAN << " - - - ]" 
         << COLOR_RESET << " " << COLOR_GREEN << description << COLOR_RESET << "\n";
}

int zadano1(int* ukaz, int size) {
    printTaskHeader(1, "Сумма элементов массива через указатели");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ukaz + i);
    }
    return sum;
}

void zadano2() {
    printTaskHeader(2, "Поиск максимального элемента в массиве");
    int xummus[6];

    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }
    
    int max = xummus[0];
    for (int i = 0; i <= size(xummus) - 1; i++) {
        int *p{ &xummus[i] };
        if (*p > max) {
            max = *p;
        }
    }

    cout << COLOR_BLUE << "Максимальное число массива: " << max << COLOR_RESET << endl;
}

void zadano3() {
    printTaskHeader(3, "Поиск минимального элемента в массиве");
    int xummus[6];

    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }

    int min = xummus[0];
    for (int i = 0; i <= 4; i++) {
        int* pmass{ &xummus[i] };
        if (*pmass < min) {
            min = *pmass;
        }
    }

    cout << COLOR_BLUE << "Минимальный элемент: " << min << COLOR_RESET << endl;
}

void zadano4(int mas[5], int size) {
    printTaskHeader(4, "Реверс массива через указатели");
    int* start = mas;
    int* end = mas + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    cout << "Реверсированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void zadano5() {
    printTaskHeader(5, "Поиск элемента в массиве");
    int xummus[5];
    int key, result = -1;

    cout << "Введите 5 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }

    cout << "Введите какой элемент хотите найти в массиве: ";
    cin >> key;
    
    for (int i = 0; i <= size(xummus) - 1; i++) {
        int *p{ &xummus[i] };
        if (*p == key) {
            result = i;
            break;
        }
    }

    if (result != -1) {
        cout << COLOR_BLUE << "Элемент находится на индексе: " << result << COLOR_RESET << endl;
    } else {
        cout << COLOR_RED << "Элемент не найден" << COLOR_RESET << endl;
    }
}

void zadano6() {
    printTaskHeader(6, "Удаление элемента из массива");
    int size = 5;
    int mas[] = { 6, 22, 8, 3, 10 };
    int* arr = mas;

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    cout << "Введите элемент для удаления: ";
    cin >> element;

    int* p = arr;
    int* end = arr + size;

    for (; p < end; ++p) {
        if (*p == element) {
            for (int* q = p; q < end - 1; ++q) {
                *q = *(q + 1);
            }
            --size;
            break;
        }
    }
    
    cout << COLOR_BLUE << "Массив после удаления: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << COLOR_RESET << endl;
}

void zadano7(int mas1[], int mas2[]) {
    printTaskHeader(7, "Объединение двух массивов");
    vector<int> obed;
    
    for (int i = 0; i < 5; i++) {
        int* ukaz{ &mas1[i] };
        obed.push_back(*ukaz);
    }
    
    for (int i = 0; i < 5; i++) {
        int* ukaz{ &mas2[i] };
        obed.push_back(*ukaz);
    }
    
    cout << "Объединенный массив:" << endl;
    for (int i : obed) {
        cout << i << " ";
    }
    cout << endl;
}

void zadano8() {
    printTaskHeader(8, "Уникальные элементы массива");
    vector<int> arr = { 45, 1388, 1437, 52, 48, 52, 1388 };
    set<int> uniqueelements;

    for (int num : arr) {
        uniqueelements.insert(num);
    }

    cout << "Уникальные элементы:" << endl;
    for (int i : uniqueelements) {
        cout << i << endl;
    }
}

void zadano9() {
    printTaskHeader(9, "Сортировка массива пузырьком");
    int xummus[7];
    int sizeo = size(xummus);

    cout << "Введите 7 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }

    int* arr = xummus;
    cout << "Исходный массив: ";
    for (int i = 0; i < sizeo; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортировка пузырьком
    for (int i = 0; i < sizeo - 1; ++i) {
        for (int j = 0; j < sizeo - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    
    cout << COLOR_BLUE << "Отсортированный массив: ";
    for (int i = 0; i < sizeo; ++i) {
        cout << arr[i] << " ";
    }
    cout << COLOR_RESET << endl;
}

int zadano10(int mas1[5], int mas2[5]) {
    printTaskHeader(10, "Сумма элементов двух массивов");
    int sumobed = 0;
    
    for (int i = 0; i < 5; i++) {
        int* ukaz{ &mas1[i] };
        sumobed += *ukaz;
    }
    
    for (int i = 0; i < 5; i++) {
        int* ukaz{ &mas2[i] };
        sumobed += *ukaz;
    }
    
    return sumobed;
}

void zadano11() {
    printTaskHeader(11, "Копирование массива");
    int xummus[8];
    int copirka[size(xummus)];

    cout << "Введите 8 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }

    for (int i = 0; i <= size(copirka) - 1; i++) {
        int* p{ &xummus[i] };
        copirka[i] = *p;
    }

    cout << COLOR_BLUE << "Скопированный массив:" << endl;
    for (int i = 0; i <= size(copirka) - 1; i++) {
        cout << copirka[i] << " ";
    }
    cout << COLOR_RESET << endl;
}

void zadano12() {
    printTaskHeader(12, "Сравнение двух массивов");
    const int size1 = 5;
    const int size2 = 5;
    int mas1[] = { 6, 22, 8, 3, 10 };
    int mas2[] = { 23, 2, 18, 34, 11 };
    int* arr1 = mas1;
    int* arr2 = mas2;
    int result = 0;

    cout << "Массив 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Массив 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    if (size1 < size2) result = -1;
    else if (size1 > size2) result = 1;
    else {
        for (int i = 0; i < size1; ++i) {
            if (*(arr1 + i) < *(arr2 + i)) {
                result = -1;
                break;
            }
            else if (*(arr1 + i) > *(arr2 + i)) {
                result = 1;
                break;
            }
        }
    }
    
    cout << COLOR_BLUE << "Результат сравнения: " << result << COLOR_RESET << endl;
}

void zadano13(int mas[5], int size) {
    printTaskHeader(13, "Реверс массива (вариант 2)");
    int* start = mas;
    int* end = mas + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    cout << "Реверсированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void zadano14() {
    printTaskHeader(14, "Подсчет элементов массива");
    int xummus[10];

    cout << "Введите 10 целых чисел массива: " << endl;
    for (int i = 0; i <= size(xummus) - 1; i++) {
        cin >> xummus[i];
    }

    cout << COLOR_BLUE << "Количество элементов в массиве: " << size(xummus) << COLOR_RESET << endl;
}

void zadano15() {
    printTaskHeader(15, "Уникальные элементы (вариант 2)");
    vector<int> arr = { 12, 88, 17, 32, 43, 51, 58 };
    set<int> uniqueelements;

    for (int num : arr) {
        uniqueelements.insert(num);
    }

    cout << "Уникальные элементы:" << endl;
    for (int i : uniqueelements) {
        cout << i << endl;
    }
}

void zadano16(int a) {
    printTaskHeader(16, "Вычисление факториалов");
    vector<int> result;
    int facto = 1;
    
    for (int i = 1; i <= a; i++) {
        facto *= i;
        result.push_back(facto);
    }
    
    cout << "Факториалы чисел от 1 до " << a << ":" << endl;
    for (int i : result) {
        cout << i << endl;
    }
}

void zadano17() {
    printTaskHeader(17, "Числа Фибоначчи");
    int n, result = 0;
    cout << "Введите число n: ";
    cin >> n;

    vector<int> mass;
    mass.push_back(0);
    mass.push_back(1);

    for (int i = 2; i <= n; i++) {
        mass.push_back(mass[i-1] + mass[i-2]);
    }

    cout << COLOR_BLUE << "Числа Фибоначчи от 0 до " << n << ":" << endl;
    for (int i : mass) {
        cout << i << endl;
    }
    cout << COLOR_RESET;
}

void zadano18() {
    printTaskHeader(18, "Возведение в степень");
    int chis, step;

    cout << "Введите число: ";
    cin >> chis;
    cout << "Введите степень: ";
    cin >> step;

    if (step < 0) {
        cout << COLOR_RED << "Степень должна быть положительным целым числом." << COLOR_RESET << endl;
        return;
    }

    vector<int> powers;
    for (int i = 0; i <= step; ++i) {
        powers.push_back(pow(chis, i));
    }

    cout << COLOR_BLUE << "Степени числа " << chis << " до степени " << step << ":" << endl;
    for (int i = 0; i <= step; ++i) {
        cout << chis << "^" << i << " = " << powers[i] << endl;
    }
    cout << COLOR_RESET;
}

void zadano19(int a) {
    printTaskHeader(19, "Проверка на простое число");
    vector<int> prostoe;
    bool prime = true;

    if (a == 0 || a < 0 || a == 1) {
        cout << COLOR_RED << "Данные введены некорректно" << COLOR_RESET << endl;
        return;
    }

    for (int i = 2; i <= sqrt(abs(a)); i++) {
        if (a % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << COLOR_BLUE << "Число простое" << endl;
        cout << "Простые числа до " << a << ":" << endl;
        for (int num = 2; num <= a; num++) {
            bool isPrime = true;
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                prostoe.push_back(num);
            }
        }
        
        for (int i : prostoe) {
            cout << i << " ";
        }
        cout << COLOR_RESET << endl;
    } else {
        cout << COLOR_BLUE << "Число составное" << COLOR_RESET << endl;
    }
}

void zadano20() {
    printTaskHeader(20, "Реверс строки");
    string xummus;
    cout << "Введите строку: " << endl;
    cin >> xummus;
    vector<char> sigmo;

    for (int i = size(xummus) - 1; i >= 0; i--) {
        sigmo.push_back(xummus[i]);
    }

    cout << COLOR_BLUE << "Реверсированная строка: ";
    for (char i : sigmo) {
        cout << i;
    }
    cout << COLOR_RESET << endl;
}

void zadano21() {
    printTaskHeader(21, "Сравнение массивов (вариант 2)");
    const int size1 = 5;
    const int size2 = 5;
    int mas1[] = { 6, 22, 8, 3, 10 };
    int mas2[] = { 23, 2, 18, 34, 11 };
    int* arr1 = mas1;
    int* arr2 = mas2;
    int result = 0;

    cout << "Массив 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Массив 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    if (size1 < size2) result = -1;
    else if (size1 > size2) result = 1;
    else {
        for (int i = 0; i < size1; ++i) {
            if (*(arr1 + i) < *(arr2 + i)) {
                result = -1;
                break;
            }
            else if (*(arr1 + i) > *(arr2 + i)) {
                result = 1;
                break;
            }
        }
    }

    cout << COLOR_BLUE << "Результат сравнения: ";
    if (result == 0) {
        cout << "0. Массивы равны.";
    }
    else if (result == -1) {
        cout << "-1. Первый массив меньше второго.";
    }
    else {
        cout << "1. Первый массив больше второго.";
    }
    cout << COLOR_RESET << endl;
}

void zadano22(string str) {
    printTaskHeader(22, "Поиск гласных в строке");
    vector<char> vowels;
    const string vowelsString = "aeiouAEIOU";

    for (char ch : str) {
        if (vowelsString.find(ch) != string::npos) {
            vowels.push_back(ch);
        }
    }

    cout << COLOR_BLUE << "Гласные буквы в строке:" << endl;
    for (char i : vowels) {
        cout << i << " ";
    }
    cout << COLOR_RESET << endl;
}

void zadano23() {
    printTaskHeader(23, "Замена символов в строке");
    string xummus;
    char zam, zom;

    cout << "Введите строку: " << endl;
    cin >> xummus;
    vector<char> sigmo;

    cout << "Введите символ для замены: ";
    cin >> zam;
    cout << "Введите заменяющий символ: ";
    cin >> zom;

    for (int i = 0; i <= size(xummus) - 1; i++) {
        if (xummus[i] == zam) {
            sigmo.push_back(zom);
        }
        else {
            sigmo.push_back(xummus[i]);
        }
    }

    cout << COLOR_BLUE << "Результат замены: ";
    for (char i : sigmo) {
        cout << i;
    }
    cout << COLOR_RESET << endl;
}

void zadano24() {
    printTaskHeader(24, "Реверс строки (вариант 2)");
    string xummus;
    cout << "Введите строку: " << endl;
    cin >> xummus;
    vector<char> viktor;

    for (int i = size(xummus) - 1; i >= 0; i--) {
        viktor.push_back(xummus[i]);
    }

    cout << COLOR_BLUE << "Реверсированная строка:" << endl;
    for (char i : viktor) {
        cout << i << endl;
    }
    cout << COLOR_RESET;
}

void zadano25() {
    printTaskHeader(25, "Сравнение массивов (вариант 3)");
    const int size1 = 5;
    const int size2 = 5;
    int mas1[] = { 6, 22, 8, 3, 10 };
    int mas2[] = { 23, 2, 18, 34, 11 };
    int* arr1 = mas1;
    int* arr2 = mas2;
    int result = 0;

    cout << "Массив 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Массив 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    if (size1 < size2) result = -1;
    else if (size1 > size2) result = 1;
    else {
        for (int i = 0; i < size1; ++i) {
            if (*(arr1 + i) < *(arr2 + i)) {
                result = -1;
                break;
            }
            else if (*(arr1 + i) > *(arr2 + i)) {
                result = 1;
                break;
            }
        }
    }
    
    cout << COLOR_BLUE << "Результат сравнения: " << result << COLOR_RESET << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    
    // Инициализация данных для демонстрации
    int vareni4ki[] = { 45, 1388, 1437, 52, 48, 52, 1388 };
    int* ukaz{ vareni4ki };
    int sizemas = sizeof(vareni4ki) / sizeof(vareni4ki[0]);
    int a = 11;
    string strgo = "asdhsahdhassaHSAKDHKASdh";
    int mas1[]{ 1,2,3,4,5 };
    int mas2[]{ 6,7,8,9,10 };
    
    // Последовательный вызов всех заданий с цветными заголовками
    cout << zadano1(ukaz, sizemas) << endl << endl;
    zadano2(); cout << endl;
    zadano3(); cout << endl;
    zadano4(mas1, 5); cout << endl;
    zadano5(); cout << endl;
    zadano6(); cout << endl;
    zadano7(mas1, mas2); cout << endl;
    zadano8(); cout << endl;
    zadano9(); cout << endl;
    cout << zadano10(mas1, mas2) << endl << endl;
    zadano11(); cout << endl;
    zadano12(); cout << endl;
    zadano13(mas1, 5); cout << endl;
    zadano14(); cout << endl;
    zadano15(); cout << endl;
    zadano16(a); cout << endl;
    zadano17(); cout << endl;
    zadano18(); cout << endl;
    zadano19(a); cout << endl;
    zadano20(); cout << endl;
    zadano21(); cout << endl;
    zadano22(strgo); cout << endl;
    zadano23(); cout << endl;
    zadano24(); cout << endl;
    zadano25(); cout << endl;

    return 0;
}