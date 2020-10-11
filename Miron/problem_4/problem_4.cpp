#include <iostream>
#include <string>
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

bool is_palindrome(int number){
    std::string number_string = std::to_string(number);
    int string_length = number_string.length();
    // only even length numbers are palindromes
    if (string_length % 2 == 0){
        // just check until you find assymmetry
        for (int i = 0; i <= string_length / 2; i++)
        {
            char char1 = number_string[i];
            char char2 = number_string[string_length - (i + 1)];
            if (char1 != char2){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int product;
    int largest_product = 0;
    // was thinking to start from the highest number up to start earlier, but now trying all combinations
    // should be checking (999, 999), (999, 998), (998, 999) etc..
    for (int factor_1 = 999; factor_1 > 0; factor_1--)
    {
        for (int factor_2 = 999; factor_2 > 0; factor_2--)
        {
            product = factor_1 * factor_2;
            if (is_palindrome(product) && product > largest_product){
                largest_product = product;
            }
        }
        
    }
    std::cout << largest_product << '\n';
}