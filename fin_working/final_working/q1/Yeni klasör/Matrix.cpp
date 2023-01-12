#include "Matrix.h"
#include<iostream>
#include<vector>

using namespace std;

Matrix::Matrix()
{
	a.resize(2, vector< int >(2, 0));
}

Matrix Matrix::operator+(const Matrix &m)
{
	Matrix y;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			y.a[i][j] = a[i][j] + m.a[i][j];
		}
	}
	return y;
}
Matrix Matrix::operator*(int x)
{
	
	Matrix y;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			y.a[i][j] = a[i][j] * x;
		}
	}
	return y;
}

Matrix operator-(Matrix &m)
{
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m.a[i][j] = -m.a[i][j];
		}
	}
	return m;
}
Matrix operator!(Matrix &m)
{
	Matrix tr;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			tr.a[j][i] = m.a[i][j];
		}
	}
	return tr;
}	
ostream &operator<<(ostream &output,const Matrix &m)
{
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            output << m.a[i][j] << " ";
        }
        output << endl;
    }
    return output;
}
istream &operator>>(istream &input, Matrix &m)
{
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            input >> m.a[i][j];
        }
    }
    return input;
}


Matrix::~Matrix()
{
}
