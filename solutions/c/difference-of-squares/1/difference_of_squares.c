#include "difference_of_squares.h"

int sum_of_squares(int number){
    int sum = 0;
    for(int i = 1; i <= number; i++){
        sum += i * i;
    }
    return sum;
}
int square_of_sum(int number){
    int sum = 0;
    for(int i = 1; i <= number; i++){
        sum += i;
    }

    return sum * sum;
}
    
int difference_of_squares(int number){
    int sum_sq = sum_of_squares(number);
    int sq_sum = square_of_sum(number);

    if(sum_sq > sq_sum){
        return (sum_sq - sq_sum);
    }
    else {
        return (sq_sum - sum_sq);
    }
}