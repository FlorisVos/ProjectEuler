#include <iostream>

int main(){
    int n_max = 1000;
    int sum = 0;
    for (int i = 0; i < n_max; i++){
        if (i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    std::cout << "Sum of all natural numbers up to " << n_max << " is " << sum << '\n';
}
