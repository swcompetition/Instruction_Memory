#include "Instruction_Memory.h"
#include <iostream>

int main() {
    string tmp = "00000011101000101001100100100101";
    Instruction_Memory im;
    im.seperate(tmp);
    im.print();
}