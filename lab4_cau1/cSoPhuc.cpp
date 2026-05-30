#include "cSoPhuc.h"
#include <cmath>

// Constructor
cSoPhuc::cSoPhuc(double t, double a) {

    thuc = t;
    ao = a;
}

// +
cSoPhuc cSoPhuc::operator+(const cSoPhuc& sp) const {

    return cSoPhuc(
        thuc + sp.thuc,
        ao + sp.ao
    );
}

// -
cSoPhuc cSoPhuc::operator-(const cSoPhuc& sp) const {

    return cSoPhuc(
        thuc - sp.thuc,
        ao - sp.ao
    );
}

// *
cSoPhuc cSoPhuc::operator*(const cSoPhuc& sp) const {

    double t =
        thuc * sp.thuc - ao * sp.ao;

    double a =
        thuc * sp.ao + ao * sp.thuc;

    return cSoPhuc(t, a);
}

// /
cSoPhuc cSoPhuc::operator/(const cSoPhuc& sp) const {

    double mau =
        sp.thuc * sp.thuc +
        sp.ao * sp.ao;

    double t =
        (thuc * sp.thuc + ao * sp.ao)
        / mau;

    double a =
        (ao * sp.thuc - thuc * sp.ao)
        / mau;

    return cSoPhuc(t, a);
}

// ==
bool cSoPhuc::operator==(const cSoPhuc& sp) const {

    return (thuc == sp.thuc &&
        ao == sp.ao);
}

// !=
bool cSoPhuc::operator!=(const cSoPhuc& sp) const {

    return !(*this == sp);
}

// >>
istream& operator>>(istream& in, cSoPhuc& sp) {

    cout << "Nhap phan thuc: ";
    in >> sp.thuc;

    cout << "Nhap phan ao: ";
    in >> sp.ao;

    return in;
}

// <<
ostream& operator<<(ostream& out, const cSoPhuc& sp) {

    if (sp.ao == 0) {

        out << sp.thuc;
    }
    else if (sp.thuc == 0) {

        out << sp.ao << "i";
    }
    else {

        out << sp.thuc;

        if (sp.ao > 0)
            out << " + " << sp.ao << "i";
        else
            out << " - " << abs(sp.ao) << "i";
    }

    return out;
}
