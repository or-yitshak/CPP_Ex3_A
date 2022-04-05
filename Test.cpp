/**
 * AUTHORS: or yitshak
 *
 * Date: 2022-03
 */

#include "doctest.h"
#include "Matrix.hpp"
using namespace zich;

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<double> vec1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};                                  // = 3
vector<double> vec2 = {0.1, 0.1, 0.1, 0.2, 0.2, 0.2, 0.3, 0.3, 0.3, 0.4, 0.4, 0.4}; // = 3.4
vector<double> vec3 = {-1, 0, -1, 0, -1, 0};
vector<double> vec4 = {2, 0, 0, 0, 2, 0, 0, 0, 2}; // = 4

Matrix id{vec1, 3, 3};
Matrix mat1{vec2, 4, 3};
Matrix mat2{vec3, 3, 2};
Matrix mat3{vec4, 3, 3};

TEST_CASE("Good input")
{
    CHECK_EQ(id * mat3 == mat3,true);
    CHECK_EQ(2 * id  == mat3,true);
    CHECK_EQ(mat3 - id == id,true);
    CHECK_EQ(id + id == mat3,true);

    CHECK_EQ(mat3 > id,true);
    CHECK_NE(mat3 > mat3,true);
    CHECK_NE(id > mat3,true);

    CHECK_EQ(id < mat3,true);
    CHECK_NE(mat3 < mat3,true);
    CHECK_NE(mat3 < id,true);

    CHECK_EQ(mat3 >= id,true);
    CHECK_EQ(mat3 >= mat3,true);
    CHECK_NE(id >= mat3,true);

    CHECK_EQ(id <= mat3,true);
    CHECK_EQ(mat3 <= mat3,true);
    CHECK_NE(mat3 <= id,true);

    CHECK_EQ(id != mat3,true);
    CHECK_NE(mat3 != mat3,true);

    CHECK_EQ(id == id,true);
    CHECK_NE(id == mat3,true);

    CHECK_EQ(++id == id + 1,true);
}

TEST_CASE("Bad input")
{
    CHECK_THROWS(bool check = id == mat1);
    CHECK_THROWS(bool check = id != mat1);
    CHECK_THROWS(bool check = id >= mat1);
    CHECK_THROWS(bool check = id <= mat1);
    CHECK_THROWS(bool check = id > mat1);
    CHECK_THROWS(bool check = id < mat1);  
    
    CHECK_THROWS(id * mat1);
    CHECK_THROWS(id + mat1);
    CHECK_THROWS(id - mat1);
    CHECK_THROWS(id *= mat1);
    CHECK_THROWS(id += mat1);
    CHECK_THROWS(id -= mat1);
   
    
}

// TEST_CASE("Random input")
// {
//     int cols = rand() % 100;
//     int rows = rand() % 100;

//     if (cols % 2 == 0 || rows % 2 == 0)
//     {
//     	CHECK_THROWS(mat(cols, rows, '$', '%'));
//     }

//     else
//     {
//     	string str = mat(cols, rows, '$', '%');
//     	CHECK(nospaces(str).size() == cols * rows);

//     	char ch = '\n';
//     	CHECK(count(str.begin(), str.end(), ch) == rows - 1);

//     	char ch1 = '$';
//     	char ch2 = '%';
//     	CHECK(count(str.begin(), str.end(), ch1) >= count(str.begin(), str.end(), ch2));

//     	CHECK(isPalindrom(nospaces(str)) == true);
//     }
// }
