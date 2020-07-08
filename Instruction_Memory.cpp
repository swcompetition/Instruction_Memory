#include "Instruction_Memory.h"

Instruction_Memory::Instruction_Memory(){
}

Instruction_Memory::~Instruction_Memory(){
}

void Instruction_Memory::seperate(string tmp)
{
    if (tmp.length() != DATA_BITS)return;
    
    char arr[DATA_BITS + 1];
    strcpy_s(arr, tmp.c_str());

    int check = 6;
    while (check < 16) {
        if (check > 10) this->rt += arr[check++];
        else this->rs += arr[check++];
    }
}

void Instruction_Memory::print()
{
    cout << "rs : " << this->rs << " rt : " << this->rt << endl;
}


