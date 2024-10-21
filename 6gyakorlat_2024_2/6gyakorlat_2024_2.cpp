#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

struct tanulo {
    string nev;
    int matek;
};

int main()
{
    int i, ossz = 0;
    tanulo tmb[3];
    for (i = 0; i < 3; i++)
    {
        cout << "Kerem adja meg a " << i + 1 << " tanulo nevet:";
        getline(cin, tmb[i].nev);
        cout << "Kerem adja meg a " << i + 1 << " tanulo matamatika jegyet: ";
        cin >> tmb[i].matek;
        cin.ignore();
    }
    system("cls");
    cout.setf(ios::right);

    for ( i = 0; i < 3; i++)
    {
        cout << setw(25) << tmb[i].nev << "\t"  << tmb[i].matek << endl;
        ossz = ossz + tmb[i].matek;
    }

    cout << "A hallgatok eredmenye: " << (float)ossz / 3 << endl;
    system("pause");
}
