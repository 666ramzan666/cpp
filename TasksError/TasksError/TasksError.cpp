#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

// 1. Собственный класс исключения
class CustomException : public exception {
private:
    string message;
public:
    CustomException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

// 2. Функция деления с обработкой деления на ноль
double divideNumbers(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed");
    }
    return a / b;
}

// 3. Функция проверки возраста
void checkAge(int age) {
    if (age < 0 || age > 120) {
        throw out_of_range("Age must be between 0 and 120");
    }
}

// 4. Функция суммы элементов массива
int sumArray(const int arr[], int size) {
    if (size < 0) {
        throw invalid_argument("Array size cannot be negative");
    }
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// 5. Функция вычисления квадратного корня
double calculateSquareRoot(double num) {
    if (num < 0) {
        throw domain_error("Cannot calculate square root of negative number");
    }
    return sqrt(num);
}

// 6. Функция поиска элемента в массиве
int findElement(const int arr[], int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return i;
        }
    }
    throw runtime_error("Element not found in array");
}

// 7. Класс Divider
class Divider {
public:
    static double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Division by zero in Divider class");
        }
        return a / b;
    }
};

// 8. Класс Age
class Age {
private:
    int age;
public:
    Age(int age) : age(age) {
        if (age < 0 || age > 120) {
            throw out_of_range("Invalid age in Age class");
        }
    }
    int getAge() const { return age; }
};

// 9. Класс MyArray
class MyArray {
private:
    int* arr;
    int size;
public:
    MyArray(int size) : size(size) {
        if (size < 0) {
            throw invalid_argument("Negative size in MyArray");
        }
        arr = new int[size];
    }
    ~MyArray() { delete[] arr; }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds in MyArray");
        }
        return arr[index];
    }

    int getSize() const { return size; }
};

// 10. Класс Fraction
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            throw runtime_error("Denominator cannot be zero in Fraction");
        }
    }
    double value() const { return static_cast<double>(numerator) / denominator; }
};

// 11. Класс SquareRoot
class SquareRoot {
public:
    static double calculate(double num) {
        if (num < 0) {
            throw domain_error("Negative number in SquareRoot class");
        }
        return sqrt(num);
    }
};

// 12. Функция для записи ошибок в файл
void logError(const string& errorMsg) {
    ofstream errorFile("errors.log", ios::app);
    if (errorFile.is_open()) {
        errorFile << errorMsg << endl;
        errorFile.close();
    }
}

// 13. Функция, которая вызывает другую функцию и перехватывает исключение
void callingFunction() {
    try {
        divideNumbers(10, 0);
    }
    catch (const exception& e) {
        cout << "Caught in callingFunction: " << e.what() << endl;
        throw; // Повторный выброс исключения
    }
}

// 14. Класс Calculator
class Calculator {
public:
    static double add(double a, double b) { return a + b; }
    static double subtract(double a, double b) { return a - b; }
    static double multiply(double a, double b) { return a * b; }
    static double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Division by zero in Calculator");
        }
        return a / b;
    }
};

// 15. Функция для ввода числа
int getNumberFromUser() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid number input");
    }
    return num;
}

// 16. Класс Stack
class Stack {
private:
    vector<int> data;
public:
    void push(int value) {
        data.push_back(value);
    }
    int pop() {
        if (data.empty()) {
            throw runtime_error("Attempt to pop from empty stack");
        }
        int value = data.back();
        data.pop_back();
        return value;
    }
};

// 17. Класс Point
class Point {
private:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {
        if (x < 0 || x > 100 || y < 0 || y > 100) {
            throw out_of_range("Point coordinates out of range (0-100)");
        }
    }
    void print() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

// 18. Функция для чтения файла
string readFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("Failed to open file: " + filename);
    }
    string content((istreambuf_iterator<char>(file)),
        istreambuf_iterator<char>());
    file.close();
    return content;
}

// 19. Класс StringArray
class StringArray {
private:
    vector<string> strings;
public:
    void addString(const string& str) {
        strings.push_back(str);
    }
    string getString(int index) const {
        if (index < 0 || index >= strings.size()) {
            throw out_of_range("Index out of bounds in StringArray");
        }
        return strings[index];
    }
};

// 20. Класс Square
class Square {
private:
    double side;
public:
    Square(double side) : side(side) {
        if (side < 0) {
            throw invalid_argument("Square side cannot be negative");
        }
    }
    double area() const { return side * side; }
};

// 21. Функция конвертации строки в число
int stringToInt(const string& str) {
    istringstream iss(str);
    int num;
    iss >> num;
    if (iss.fail() || !iss.eof()) {
        throw runtime_error("Cannot convert string to integer: " + str);
    }
    return num;
}

// 22. Класс FileHandler
class FileHandler {
private:
    ifstream file;
public:
    FileHandler(const string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw runtime_error("Failed to open file: " + filename);
        }
    }
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
        }
    }
    string readLine() {
        string line;
        getline(file, line);
        return line;
    }
};

