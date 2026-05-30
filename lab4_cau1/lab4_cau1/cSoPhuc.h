#pragma once
#ifndef CSOPHUC_H
#define CSOPHUC_H

#include <iostream>
using namespace std;

class cSoPhuc {
private:
    double thuc;
    double ao;

public:
    // Constructor 
    cSoPhuc(double t = 0, double a = 0);

    // +
    cSoPhuc operator+(const cSoPhuc& sp) const;

    // -
    cSoPhuc operator-(const cSoPhuc& sp) const;

    // *
    cSoPhuc operator*(const cSoPhuc& sp) const;

    // /
    cSoPhuc operator/(const cSoPhuc& sp) const;

    // ==
    bool operator==(const cSoPhuc& sp) const;

    // !=
    bool operator!=(const cSoPhuc& sp) const;

    // >>
    friend istream& operator>>(istream& in, cSoPhuc& sp);

    // <<
    friend ostream& operator<<(ostream& out, const cSoPhuc& sp);
};

#endif
