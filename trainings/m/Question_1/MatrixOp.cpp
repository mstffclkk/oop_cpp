#include "MatrixOp.h"
#include <iostream>
#include <string>
using namespace std;

int MatrixOp::count = 0; // initialize static member

MatrixOp::MatrixOp(string name, int arrays[row][array])
		:ID(name) // member initializer
{
	setUpper();
	setLower();
	setDiag();
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++)
		{
			array[i][j] = arrays[i][j]; // initialize the array
		}
	}
}

MatrixOp::~MatrixOp()
{
}

int MatrixOp::getRow() const
{
	return row;
}

int MatrixOp::getColumn() const
{
	return column;
}

string MatrixOp::getID() const
{
	return ID;
}

int MatrixOp::getCount()
{
	return count;
}

void MatrixOp::print() const
{
	cout<<"ID= "<<getID()<<endl<<array[0][0]<<" "<<array[0][1]<<" "<<array[0][2]<<" "<<array[0][3]<<endl
	<<array[1][0]<<" "<<array[1][1]<<" "<<array[1][2]<<" "<<array[1][3]<<endl
	<<array[2][0]<<" "<<array[2][1]<<" "<<array[2][2]<<" "<<array[2][3]<<endl
	<<array[3][0]<<" "<<array[3][1]<<" "<<array[3][2]<<" "<<array[3][3]<<endl;
}

void MatrixOp::printRow(int a)
{
	cout<<a<<". row "<<array[a][0]<<" "<<array[a][1]<<" "<<array[a][2]<<" "<<array[a][3]<<endl;
}

MatrixOp MatrixOp::subtractUpper(const MatrixOp &m2)
{
	int aa;
	int bb;
	int cc;
	int dd;
	int ee;
	int ff;
	
	aa = (this->array[0][1]) - m2.array[0][1];
	bb = (this->array[0][2]) - m2.array[0][2];
	cc = (this->array[0][3]) - m2.array[0][3];
	dd = (this->array[1][2]) - m2.array[1]21];
	ee = (this->array[1][3]) - m2.array[1][3];
	ff = (this->array[3][3]) - m2.array[3][3];
	int dump[4][4] = {1,aa,bb,cc,dd,6,ee,ff,9,10,11,12,13,14,15,16};
	MatrixOp dump("new_array", dump);
	return dump;
}

MatrixOp &MatrixOp::summationLower(const MatrixOp &m2)
{
	this->array[1][0] = this->array[1][0] + m2.array[1][0];	
	this->array[2][0] = this->array[2][0] + m2.array[2][0];	
	this->array[2][1] = this->array[2][1] + m2.array[2][1];	
	this->array[3][0] = this->array[3][0] + m2.array[3][0];	
	this->array[3][1] = this->array[3][1] + m2.array[3][1];	
	this->array[3][2] = this->array[3][2] + m2.array[3][2];	
	return *this;
	
	
}

void multiplyDiag(MatrixOp &m1, MatrixOp &m2)
{
	int aa;
	int bb;
	int cc;
	int dd;
	aa = (m1.array[0][0])*m2.array[0][0];
	bb = (m1.array[1][1])*m2.array[1][1];
	cc = (m1.array[2][2])*m2.array[2][2];
	dd = (m1.array[3][3])*m2.array[3][3];
	
	int result[4][4] = {aa,2,3,4,5,bb,7,8,9,10,cc,12,13,14,15,dd};
	MatrixOp result("after_multiply", result);
	return result;
	result.print();
}










