#include <iostream>

int main(){
    int sum = 0;
    int square_sum = 0;
    for (int i = 1; i < 101; i++)
    {
        sum += i;
        square_sum += i * i;
    }
    int sum_square = sum * sum;
    std::cout << "sum of squares is " << square_sum << '\n';
    std::cout << "square of the sum is " << sum_square << '\n';
    std::cout << "difference is " << sum_square - square_sum << '\n';
}