#include "darts.h"

uint8_t score(coordinate_t landing_position){
    float distance = (landing_position.x * landing_position.x) + (landing_position.y * landing_position.y);
    if(distance > 100){
        return 0;
    }
    else if(distance <= 100 && distance > 25){
        return 1;
    }
    else if(distance <= 25 && distance > 1){
        return 5;
    }
    else {
        return 10;
    }
}