int main() {
    // 1. Обработка исключения деления на ноль
    try {
        cout << "10 / 2 = " << divideNumbers(10, 2) << endl;
        cout << "10 / 0 = " << divideNumbers(10, 0) << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 2. Обработка исключения возраста
    try {
        checkAge(25);
        checkAge(-5);
    }
    catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 3. Обработка исключения суммы массива
    int arr[] = { 1, 2, 3, 4, 5 };
    try {
        cout << "Sum of array: " << sumArray(arr, 5) << endl;
        cout << "Sum of array: " << sumArray(arr, -1) << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 4. Обработка исключения квадратного корня
    try {
        cout << "sqrt(16) = " << calculateSquareRoot(16) << endl;
        cout << "sqrt(-16) = " << calculateSquareRoot(-16) << endl;
    }
    catch (const domain_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 5. Обработка исключения поиска элемента
    try {
        cout << "Element 3 found at index: " << findElement(arr, 5, 3) << endl;
        cout << "Element 10 found at index: " << findElement(arr, 5, 10) << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 6. Обработка исключения класса Divider
    try {
        cout << "Divider: 10 / 5 = " << Divider::divide(10, 5) << endl;
        cout << "Divider: 10 / 0 = " << Divider::divide(10, 0) << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 7. Обработка исключения класса Age
    try {
        Age validAge(30);
        Age invalidAge(150);
    }
    catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 8. Обработка исключения класса MyArray
    try {
        MyArray myArray(5);
        myArray[0] = 10;
        cout << "myArray[0] = " << myArray[0] << endl;
        cout << "myArray[10] = " << myArray[10] << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 9. Обработка исключения класса Fraction
    try {
        Fraction validFraction(1, 2);
        Fraction invalidFraction(1, 0);
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 10. Обработка исключения класса SquareRoot
    try {
        cout << "SquareRoot of 25: " << SquareRoot::calculate(25) << endl;
        cout << "SquareRoot of -25: " << SquareRoot::calculate(-25) << endl;
    }
    catch (const domain_error& e) {
        cerr << "Error: " << e.what() << endl;
        logError(e.what());
    }

    // 11. Вызов нескольких функций с разными исключениями
    try {
        divideNumbers(10, 0);
        checkAge(150);
        calculateSquareRoot(-1);
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
        logError(e.what());
    }
    catch (const out_of_range& e) {
        cerr << "Out of range: " << e.what() << endl;
        logError(e.what());
    }
    catch (const domain_error& e) {
        cerr << "Domain error: " << e.what() << endl;
        logError(e.what());
    }

    // 12. Использование собственного исключения
    try {
        throw CustomException("This is a custom exception");
    }
    catch (const CustomException& e) {
        cerr << "Custom exception caught: " << e.what() << endl;
        logError(e.what());
    }

    // 13. Повторный выброс исключения
    try {
        callingFunction();
    }
    catch (const exception& e) {
        cerr << "Caught in main after rethrow: " << e.what() << endl;
        logError(e.what());
    }

    // 14. Обработка исключения класса Calculator
    try {
        cout << "Calculator: 10 / 2 = " << Calculator::divide(10, 2) << endl;
        cout << "Calculator: 10 / 0 = " << Calculator::divide(10, 0) << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Calculator error: " << e.what() << endl;
        logError(e.what());
    }

    // 15. Обработка исключения ввода числа
    try {
        int num = getNumberFromUser();
        cout << "You entered: " << num << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Input error: " << e.what() << endl;
        logError(e.what());
    }

    // 16. Обработка исключения класса Stack
    try {
        Stack stack;
        stack.push(10);
        cout << "Popped from stack: " << stack.pop() << endl;
        cout << "Popped from stack: " << stack.pop() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Stack error: " << e.what() << endl;
        logError(e.what());
    }

    // 17. Обработка исключения класса Point
    try {
        Point p1(10, 20);
        p1.print();
        Point p2(-10, 150);
    }
    catch (const out_of_range& e) {
        cerr << "Point error: " << e.what() << endl;
        logError(e.what());
    }

    // 18. Обработка исключения чтения файла
    try {
        string content = readFile("nonexistent.txt");
        cout << "File content: " << content << endl;
    }
    catch (const runtime_error& e) {
        cerr << "File error: " << e.what() << endl;
        logError(e.what());
    }

    // 19. Обработка исключения класса StringArray
    try {
        StringArray sa;
        sa.addString("Hello");
        sa.addString("World");
        cout << sa.getString(1) << endl;
        cout << sa.getString(5) << endl;
    }
    catch (const out_of_range& e) {
        cerr << "StringArray error: " << e.what() << endl;
        logError(e.what());
    }

    // 20. Обработка исключения класса Square
    try {
        Square s1(5);
        cout << "Square area: " << s1.area() << endl;
        Square s2(-3);
    }
    catch (const invalid_argument& e) {
        cerr << "Square error: " << e.what() << endl;
        logError(e.what());
    }

    // 21. Обработка исключения конвертации строки в число
    try {
        cout << stringToInt("123") << endl;
        cout << stringToInt("12a3") << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Conversion error: " << e.what() << endl;
        logError(e.what());
    }

    // 22. Обработка исключения класса FileHandler
    try {
        FileHandler fh("nonexistent.txt");
        cout << fh.readLine() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "FileHandler error: " << e.what() << endl;
        logError(e.what());
    }

    // 23. Множественные блоки catch для разных типов исключений
    try {
        divideNumbers(10, 0);
        checkAge(150);
        calculateSquareRoot(-1);
        throw CustomException("Custom exception example");
    }
    catch (const CustomException& e) {
        cerr << "Custom exception: " << e.what() << endl;
        logError(e.what());
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
        logError(e.what());
    }
    catch (const out_of_range& e) {
        cerr << "Out of range: " << e.what() << endl;
        logError(e.what());
    }
    catch (const domain_error& e) {
        cerr << "Domain error: " << e.what() << endl;
        logError(e.what());
    }
    catch (...) {
        cerr << "Unknown exception" << endl;
        logError("Unknown exception");
    }

    return 0;
}