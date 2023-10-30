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
            std::cout << num << " � ���������� ������." << std::endl;
        }
    }
}

int main() {
    system("chcp 1251");
    system("cls");

    int start, end;

    std::cout << "������ ��������� �������� ���������: ";
    std::cin >> start;

    std::cout << "������ ������ �������� ���������: ";
    std::cin >> end;

    if (start <= end) {
        findHappyNumbers(start, end);
    }
    else {
        std::cout << "��������� �������� ��������� ������� ���� ����� ��� ���������� �������� ��������." << std::endl;
    }

    return 0;
}

