#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace zich{

    class Matrix{
        private:

        public:
        Matrix(vector<double>, const int,const int);

        friend Matrix operator +(const Matrix& a, const Matrix& b);
        friend Matrix operator +(const Matrix& a);
        friend Matrix operator +=(const Matrix& a, const Matrix& b);
        friend Matrix operator -(const Matrix& a, const Matrix& b);
        friend Matrix operator -(const Matrix& a);
        friend Matrix operator -=(const Matrix& a, const Matrix& b);
        friend Matrix operator *(const Matrix& a, const Matrix& b);
        friend Matrix operator *(double num, const Matrix& a);

        friend bool operator<(const Matrix& a, const Matrix& b);
        friend bool operator<=(const Matrix& a, const Matrix& b);
        friend bool operator>(const Matrix& a, const Matrix& b);
        friend bool operator>=(const Matrix& a, const Matrix& b);
        friend bool operator==(const Matrix& a, const Matrix& b);
        friend bool operator!=(const Matrix& a, const Matrix& b);
        Matrix operator-();
        Matrix operator++();
        Matrix operator--();
        Matrix operator*=(double);
        friend ostream &operator<<(ostream &os, Matrix a);



    };
}