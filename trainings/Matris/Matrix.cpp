#include "Matrix.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
Matrix::Matrix(int r, int c)
{
	row = r;
	col = c;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			matrix[i][j] = 0;
		}
	}
	cout<<"Constructor created with row: "<<getRowNumber()<<" column: "<<gelColumnNumber()<<endl;
}

Matrix::~Matrix()
{
}

int Matrix::getRowNumber()
{
	return row;
}

int Matrix::gelColumnNumber()
{
	return col;
}
