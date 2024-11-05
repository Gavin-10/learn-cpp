#include "cylinder.h"
#include "constants.h"

Cylinder::Cylinder(double radius, double height) {
  this->radius = radius;
  this->height = height;
}

double Cylinder::volume() {
  return PI * this->radius * this->radius * this-> height;
}

double Cylinder::getRadius() {
  return this->radius;
}

void Cylinder::setRadius(double radius) {
  this->radius = radius;
}

double Cylinder::getHeight() {
  return this->height;
}

void Cylinder::setHeight(double height) {
  this->height = height;
}