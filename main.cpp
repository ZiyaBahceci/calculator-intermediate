#include <iostream>
#include <cmath>
#include <cstdio>

#define PI = 3.14159265


void addition();
void subtraction();
void multiplication();
void division();
void quick_operation();
double square_root(double n);
double logarithm(double n);
double sine(double n);
double cosine(double n);


int main()
{


    int x;
    std::cout << "Welcome to the advanced calculator by Ziya Bahceci!" << std::endl;
    while(true)
    {
        std::cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for simple interaction with 2 numbers, "
                  << "6 for square root, 7 for 10-base log, 8 for sine, 9 for cosine." ;
        std::cin >> x;
        switch(x)
        {
        case 1:
        {
            addition();
            break;
        }
        case 2:
        {
            subtraction();
            break;
        }
        case 3:
        {
            multiplication();
            break;
        }
        case 4:
        {
            division();
            break;
        }
        case 5:
        {
            quick_operation();
            break;
        }
        case 6:
        {
            int n;
            do
            {
                std::cout << "Enter natural number: ";
                std::cin >> n;
            }
            while(n <= 0);
            double result = square_root(n);
            std::cout << "The result is: " << result << std::endl;
            break;
        }
        case 7:
        {
            double n;
            std::cout << "Enter number: " << std::endl;
            std::cin >> n;
            double result = logarithm(n);
            std::cout << "Result is " << result << std::endl;

            break;
        }
        case 8:
        {
            double n;
            std::cout << "PI = 3.14159265. Enter radian: " << std::endl;
            std::cin >> n;
            double result = sine(n);
            std::cout << "The result is " << result << std::endl;
            break;
        }
        case 9:
        {
            double n;
            std::cout << "PI = 3.14159265. Enter radian: " << std::endl;
            std::cin >> n;
            double result = cosine(n);
            std::cout << "The result is " << result << std::endl;
            break;
        }
        default:
        {
            std::cout << "Wrong input!" << std::endl;
            break;
        }
        }
    }
    return 0;
}




void addition()
{
    int n;
    std::cout << "Enter amount of numbers to be added: " << std::endl;
    std::cin >> n;
    int i = 1;
    double sum = 0;
    while(i <= n)
    {
        double number;
        std::cout << "Enter " << i << ". number: ";
        std::cin >> number;

        sum += number;

        ++i;
    }
    std::cout << "The result is " << sum << std::endl;
}

void subtraction()
{
    std::cout << "Enter 2 numbers for subtraction, space inbetween each other: " << std::endl;
    double sub1, sub2;
    std::cin >> sub1 >> sub2;
    double sub_result = sub1 - sub2;
    std::cout << "The result is " << sub_result << std::endl;
}

void multiplication()
{
    int n;
    std::cout << "Enter amount of numbers to be multiplied: " << std::endl;
    std::cin >> n;
    int i = 1;
    double sum = 1;
    while(i <= n)
    {
        double number;
        std::cout << "Enter " << i << ". number: ";
        std::cin >> number;

        sum *= number;

        ++i;
    }
    std::cout << "The result is " << sum << std::endl;
}

void division()
{
    std::cout << "Enter 2 numbers for division, space inbetween: " << std::endl;
    double div1, div2;
    std::cin >> div1 >> div2;
    double div_result = div1 / div2;
    std::cout << "The result is " << div_result << std::endl;
}

void quick_operation()
{
    char op;
    float num1, num2;

    std::cout << "Enter an operator (+, -, *, /) " << std::endl;
    std::cin >> op;

    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> num1 >> num2;

    switch(op)
    {
    case '+':
        std::cout << "The result is " << num1 + num2 << std::endl;
        break;

    case '-':
        std::cout << "The result is " << num1 - num2 << std::endl;
        break;

    case '*':
        std::cout << "The result is " << num1 * num2 << std::endl;
        break;

    case '/':
        std::cout << "The result is " << num1 / num2 << std::endl;
        break;

    default:
        std::cout << "Error! The operator is not correct";
        break;
    }
}


double square_root(double n)
{
    double result = sqrt(n);
    return result;
}

double logarithm(double n)
{
    double result = log10(n);
    return result;
}


double sine(double n)
{
    double result = sin(n);
    return result;
}


double cosine(double n)
{
    double result = cos(n);
    return result;
}
