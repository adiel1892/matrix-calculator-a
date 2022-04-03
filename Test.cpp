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
    vector<double> vec = {1,2,3,4,5,6,7,8,9};
    Matrix a(vec, 3, 3);
}