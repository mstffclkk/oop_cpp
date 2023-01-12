#ifndef MATRIX_H
#define MATRIX_H

#include<iostream>
#include<vector>

using namespace std;

class Matrix
{
	
	friend Matrix operator-(Matrix &m);
	friend Matrix operator!(Matrix &m);
	
	friend ostream &operator<<(ostream &output,const Matrix &m);
	friend istream &operator>>(istream &input, Matrix &m);
	
public:
	Matrix();
	
	Matrix operator+(const Matrix &);
	Matrix operator*(int );
	
	
	~Matrix();
	
private:
	vector< vector < int > > a;
	
};

#endif
