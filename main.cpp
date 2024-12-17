#include <iostream>
#include <cmath>
#include <omp.h>

#define START 1
#define END 200000000

int check_prime(int number) {
    if (number < 2) return 0;
    for (int i = 2; i <= static_cast<int>(std::sqrt(number)); i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main() {
    
    double start_time = omp_get_wtime();
    for (int number = START; number <= END; number++) {
        (check_prime(number));
    }
    double end_time = omp_get_wtime();

    std::cout << "Time " << end_time - start_time << " seconds" << std::endl;
    return 0;
}