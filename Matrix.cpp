#include "Matrix.hpp"
using namespace zich;
Matrix::Matrix( vector<double> nums, int rows , int cols){
    if(rows < 1 || cols < 1){
        __throw_invalid_argument("rows and cols must be positive");
    }
    if(nums.size() != (int)(rows * cols)){
        __throw_invalid_argument("invalid matrix");
    }
    unsigned int u_rows = (unsigned int) rows;
    unsigned int u_cols = (unsigned int) cols;
    this->cols = u_cols;
    this->rows = u_rows;
    vector<double> currRow;
    unsigned int count = 0;
    size_t i = 0;
    while(count < (unsigned int)(rows * cols)){
        currRow.push_back(nums.at(i));
        count++;
        i++;
        if(currRow.size() == cols){
            this->mat.push_back(currRow);
            currRow.resize(0);
        }
    }
}

Matrix::~Matrix(){
    
}
Matrix Matrix::operator+(Matrix const& other){
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return *this;
}
void Matrix::operator+=(Matrix const& other) const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
}
Matrix Matrix::operator+(){
    return *this;
}

Matrix Matrix::operator-(Matrix const& other){
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return *this;
}
void Matrix::operator-=(Matrix const& other) const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }

}
Matrix Matrix::operator-(){
    return *this;
}

Matrix Matrix::operator*(Matrix const& other){
    if(this->cols != other.rows){
        __throw_invalid_argument("can't mult!");
    }
    return *this;
}
void Matrix::operator*=(const double &num){

}

bool Matrix::operator>(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}
bool Matrix::operator>=(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}
bool Matrix::operator<(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}
bool Matrix::operator<=(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}
bool Matrix::operator==(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}
bool Matrix::operator!=(Matrix const& other)const{
    if(other.cols != this->cols || other.rows != this->rows){
        __throw_invalid_argument("Different matrix size!");
    }
    return false;
}


Matrix& Matrix::operator++(){
    return *this;
}


Matrix& Matrix::operator--(){
    return *this;
}


Matrix zich::operator*(double const &num,Matrix const& other){
    Matrix a({0,0,0},1,3);
    return a;
}

ostream& zich::operator<<(ostream& out, Matrix const& a){
    out << "matrix-calculator-a";
    return out;
}


