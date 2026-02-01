#include "collatz_conjecture.h"

int steps(int start){
    int last = start;
    int steps = 0;
    if(start <= 0){
        return ERROR_VALUE;
    }
    else if(start == 1) {
        return steps;
    }
    else{
        while(last != 1){
            if(last % 2 == 0){
                last = last / 2;
                steps ++;
            }
            else{
                last = (last * 3) + 1;
                steps ++;
            }
        }
    }
    return steps;
}