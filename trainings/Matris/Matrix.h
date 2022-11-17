#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
	public:
		Matrix(int, int);
		~Matrix();
		int getRowNumber();
		int gelColumnNumber();
		void setValue(int r, int c, int value);
		void randomSet();
		void identityMatrixSet();
		void display();
		void addMatrix(Matrix &b);
		
	protected:
	private:
		int row;
		int col;
		int matrix[][5];
};

#endif
