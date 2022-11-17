#include <iostream>
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const Point A("A",6,6+4*sqrt(3));
	A.print();
	const Point B("B",2,6);
	B.print();
	const Point C("C",10,6);
	C.print();
	const Line a("a",B,C);
	a.print();
	const Line b("b",A,C);
	b.print();
	const Line c("c",A,B);
	c.print();
	
	Triangle t("t",a,b,c);
	t.outputProperties();
	return 0;
}
