#include "IM.h"

IM::IM() {
}

IM::~IM() {
}

void IM::seperate(string tmp)
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

void IM::print()
{
    cout << "rs : " << this->rs << " rt : " << this->rt << " rd : " << this->rd << endl;
}

string IM::get_rs() { return this->rs; }

string IM::get_rt() { return this->rt; }

string IM::get_rd() { return this->rd; }

void IM::set_rs(string rs_c) { this->rs = rs_c; }

void IM::set_rt(string rt_c) { this->rt = rt_c; }

void IM::set_rd(string rd_c) { this->rd = rd_c; }


