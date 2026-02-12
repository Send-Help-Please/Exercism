#include "binary.h"
#include <string.h>
#include <math.h>

int  convert(const char *input){
    int decimal = 0;
    int counter = strlen(input);
    for(size_t i = 0; i < strlen(input); i++){
        if((input[i] - '0') != 0 && (input[i] - '0') != 1){
            return INVALID;
            break;
        }
        else{
            for(size_t j = 0; j < strlen(input); j++){
                counter --;
                decimal += (input[j] - '0') * pow(2, (counter));
            }
        }
    }
    return decimal;
}