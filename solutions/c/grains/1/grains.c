#include "grains.h"

uint64_t square(uint8_t index){
    uint64_t last = 0;
    if(index < 1 || index > 64){
        return 0;
    } 
    else {
        for(int i = 1; i <= index; i++){
            if(i == 1){
                last = i;
            }
            else{
                last *= 2;
            }
        }
    }

    return last;
}

uint64_t total(){
    uint64_t last = 0;
    uint64_t sum = 0;

    for(int i = 1; i <= 64; i++){
        if(i == 1){
            sum += i;
            last = i;
        }
        else{
            sum += last * 2;
            last *= 2;
        }
    }
    return sum;
}
