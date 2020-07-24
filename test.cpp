#include "Instruction_Memory.h"
#include <iostream>

int main() {
    string tmp = "10001111101000101001100100100101";
    Instruction_Memory im;
    im.seperate(tmp);
    im.print();
    string adddd;
    adddd = im.getAddress();
    cout << adddd << endl;
}