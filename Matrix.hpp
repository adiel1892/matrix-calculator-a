#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace zich{

    class Matrix{
        vector<vector<double>> mat;
        int rows;
        int cols;

        public:
        Matrix(vector<double>, const int,const int);

        Matrix operator +(const Matrix& other);
        Matrix operator +=(const Matrix& other);
        Matrix operator +();
        Matrix operator -(const Matrix& other);
        Matrix operator -=(const Matrix& other);
        Matrix operator -();
        Matrix operator *(const Matrix& other);
        friend Matrix operator *(double const &num, const Matrix& other);


        bool operator<(const Matrix& other);
        bool operator<=(const Matrix& other);
        bool operator>(const Matrix& other);
        bool operator>=(const Matrix& other);
        bool operator==(const Matrix& other);
        bool operator!=(const Matrix& other);

        Matrix& operator++();
        Matrix operator++(int);
        Matrix& operator--();
        Matrix operator--(int);
        
        Matrix operator*=(double);
        friend ostream& operator<<(ostream&,const Matrix&);
        friend istream& operator>>(ostream&,const Matrix);



    };
}