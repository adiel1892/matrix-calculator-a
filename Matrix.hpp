#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace zich{

    class Matrix{
        private:
            vector<vector<double>> mat;
            unsigned int rows;
            unsigned int cols;

        public:
        Matrix(vector<double>, const int,const int);
        ~Matrix();
        vector<vector<double>> getMatrix(){return this->mat;}
        unsigned int getRows(){return this->rows;}
        unsigned int getCols(){return this->cols;}
        void setRows(unsigned int rows){this->rows = rows;}
        void setCols(unsigned int cols){this->cols = cols;}
        Matrix operator+(Matrix const& other);
        void operator+=(Matrix const& other);
        Matrix operator+();
        Matrix operator-(Matrix const& other);
        void operator-=(Matrix const& other);
        Matrix operator-();
        Matrix operator*(Matrix const& other);
        friend Matrix operator*(double const &num,Matrix other);


        bool operator<(Matrix const& other);
        bool operator<=(Matrix const& other);
        bool operator>(Matrix const& other);
        bool operator>=(Matrix const& other);
        bool operator==(Matrix const& other);
        bool operator!=(Matrix const& other);

        Matrix& operator++();
        Matrix operator++(int);
        Matrix& operator--();
        Matrix operator--(int);

        void operator*=(double const& num);
        friend ostream& operator<<(ostream&,Matrix const &);
        friend istream& operator>>(ostream&,Matrix const);



    };
}