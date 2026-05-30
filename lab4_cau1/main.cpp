#include "cSoPhuc.h"

int main() {

    cSoPhuc sp1, sp2;

    cout << "===== NHAP SO PHUC 1 =====\n";
    cin >> sp1;

    cout << "\n===== NHAP SO PHUC 2 =====\n";
    cin >> sp2;

    cout << "\n===== SO PHUC 1 =====\n";
    cout << sp1 << endl;

    cout << "\n===== SO PHUC 2 =====\n";
    cout << sp2 << endl;

    // +
    cout << "\n===== TONG =====\n";
    cout << sp1 + sp2 << endl;

    // -
    cout << "\n===== HIEU =====\n";
    cout << sp1 - sp2 << endl;

    // *
    cout << "\n===== TICH =====\n";
    cout << sp1 * sp2 << endl;

    // /
    cout << "\n===== THUONG =====\n";
    cout << sp1 / sp2 << endl;

    // ==
    cout << "\n===== == =====\n";

    if (sp1 == sp2)
        cout << "Hai so phuc bang nhau\n";
    else
        cout << "Hai so phuc khac nhau\n";

    // !=
    cout << "\n===== != =====\n";

    if (sp1 != sp2)
        cout << "Hai so phuc khac nhau\n";
    else
        cout << "Hai so phuc bang nhau\n";

    return 0;
}
