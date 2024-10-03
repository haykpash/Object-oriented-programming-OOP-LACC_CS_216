#include <iostream>
#include "MatrixType.h"

using namespace std;

int main() {
    MatrixType A({{1, 2, 3}, {4, 5, 6}});
    MatrixType B({{7, 8}, {9, 10}, {11, 12}});
    MatrixType A1({{40, 40, 40}, {45, 45, 45}});
    MatrixType B1({{7, 8}, {9, 10}, {11, 12}}); 

    try {
        cout << "A + A:\n" << A + A << endl;
        cout << "A - A:\n" << A - A << endl;
        cout << "A * B:\n" << A * B << endl;
        
        cout << "\nA1 + A1:\n" << A1 + A1 << endl;
        cout << "A1 * B1:\n" << A1 * B1 << endl; 
    } catch (const invalid_argument &e) {
        cerr << e.what() << endl;
    }

    return 0;
}


