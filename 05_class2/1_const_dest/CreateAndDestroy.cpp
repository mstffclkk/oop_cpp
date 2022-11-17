#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

CreateAndDestroy::CreateAndDestroy(int ID, string msg)
				//:objectID(ID),
				// message(msg)
{
	objectID = ID;
	message = msg;
	
	cout << "object " << objectID << " constructor runs" << message << endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
	cout << "object " << objectID << " destructor runs" << message << endl;
}
