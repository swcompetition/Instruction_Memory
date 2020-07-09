#include "Instruction_Memory.h"

Instruction_Memory::Instruction_Memory() {
}

Instruction_Memory::~Instruction_Memory() {
}

void Instruction_Memory::seperate(string tmp)
{
    if (tmp.length() != DATA_BITS)return;

    char arr[DATA_BITS + 1];
    strcpy_s(arr, tmp.c_str());

    int check = 6;
    while (check < 22) {
        if (check > 10 && check < 16) this->rt += arr[check++];
        else if (check > 15 && check < 21) this->rd += arr[check++];
        else this->rs += arr[check++];

    }
}

void Instruction_Memory::print()
{
    cout << "rs : " << this->rs << " rt : " << this->rt << " rd : " << this->rd << endl;
}

string Instruction_Memory::get_rs() { return this->rs; } 

string Instruction_Memory::get_rt() { return this->rt; }

string Instruction_Memory::get_rd() { return this->rd; }

void Instruction_Memory::set_rs(string rs_c) { this->rs = rs_c; }

void Instruction_Memory::set_rt(string rt_c) { this->rt = rt_c; }

void Instruction_Memory::set_rd(string rd_c) { this->rd = rd_c; }


