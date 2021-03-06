#include <iostream>
#include <iomanip>

int main() {
    double M[12][12], num, answer = 0;
    char operation;

    std::cin >> operation;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++) {
            std::cin >> num;
            M[i][j] = num;
        }

    for(int i = 0; i < 11; i++)
        for(int j = 0; j < 11 - i; j++)
            answer += M[i][j];

    if(operation == 'M')
        answer = answer / 66;

    std::cout << std::fixed << std::setprecision(1) << answer << std::endl;

    return 0;
}