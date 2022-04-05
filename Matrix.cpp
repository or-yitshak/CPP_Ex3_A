#include "Matrix.hpp"

using namespace std;
using namespace zich;

Matrix Matrix::operator+ (Matrix const &ot){return *this;}
Matrix Matrix::operator+ (double const num){return *this;}
void Matrix::operator+= (Matrix const &ot){}
void Matrix::operator+= (double const num){}


Matrix Matrix::operator- (Matrix const &ot){return *this;}
Matrix Matrix::operator- (double const num){return *this;}     
Matrix Matrix::operator- (){return *this;}         
void Matrix::operator-= (Matrix const &ot){}
void Matrix::operator-= (double const num){}


bool Matrix::operator== (Matrix const &ot){return true;};
bool Matrix::operator!= (Matrix const &ot){return true;}

bool Matrix::operator<= (Matrix const &ot){return true;}
bool Matrix::operator< (Matrix const &ot){return true;}

bool Matrix::operator>= (Matrix const &ot){return true;}
bool Matrix::operator> (Matrix const &ot){return true;}

Matrix Matrix::operator++ (){return *this;}
Matrix Matrix::operator-- (){return *this;}

Matrix Matrix::operator* (Matrix const &ot){return *this;}
Matrix Matrix::operator* (double const num){return *this;}
void Matrix::operator*= (Matrix const &ot){}
void Matrix::operator*= (double const num){}

// Matrix operator* (double num, Matrix const &mat){return mat;}


// Matrix Matrix::operator* (double const num, Matrix  const &mat){return mat;}
// ostream& operator<<(ostream&, const Matrix&);
// ostream& operator>>(ostream&, const Matrix&);