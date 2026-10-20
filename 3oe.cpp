#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "введите N:";
    std:: cin>> n;

    long long a = 0, b=1;// исполғзование long long на случай больших чисел

std::cout << "первые" << n << "чисел фибочини:\n";
    for (int i =0;i<n;++i) {
        std::cout << a << " ";
        long long temp = a+b;
        a= b;
        b= temp;
    }
    std::cout << "\n";

    return 0;
}
