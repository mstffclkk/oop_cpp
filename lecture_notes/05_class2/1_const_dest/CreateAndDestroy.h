#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H
#include <string>

using namespace std;

class CreateAndDestroy
{
	public:
		CreateAndDestroy(int, string);
		~CreateAndDestroy();
	
	private:
		int objectID; //ID number for object
		string message; // message describing object
};

#endif
