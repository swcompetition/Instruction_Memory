#pragma once
#include <iostream>
using namespace std;

#define DATA_BITS 32
#define LOOP 5

class Instruction_Memory {
private:
    string rs;
    string rt;
    string rd;

public:
    Instruction_Memory();
    ~Instruction_Memory();

    void seperate(string tmp);
    void print();
    string get_rs();
    string get_rt();
    string get_rd();
    void set_rs(string rs);
    void set_rt(string rt);
    void set_rd(string rd);

};