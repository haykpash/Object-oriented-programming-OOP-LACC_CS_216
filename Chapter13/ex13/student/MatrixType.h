#ifndef MATRIX_TYPE_H
#define MATRIX_TYPE_H

#include <iostream>
#include <vector>

using namespace std;

class MatrixType {
private:
    vector<vector<int>> mat;

public:
    MatrixType(unsigned rows, unsigned cols);
    MatrixType(vector<vector<int>> const &values);
    MatrixType operator+(const MatrixType &other) const;
    MatrixType operator-(const MatrixType &other) const;
    MatrixType operator*(const MatrixType &other) const;
    friend ostream &operator<<(ostream &out, const MatrixType &m);
};

#endif
