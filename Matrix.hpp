#pragma once
#include <vector>
#include <iostream>
using namespace std;

namespace zich{
    class Matrix{
    public:
        vector<double> vec;
        int row;
        int column;
    
    // public:
        Matrix(vector<double> mat, int row, int col){
            
        }
        
        Matrix operator+ (Matrix const &ot);
        Matrix operator+ (double const num);
        void operator+= (Matrix const &ot);
        void operator+= (double const num);


        Matrix operator- (Matrix const &ot);
        Matrix operator- (double const num);     
        Matrix operator- ();         
        void operator-= (Matrix const &ot);
        void operator-= (double const num);


        bool operator== (Matrix const &ot);
        bool operator!= (Matrix const &ot);

        bool operator<= (Matrix const &ot);
        bool operator< (Matrix const &ot);

        bool operator>= (Matrix const &ot);
        bool operator> (Matrix const &ot);

        Matrix operator++ ();
        Matrix operator-- ();

        Matrix operator* (Matrix const &ot);
        Matrix operator* (double const num);
        void operator*= (Matrix const &ot);
        void operator*= (double const num);
        // friend Matrix operator* (double const num, Matrix const &mat){return mat;}

        // Matrix operator<< (double const num);
        // Matrix operator>> (double const num);
        // friend ostream& operator>>(ostream& in, const Matrix& o){}




        
    };

    inline Matrix operator* (double num, Matrix const& mat){return mat;}


    inline ostream& operator << (ostream &out, Matrix const &o){
        out << o.row;
        return out;
    }
    inline istream& operator >> (istream &in, Matrix *o){
        in >> o->row;
        return in;
    }

};