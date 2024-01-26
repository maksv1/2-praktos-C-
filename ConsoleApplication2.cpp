#include <iostream> 
#include <cmath> 

int main() {
    int choice;
    double num1, num2, result;
    setlocale(LC_ALL, "RUS");

    do {
        std::cout << "1.Сложение \n2.Вычитание \n3.Умножение \n4.Деление \n5.Возведение в степень \n6.Нахождения квадратного корня \n7.Нахождение 1 процента от числа \n8.Найти факториал числа \n9.Выйти из программы \n\nВведите число, что хотите выполнить:\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 + num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case 2:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 - num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case 3:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 * num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case 4:
            std::cout << "Введите делимое число: ";
            std::cin >> num1;
            std::cout << "Введите делитель: ";
            std::cin >> num2;
            if (num2 == 0) {
                std::cout << "Ошибка: деление на 0!" << std::endl;
            }
            else {
                result = num1 / num2;
                std::cout << "Результат: " << result << std::endl;
            }
            break;
        case 5:
            std::cout << "Введите основание: ";
            std::cin >> num1;
            std::cout << "Введите степень: ";
            std::cin >> num2;
            result = pow(num1, num2);
            std::cout << "Результат: " << result << std::endl;
            break;
        case 6:
            std::cout << "Введите число: ";
            std::cin >> num1;
            if (num1 < 0) {
                std::cout << "Ошибка: квадратный корень из отрицательного числа!" << std::endl;
            }
            else {
                result = sqrt(num1);
                std::cout << "Результат: " << result << std::endl;
            }
            break;
        case 7:
            std::cout << "Введите число: ";
            std::cin >> num1;
            result = num1 / 100;
            std::cout << "1% от числа: " << result << std::endl;
            break;
        case 8:
            int factorial;
            std::cout << "Введите число: ";
            std::cin >> factorial;
            result = 1;
            for (int i = 1; i <= factorial; i++) {
                result *= i;
            }
            std::cout << "Факториал числа: " << result << std::endl;
            break;
        case 9:
            std::cout << "Выходим из программы" << std::endl;
            break;
        default:
            std::cout << "Ошибка: недопустимая операция!" << std::endl;
        }

    } while (choice != 9);

    return 0;
}