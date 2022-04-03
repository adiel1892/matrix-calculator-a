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
    return *this;
}
void Matrix::operator+=(Matrix const& other){

}
Matrix Matrix::operator+(){
    return *this;
}

Matrix Matrix::operator-(Matrix const& other){
    return *this;
}
void Matrix::operator-=(Matrix const& other){

}
Matrix Matrix::operator-(){
    return *this;
}
Matrix Matrix::operator*(Matrix const& other){
    return *this;
}
void Matrix::operator*=(const double &num){

}
// Matrix Matrix::operator*(double const &num,Matrix other){
//     return *this;
// }

bool Matrix::operator>(Matrix const& other){
    return true;
}
bool Matrix::operator>=(Matrix const& other){
    return true;
}
bool Matrix::operator<(Matrix const& other){
    return true;
}
bool Matrix::operator<=(Matrix const& other){
    return true;
}
bool Matrix::operator==(Matrix const& other){
    return true;
}
bool Matrix::operator!=(Matrix const& other){
    return true;
}


Matrix& Matrix::operator++(){
    return *this;
}

Matrix Matrix::operator++(int a){
    return *this;
}

Matrix& Matrix::operator--(){
    return *this;
}

Matrix Matrix::operator--(int a){
    return *this;
}

ostream& operator<<(ostream& out, Matrix const& a){
    return out;

}
istream& operator<<(istream& in, Matrix const& a){
    return in;   
}

