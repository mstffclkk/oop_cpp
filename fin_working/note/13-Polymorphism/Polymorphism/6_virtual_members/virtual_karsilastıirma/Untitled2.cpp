#include<iostream>

using namespace std;

class Shape {
 public:
  virtual double getArea() const  = 0; // pure virtual function
};

class Rectangle : public Shape {
 public:
  Rectangle(double w, double h) : width(w), height(h) {}
  double getArea() const { return width * height; }
 private:
  double width, height;
};

class Circle : public Shape {
 public:
  Circle(double r) : radius(r) {}
  double getArea() const { return 3.14 * radius * radius; }
 private:
  double radius;
};

int main() {
  Rectangle rect(3, 4);
  Circle circle(5);

  Shape& s1 = rect;
  cout << "Area of rectangle: " << s1.getArea() << endl;

  Shape& s2 = circle;
  cout << "Area of circle: " << s2.getArea() << endl;
  
  /*
  Shape *s1 = new Rectangle(3, 4);
  Shape *s2 = new Circle(5);

  cout << "Area of rectangle: " << s1->getArea() << endl;
  cout << "Area of circle: " << s2->getArea() << endl;
  delete s1;
  delete s2;
  */



  return 0;
}

