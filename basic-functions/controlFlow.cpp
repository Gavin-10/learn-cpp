#include <iostream>

const int Pen {10};
const int Marker{20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main() {
  int a {2};
  int b {3};
  int c {4};

  //very standard
  if (a > b) {
    std::cout << "greater than" << std::endl;
  } else if(a < b) {
    std::cout << "less than" << std::endl;
  } else {
    std::cout << "equal" << std::endl;
  }

  int tool {Eraser};

  //switch cases can only test int types and enums
  switch (tool) {
    case Pen: {
      std::cout << "Active tool: Pen" << std::endl;
    }
    break;

    case Marker: {
      std::cout << "Active tool: Marker" << std::endl;
    }
    break;

    case Eraser: {
      std::cout << "Active tool: Eraser" << std::endl;
    }
    break;

    case Rectangle: {
      std::cout << "Active tool: Rectangle" << std::endl;
    }
    break;

    case Circle: {
      std::cout << "Active tool: Circle" << std::endl;
    }
    break;

    case Ellipse: {
      std::cout << "Active tool: Ellipse" << std::endl;
    }
    break;
    
    default: {
      std::cout << "No tool selected" << std::endl;
    }
    break;
  }

  int d {20};
  int e {10};
  bool test {false};

  std::cout << std::boolalpha;
  std::cout << (test ? true : false) << std::endl;
}