#include "square.h"

int getSquareSides() {
    return 4;
}

int getPerimeter(int length) {
    return 2 * (length + getSquareSides());
}