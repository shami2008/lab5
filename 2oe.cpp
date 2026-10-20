#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "введите N:";//ввод N
    std::cin>>n;

    long long sumNumbers = 0;
    long long product = 1;
    long long sumSquares = 0;

    for (int i =1;i<= n; ++i){//начало цикла
        sumNumbers +=i;//подсчет суммы
        product *=i;//подсчет произведениә
        sumSquares += i*i;//подсчет квадратов
    }
    std::cout << "сумма:"<< sumNumbers << "\n";
    std::cout << "произведение(N!):"<< product << "\n";
    std::cout << "сумма квадратов:" << sumSquares << "\n";

    return 0;
}
