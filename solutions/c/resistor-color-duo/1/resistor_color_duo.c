#include "resistor_color_duo.h"

int color_code(resistor_band_t *colors){
    int total_resistence = 0;
    total_resistence = colors[0] * 10 + colors[1];

    return total_resistence;
}