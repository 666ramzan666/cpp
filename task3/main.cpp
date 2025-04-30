#include <iostream>
#include <random>
#include <vector>
#include <windows.h> // Для цветного вывода в Windows
using namespace std;

// Функция для установки цвета текста в консоли
void SetColor(int text, int background = 0) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

// Функция для отображения красивого заголовка
void PrintHeader(const string& title) {
    SetColor(14); // Желтый цвет
    cout << "\n====================================" << endl;
    cout << "          " << title << endl;
    cout << "====================================" << endl;
    SetColor(7); // Возвращаем белый цвет
}

void zadano1() {
    PrintHeader("Задание 1: Сумма элементов массива");
    
    int xummus[5];
    cout << "Введите 5 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11); // Голубой цвет для ввода
        cin >> xummus[i];
        SetColor(7);
    }
    
    int sum = 0;
    for (int num : xummus) sum += num;
    
    SetColor(10); // Зеленый цвет для результата
    cout << "Сумма элементов массива: " << sum << endl;
    SetColor(7);
}

void zadano2() {
    PrintHeader("Задание 2: Максимальный элемент массива");
    
    int xummus[10];
    cout << "Введите 10 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int max = xummus[0];
    for (int num : xummus) {
        if (num > max) max = num;
    }
    
    SetColor(10);
    cout << "Максимальный элемент: " << max << endl;
    SetColor(7);
}

void zadano3() {
    PrintHeader("Задание 3: Минимальный элемент массива");
    
    int xummus[10];
    cout << "Введите 10 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int min = xummus[0];
    for (int num : xummus) {
        if (num < min) min = num;
    }
    
    SetColor(10);
    cout << "Минимальный элемент: " << min << endl;
    SetColor(7);
}

void zadano4() {
    PrintHeader("Задание 4: Среднее арифметическое массива");
    
    int xummus[6];
    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    double sum = 0;
    for (int num : xummus) sum += num;
    double average = sum / 6;
    
    SetColor(10);
    cout << "Среднее арифметическое: " << average << endl;
    SetColor(7);
}

