#include <iostream>

int main(){
    int sum = 0;
    int max_number = 4e6;
    int prev_number_1 = 1;
    int prev_number_2 = 1;
    int current_number = 0;
    while (current_number <= max_number){
        // Current number is always the sum of the two previous ones
        current_number = prev_number_1 + prev_number_2;
        // check if the number is even by taking the modulo with two 
        if (current_number % 2 == 0){
            sum += current_number;
        }
        // Stupid unreadable version that is supposed to be faster, check if the last bit of the number is equal to a 0 (binary logic)
        // if (!(current_number & 1))
        // {
        //     sum += current_number;
        // }
        
        // the oldest number becomes the second oldest number which becomes the current number
        prev_number_2 = prev_number_1;
        prev_number_1 = current_number;
    }
    std::cout << "The sum of all even fibonacci numbers up to " << max_number << " is " << sum << '\n';
}