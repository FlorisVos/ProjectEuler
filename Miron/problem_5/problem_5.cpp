#include <iostream>



int main(){
    long int candidate = 0;
    bool found = false;
    while (not found)
    {
        candidate += 20;   
        for (int i = 20; i > 0; i--)
        {
            found = true;
            if (candidate % i > 0)
            {
                found = false;
                break;
            }
        }
    }
    std::cout << "answer is " << candidate << '\n';
}