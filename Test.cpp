#include "doctest.h"
#include "Matrix.hpp"
using namespace zich;


TEST_CASE("initiallize Matrix"){
    vector<double> vec = {1,2,3,4,5,6,7,8,9};
    Matrix a(vec, 3, 3);
    CHECK(a.getMatrix().at(0).at(0) == 1);
    CHECK(a.getMatrix().at(0).at(1) == 2);
    CHECK(a.getMatrix().at(0).at(2) == 3);
    CHECK(a.getMatrix().at(1).at(0) == 4);
    CHECK(a.getMatrix().at(1).at(1) == 5);
    CHECK(a.getMatrix().at(1).at(2) == 6);
    CHECK(a.getMatrix().at(2).at(0) == 7);
    CHECK(a.getMatrix().at(2).at(1) == 8);
    CHECK(a.getMatrix().at(2).at(2) == 9);
    CHECK(a.getCols() == 3);
    CHECK(a.getRows() == 3);

}

TEST_CASE("bool"){
    vector<double> vec1 = {1,2,3,4,5,6,7,8,9};
    Matrix a(vec1, 3, 3);
    Matrix b(vec1, 3, 3);
    vector<double> vec4 = {1,2,3,4,5,5,7,8,9};
    Matrix e(vec4, 3, 3);
    CHECK_FALSE(a.operator==(e));
    a + b;
    CHECK(a.getMatrix().at(0).at(0) == 2);
    CHECK(a.getMatrix().at(0).at(1) == 4);
    CHECK(a.getMatrix().at(0).at(2) == 6);
    CHECK(a.getMatrix().at(1).at(0) == 8);
    CHECK(a.getMatrix().at(1).at(1) == 10);
    CHECK(a.getMatrix().at(1).at(2) == 12);
    CHECK(a.getMatrix().at(2).at(0) == 14);
    CHECK(a.getMatrix().at(2).at(1) == 16);
    CHECK(a.getMatrix().at(2).at(2) == 18);
    CHECK(b.getMatrix().at(0).at(0) == 1);
    CHECK(b.getMatrix().at(0).at(1) == 2);
    CHECK(b.getMatrix().at(0).at(2) == 3);
    CHECK(b.getMatrix().at(1).at(0) == 4);
    CHECK(b.getMatrix().at(1).at(1) == 5);
    CHECK(b.getMatrix().at(1).at(2) == 6);
    CHECK(b.getMatrix().at(2).at(0) == 7);
    CHECK(b.getMatrix().at(2).at(1) == 8);
    CHECK(b.getMatrix().at(2).at(2) == 9);
    vector<double> vec2 = {2,4,6,8,10,12,14,16,18};
    Matrix c(vec2 , 3 , 3);
    a - c;
    CHECK(a.getMatrix().at(0).at(0) == 0);
    CHECK(a.getMatrix().at(0).at(1) == 0);
    CHECK(a.getMatrix().at(0).at(2) == 0);
    CHECK(a.getMatrix().at(1).at(0) == 0);
    CHECK(a.getMatrix().at(1).at(1) == 0);
    CHECK(a.getMatrix().at(1).at(2) == 0);
    CHECK(a.getMatrix().at(2).at(0) == 0);
    CHECK(a.getMatrix().at(2).at(1) == 0);
    CHECK(a.getMatrix().at(2).at(2) == 0);
    vector<double> vec3 = {1,2,3,4};
    Matrix d(vec3 , 2 , 2);
    CHECK_THROWS(a + d);
    
  
    
}