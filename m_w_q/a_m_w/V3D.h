#ifndef V3D_H
#define V3D_H
#include <string>
using namespace std;
class V3D
{
	public:
		friend void angle(const V3D &v1, const V3D &v2);
		V3D(string Name, double X = 0.0, double Y = 0.0, double Z = 0.0);
		void setX(double);
		void setY(double);
		void setZ(double);
		double getX() const;
		double getY() const;
		double getZ() const;
		string getName() const;
		static int getCount();
		void print() const;
		V3D &algebra(const V3D &b);
		V3D crossProduct(const V3D &b);
		~V3D();
	protected:
	private:
		double x;
		double y;
		double z;
		const string name;
		static int count;
};

#endif
