#ifndef MATRIXOP_H
#define MATRIXOP_H
#include <string>
using namespace std;
class MatrixOp
{
	public:
		friend void multiplyDiag(MatrixOp &m1, MatrixOp &m2);
		MatrixOp(string name, int arrays[][]);
		~MatrixOp();
		void setUpper(int[][]);
		void setLower(int[][]);
		void setDiag(int[][]);
		int getRow() const;
		int getColumn() const;
		string getID() const;
		static int getCount(); // static int cause of count is static private member
		void print() const;
		MatrixOp subtractUpper(const MatrixOp &m2);
		MatrixOp &summationLower(const MatrixOp &m2);
		
	protected:
		
	private:
		static const int row = 4;
		static const int column = 4;
		static int count;
		const string ID;
		int array[row][column];
		void printRow(int) const;
};

#endif
