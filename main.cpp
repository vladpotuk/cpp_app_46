#include "Func.h"


void findHappyNumbers(int start, int end) {
    for (int num = start; num <= end; num++) {
        int sumOfDivisors = 0;

        
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sumOfDivisors += i;
            }
        }

      
        if (sumOfDivisors == num) {
            std::cout << num << " є досконалим числом." << std::endl;
        }
    }
}

int main() {
    system("chcp 1251");
    system("cls");

    int start, end;

    std::cout << "Введіть початкове значення інтервалу: ";
    std::cin >> start;

    std::cout << "Введіть кінцеве значення інтервалу: ";
    std::cin >> end;

    if (start <= end) {
        findHappyNumbers(start, end);
    }
    else {
        std::cout << "Початкове значення інтервалу повинно бути менше або дорівнювати кінцевому значенню." << std::endl;
    }

    return 0;
}

