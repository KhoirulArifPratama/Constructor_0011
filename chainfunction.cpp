#include <iostream>
#include <string>

using namespace std;

class buku
{
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function
    }
    string getJudul()
    {
        return this->judul;
    }
}

bukunya;

int main()
{
    bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul() << endl;
    cout << bukunya.setJudul("Fisika").getJudul() << endl; // chain function calls
    return 0;
}