void zadano5() {
    PrintHeader("Задание 5: Обратный порядок массива");
    
    int xummus[5];
    cout << "Введите 5 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    SetColor(10);
    cout << "Массив в обратном порядке: ";
    for (int i = size(xummus) - 1; i >= 0; i--) {
        cout << xummus[i] << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano6() {
    PrintHeader("Задание 6: Количество положительных и отрицательных чисел");
    
    int xummus[10];
    cout << "Введите 10 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int plus = 0, minus = 0;
    for (int num : xummus) {
        if (num > 0) plus++;
        else if (num < 0) minus++;
    }
    
    SetColor(10);
    cout << "Положительных чисел: " << plus << endl;
    cout << "Отрицательных чисел: " << minus << endl;
    SetColor(7);
}

void zadano7() {
    PrintHeader("Задание 7: Поиск элемента в массиве");
    
    int xummus[10];
    cout << "Введите 10 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int a;
    cout << "Введите число для поиска: ";
    SetColor(11);
    cin >> a;
    SetColor(7);
    
    bool found = false;
    SetColor(10);
    for (int i = 0; i < size(xummus); i++) {
        if (xummus[i] == a) {
            cout << "Число найдено на позиции: " << i << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Число не найдено в массиве." << endl;
    }
    SetColor(7);
}

void zadano8() {
    PrintHeader("Задание 8: Сортировка массива пузырьком");
    
    int xummus[5];
    cout << "Введите 5 целых чисел массива: " << endl;
    for (int i = 0; i < size(xummus); i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    // Сортировка пузырьком
    for (int i = 0; i < size(xummus) - 1; i++) {
        for (int j = 0; j < size(xummus) - i - 1; j++) {
            if (xummus[j] > xummus[j + 1]) {
                swap(xummus[j], xummus[j + 1]);
            }
        }
    }
    
    SetColor(10);
    cout << "Отсортированный массив: ";
    for (int num : xummus) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano9() {
    PrintHeader("Задание 9: Удаление элемента из массива");
    
    vector<int> xummus(10);
    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int n;
    cout << "Введите номер элемента для удаления (1-10): ";
    SetColor(11);
    cin >> n;
    SetColor(7);
    
    if (n >= 1 && n <= 10) {
        xummus.erase(xummus.begin() + n - 1);
        
        SetColor(10);
        cout << "Массив после удаления: ";
        for (int num : xummus) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        SetColor(12); // Красный цвет для ошибки
        cout << "Неверный номер элемента!" << endl;
    }
    SetColor(7);
}

void zadano10() {
    PrintHeader("Задание 10: Копирование массива");
    
    int xummus[5], copy[5];
    cout << "Введите 5 целых чисел: " << endl;
    for (int i = 0; i < 5; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    for (int i = 0; i < 5; i++) {
        copy[i] = xummus[i];
    }
    
    SetColor(10);
    cout << "Скопированный массив: ";
    for (int num : copy) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano11() {
    PrintHeader("Задание 11: Объединение двух массивов");
    
    int xummus1[3], xummus2[3], bavabeba[6];
    
    cout << "Введите 3 целых числа первого массива: " << endl;
    for (int i = 0; i < 3; i++) {
        SetColor(11);
        cin >> xummus1[i];
        SetColor(7);
    }
    
    cout << "Введите 3 целых числа второго массива: " << endl;
    for (int i = 0; i < 3; i++) {
        SetColor(11);
        cin >> xummus2[i];
        SetColor(7);
    }
    
    for (int i = 0; i < 3; i++) {
        bavabeba[i] = xummus1[i];
        bavabeba[i + 3] = xummus2[i];
    }
    
    SetColor(10);
    cout << "Объединенный массив: ";
    for (int num : bavabeba) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano12() {
    PrintHeader("Задание 12: Разделение на четные и нечетные");
    
    int xummus[10];
    vector<int> chet, nechet;
    
    cout << "Введите 10 целых чисел: " << endl;
    for (int i = 0; i < 10; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    for (int num : xummus) {
        if (num % 2 == 0) chet.push_back(num);
        else nechet.push_back(num);
    }
    
    SetColor(10);
    cout << "Чётные числа: ";
    for (int num : chet) cout << num << " ";
    cout << "\nНечётные числа: ";
    for (int num : nechet) cout << num << " ";
    cout << endl;
    SetColor(7);
}

void zadano13() {
    PrintHeader("Задание 13: Проверка симметричности массива");
    
    int xummus[6];
    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i < 6; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    bool symmetry = true;
    for (int i = 0, j = 5; i < j; i++, j--) {
        if (xummus[i] != xummus[j]) {
            symmetry = false;
            break;
        }
    }
    
    SetColor(10);
    cout << "Массив " << (symmetry ? "симметричен" : "не симметричен") << endl;
    SetColor(7);
}

void zadano14() {
    PrintHeader("Задание 14: Квадраты элементов массива");
    
    int xummus[5];
    vector<int> kvadrat;
    
    cout << "Введите 5 целых чисел: " << endl;
    for (int i = 0; i < 5; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    for (int num : xummus) {
        kvadrat.push_back(num * num);
    }
    
    SetColor(10);
    cout << "Квадраты чисел: ";
    for (int num : kvadrat) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano15() {
    PrintHeader("Задание 15: Подсчет четных и нечетных элементов");
    
    int xummus[6];
    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i < 6; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int cheto = 0, necheto = 0;
    for (int num : xummus) {
        if (num % 2 == 0) cheto++;
        else necheto++;
    }
    
    SetColor(10);
    cout << "Чётных элементов: " << cheto << endl;
    cout << "Нечётных элементов: " << necheto << endl;
    SetColor(7);
}

void zadano16() {
    PrintHeader("Задание 16: Проверка на дубликаты");
    
    int xummus[10];
    cout << "Введите 10 целых чисел: " << endl;
    for (int i = 0; i < 10; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    bool dublicat = false;
    for (int i = 0; i < 10 && !dublicat; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (xummus[i] == xummus[j]) {
                dublicat = true;
                break;
            }
        }
    }
    
    SetColor(10);
    cout << "В массиве " << (dublicat ? "есть дубликаты" : "нет дубликатов") << endl;
    SetColor(7);
}

void zadano17() {
    PrintHeader("Задание 17: Циклический сдвиг влево");
    
    int xummus[6];
    cout << "Введите 6 целых чисел массива: " << endl;
    for (int i = 0; i < 6; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int first = xummus[0];
    for (int i = 0; i < 5; i++) {
        xummus[i] = xummus[i + 1];
    }
    xummus[5] = first;
    
    SetColor(10);
    cout << "Массив после сдвига: ";
    for (int num : xummus) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano18() {
    PrintHeader("Задание 18: Второй наибольший элемент");
    
    int xummus[8];
    cout << "Введите 8 целых чисел: " << endl;
    for (int i = 0; i < 8; i++) {
        SetColor(11);
        cin >> xummus[i];
        SetColor(7);
    }
    
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int num : xummus) {
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num != max1) {
            max2 = num;
        }
    }
    
    SetColor(10);
    cout << "Второй наибольший элемент: " << max2 << endl;
    SetColor(7);
}

void zadano19() {
    PrintHeader("Задание 19: Генерация случайного массива");
    
    int xummus[10];
    random_device rndbn;
    mt19937 gdr(rndbn());
    uniform_int_distribution<> dis(0, 1500);
    
    for (int i = 0; i < 10; i++) {
        xummus[i] = dis(gdr);
    }
    
    SetColor(10);
    cout << "Сгенерированный массив: ";
    for (int num : xummus) {
        cout << num << " ";
    }
    cout << endl;
    SetColor(7);
}

void zadano20() {
    PrintHeader("Задание 20: Сравнение двух массивов");
    
    int xummus1[6], xummus2[6];
    cout << "Введите 6 целых чисел первого массива: " << endl;
    for (int i = 0; i < 6; i++) {
        SetColor(11);
        cin >> xummus1[i];
        SetColor(7);
    }
    
    cout << "Введите 6 целых чисел второго массива: " << endl;
    for (int i = 0; i < 6; i++) {
        SetColor(11);
        cin >> xummus2[i];
        SetColor(7);
    }
    
    bool equal = true;
    for (int i = 0; i < 6; i++) {
        if (xummus1[i] != xummus2[i]) {
            equal = false;
            break;
        }
    }
    
    SetColor(10);
    cout << "Массивы " << (equal ? "равны" : "не равны") << endl;
    SetColor(7);
}

void ShowMenu() {
    system("cls"); // Очистка экрана
    
    SetColor(14); // Желтый цвет
    cout << "====================================" << endl;
    cout << "          МЕНЮ ПРОГРАММЫ           " << endl;
    cout << "====================================" << endl;
    SetColor(7); // Белый цвет
    
    SetColor(11); // Голубой цвет
    cout << " 1. Сумма элементов массива" << endl;
    cout << " 2. Максимальный элемент массива" << endl;
    cout << " 3. Минимальный элемент массива" << endl;
    cout << " 4. Среднее арифметическое массива" << endl;
    cout << " 5. Обратный порядок массива" << endl;
    cout << " 6. Количество положительных и отрицательных чисел" << endl;
    cout << " 7. Поиск элемента в массиве" << endl;
    cout << " 8. Сортировка массива пузырьком" << endl;
    cout << " 9. Удаление элемента из массива" << endl;
    cout << "10. Копирование массива" << endl;
    cout << "11. Объединение двух массивов" << endl;
    cout << "12. Разделение на четные и нечетные" << endl;
    cout << "13. Проверка симметричности массива" << endl;
    cout << "14. Квадраты элементов массива" << endl;
    cout << "15. Подсчет четных и нечетных элементов" << endl;
    cout << "16. Проверка на дубликаты" << endl;
    cout << "17. Циклический сдвиг влево" << endl;
    cout << "18. Второй наибольший элемент" << endl;
    cout << "19. Генерация случайного массива" << endl;
    cout << "20. Сравнение двух массивов" << endl;
    cout << " 0. Выход" << endl;
    SetColor(7); // Белый цвет
    
    SetColor(14); // Желтый цвет
    cout << "====================================" << endl;
    SetColor(7); // Белый цвет
    
    cout << "Выберите задание (0-20): ";
}

int main() {
    setlocale(LC_ALL, "RU");
    
    while (true) {
        ShowMenu();
        
        int choice;
        SetColor(11); // Голубой цвет для ввода
        cin >> choice;
        SetColor(7); // Белый цвет
        
        if (choice == 0) break;
        
        switch (choice) {
            case 1: zadano1(); break;
            case 2: zadano2(); break;
            case 3: zadano3(); break;
            case 4: zadano4(); break;
            case 5: zadano5(); break;
            case 6: zadano6(); break;
            case 7: zadano7(); break;
            case 8: zadano8(); break;
            case 9: zadano9(); break;
            case 10: zadano10(); break;
            case 11: zadano11(); break;
            case 12: zadano12(); break;
            case 13: zadano13(); break;
            case 14: zadano14(); break;
            case 15: zadano15(); break;
            case 16: zadano16(); break;
            case 17: zadano17(); break;
            case 18: zadano18(); break;
            case 19: zadano19(); break;
            case 20: zadano20(); break;
            default:
                SetColor(12); // Красный цвет для ошибки
                cout << "Неверный выбор! Попробуйте снова." << endl;
                SetColor(7);
                break;
        }
        
        cout << "\nНажмите Enter для продолжения...";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}