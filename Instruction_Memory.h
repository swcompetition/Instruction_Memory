#pragma once
#include <iostream>
using namespace std;

#define DATA_BITS 32
#define LOOP 5

class Instruction_Memory {
private:
    string rs;
    string rt;

public:
    Instruction_Memory();
    ~Instruction_Memory();

    void seperate(string tmp);
    void print();
};