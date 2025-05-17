#include <iostream>
#include <string>
using namespace std;

class Mahasiswa;

class Dosen
{
private:
    string nama;
    string NIDN;
    string pangkat;
    double gaji;

public:
    void beriNilai(Mahasiswa *m, float nilai);

    friend void lihatGajiDosen(Dosen *d); // fungsi friend untuk Universitas
    friend class Staff;                   // Staff bisa mengubah pangkat
};

class Mahasiswa
{
private:
    string nama;
    string NIM;
    float nilai;

public:
    Mahasiswa(string n, string nim) : nama(n), NIM(nim), nilai(0) {}

    void tampil()
    {
        cout << "Mahasiswa: " << nama << ", NIM: " << NIM << ", Nilai: " << nilai << endl;
    }

    friend class Dosen; // Dosen bisa memberi nilai
};

void Dosen::beriNilai(Mahasiswa *m, float nilai)
{
    m->nilai = nilai;
}

void lihatGajiDosen(Dosen *d)
{
    cout << "Gaji Dosen: " << d->gaji << endl;
}

class Staff
{
private:
    string nama;
    string ID_staff;
    double gaji;

public:
    void ubahPangkat(Dosen *d, string pangkatBaru)
    {
        d->pangkat = pangkatBaru;
    }

    friend void lihatGajiStaff(Staff *s); // fungsi friend untuk Universitas
};

void lihatGajiStaff(Staff *s)
{
    cout << "Gaji Staff: " << s->gaji << endl;
}
