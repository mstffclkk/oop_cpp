#include<iostream>

using namespace std;

class Shape {
 public:
  virtual void draw() {
    cout << "Drawing a shape" << endl;
  }
};

class Rectangle : public Shape {
 public:
  void draw() {
    cout << "Drawing a rectangle" << endl;
  }
};

class Circle : public Shape {
 public:
  void draw() {
    cout << "Drawing a circle" << endl;
  }
};

int main() {
  /*Shape *shape = new Rectangle();
  shape->draw();  // Output: "Drawing a rectangle"

  shape = new Circle();
  shape->draw();  // Output: "Drawing a circle"
  */
  
  Rectangle rectangle;
  Circle circle;
  
  Shape& shape = rectangle;
  shape.draw();  // Output: "Drawing a rectangle"

  Shape& shape2 = circle;
  shape2.draw();  // Output: "Drawing a circle"
  
  
  /*
  Rectangle rectangle;
  Circle circle;
  
  Shape *shape = &rectangle;
  shape->draw();  // Output: "Drawing a rectangle"

  Shape *shape2 = &circle;
  shape2->draw();  // Output: "Drawing a circle"
  

  */

  return 0;
}

