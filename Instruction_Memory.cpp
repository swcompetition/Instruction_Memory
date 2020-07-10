#include "Instruction_Memory.h"

Instruction_Memory::Instruction_Memory() {
}

Instruction_Memory::~Instruction_Memory() {
}

void Instruction_Memory::seperate(string tmp)
{
    if (tmp.length() != DATA_BITS)return;

    int check = 6;
    while (check < 21) {
        if (check > 10 && check < 16) this->rt += tmp.at(check++);
        else if (check > 15 && check < 21) this->rd += tmp.at(check++);
        else this->rs += tmp.at(check++);
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


