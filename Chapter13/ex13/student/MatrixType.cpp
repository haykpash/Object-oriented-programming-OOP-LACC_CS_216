#include "MatrixType.h"
#include <stdexcept>

using namespace std;

// Constructor that initializes the matrix with given dimensions
MatrixType::MatrixType(unsigned rows, unsigned cols) {
    mat.resize(rows, vector<int>(cols, 0));
}

// Constructor that initializes the matrix with given values
MatrixType::MatrixType(vector<vector<int>> const &values) : mat(values) {}

// Overloaded addition operator
MatrixType MatrixType::operator+(const MatrixType &other) const {
    if (mat.size() != other.mat.size() || mat[0].size() != other.mat[0].size()) {
        throw invalid_argument("Matrices are not the same size.");
    }

    MatrixType result(mat.size(), mat[0].size());
    for (size_t i = 0; i < mat.size(); i++) {
        for (size_t j = 0; j < mat[i].size(); j++) {
            result.mat[i][j] = mat[i][j] + other.mat[i][j];
        }
    }
    return result;
}

// Overloaded subtraction operator
MatrixType MatrixType::operator-(const MatrixType &other) const {
    if (mat.size() != other.mat.size() || mat[0].size() != other.mat[0].size()) {
        throw invalid_argument("Matrices are not the same size.");
    }

    MatrixType result(mat.size(), mat[0].size());
    for (size_t i = 0; i < mat.size(); i++) {
        for (size_t j = 0; j < mat[i].size(); j++) {
            result.mat[i][j] = mat[i][j] - other.mat[i][j];
        }
    }
    return result;
}

// Overloaded multiplication operator
MatrixType MatrixType::operator*(const MatrixType &other) const {
    if (mat[0].size() != other.mat.size()) {
        throw invalid_argument("The number of columns of the first matrix must equal the number of rows of the second matrix.");
    }

    MatrixType result(mat.size(), other.mat[0].size());
    for (size_t i = 0; i < mat.size(); i++) {
        for (size_t j = 0; j < other.mat[0].size(); j++) {
            result.mat[i][j] = 0;
            for (size_t k = 0; k < mat[0].size(); k++) {
                result.mat[i][j] += mat[i][k] * other.mat[k][j];
            }
        }
    }
    return result;
}

// Overloaded stream insertion operator to output the matrix
ostream &operator<<(ostream &out, const MatrixType &m) {
    for (const auto &row : m.mat) {
        for (const auto &elem : row) {
            out << elem << "\t";
        }
        out << endl;
    }
    return out;
}

