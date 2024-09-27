#include <iostream>
#include <random>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(int a, int b) {
        x = a;
        y = b;
    }

    void Print() {
        cout << "X ->" << x << "\tY ->" << y << endl;
    }

};

class Drob {
    float zn;
    float ch;
public:
    Drob() {
        zn = 0;
        ch = 0;
    }

    Drob(int a, int b) {
        ch = a;
        zn = b;
    }

    void Prov(int a, int b) {
        zn = b;
        ch = a;
        if (b == 0) {
            cout << "!! can`t be ZERO!!!";
        }
    }

    void Rand() {
        srand(time(0));
        zn = rand() % 100 + 3;
        ch = rand() % 100 + 3;
    }
    void Show() {
        cout << ch << "/" << zn << " = " << ch / zn << endl;
    }
};


int main()
{
    Drob f;
    f.Show();
    Drob k(10, 0);
    k.Show();

    /*Point a;
    Point d(10, 20);
    a.Print();
    d.Print();*/
}