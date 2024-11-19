#include <iostream>

#include "Parent.h"
#include "Child.h"

int main() {
  Parent p(37);
  p.print_var();

  Child c(45);
  c.print_var();
  c.Parent::print_var();

  return 0;
}