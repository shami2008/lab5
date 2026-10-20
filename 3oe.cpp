#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "введите N:";
    std:: cin>> n;

    long long a = 0, b=1;

    std::cout << "первые" << n << "чисел фибоначчи:\n";
    for (int i =0;i<n;++i) {
        std::cout << a << " ";
        long long temp = a+b;
        a= b;
        b= temp;
    }
    std::cout << "\n";

    return 0;
}