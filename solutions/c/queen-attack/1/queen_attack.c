#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if ((queen_1.column > 7 || queen_1.row > 7) || (queen_2.column > 7 || queen_2.row > 7)) {
        return INVALID_POSITION;
    }

    if (queen_1.column == queen_2.column && queen_1.row == queen_2.row) {
        return INVALID_POSITION;
    }

    if (queen_1.column == queen_2.column || queen_1.row == queen_2.row) {
        return CAN_ATTACK;
    }

    int positional_combination_1 = queen_1.row + queen_1.column;
    int positional_combination_2 = queen_2.row + queen_2.column;

    int positional_difference_1 = queen_1.row - queen_1.column;
    int positional_difference_2 = queen_2.row - queen_2.column;

    if (positional_combination_1 == positional_combination_2) {
        return CAN_ATTACK;
    }
    
    if (positional_difference_1 == positional_difference_2) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}