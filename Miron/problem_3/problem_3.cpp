#include <iostream>
#include <vector>
#include <cmath>

long int n_max = 600851475143;
int sqrt_n_max = sqrt(n_max);
// initialize vector filled with zeros
std::vector<int> primes(sqrt_n_max);

bool update_primes(int number){
    // Function that updates current primes list with argument number, if the number is not divisble by any numbers in the current primes
    if (number % 2 == 0){
        return false;
    }
    int prime_idx = 0;
    int current_prime;
    while (true){
        current_prime = primes[prime_idx];
        // we have reached the end of the primes list without finding a factor, so the number is a prime
        if (current_prime == 0){
            primes[prime_idx] = number; 
            return true;
        }
        // if the number is divisible by one of the primes, it is not a prime and we should stop
        if (number % current_prime == 0){
            return false;
        }
        prime_idx++;
    }
}

int main(){
    // 0 is the first prime number 
    primes[0] = 2;
    for (int i = 3; i < sqrt_n_max; i+=2){
        update_primes(i);
    }
    int largest_prime_factor = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] == 0){
            break;
        }
        if (n_max % primes[i] == 0)
        {
            largest_prime_factor = primes[i];
        }
    }
    std::cout << "Largest prime factor of " << n_max << " is " << largest_prime_factor << '\n';
    
}