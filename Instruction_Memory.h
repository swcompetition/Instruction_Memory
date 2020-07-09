#pragma once
#include <iostream>
using namespace std;

#define DATA_BITS 32
#define LOOP 5

class IM {
private:
    string rs;
    string rt;
    string rd;

public:
    IM();
    ~IM();

    void seperate(string tmp);
    void print();
    string get_rs();
    string get_rt();
    string get_rd();
    void set_rs(string rs);
    void set_rt(string rt);
    void set_rd(string rd);

};