#include "Matrix.hpp"
using namespace zich;
Matrix::Matrix( vector<double> nums, int rows , int cols){
    // this->rows = rows;
    // this->cols = cols;
    // vector<vector<double>> matrix(rows, vector<double>(cols));


}
Matrix Matrix::operator+(const Matrix &a){
    return *this;
}
Matrix Matrix::operator-(const Matrix &a){
    return *this;
    
}
Matrix Matrix::operator*(const Matrix &a){
    return *this;
    
}

ostream& operator<<(ostream& out, const Matrix& a){
    return out;

}
istream& operator<<(istream& in, const Matrix& a){
    return in;   
}

