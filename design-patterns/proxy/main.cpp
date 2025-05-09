
#include <iostream>

#include "SubjectProxy.h"
#include "Subject.h"
#include "RealSubject.h"

void clientCode(const Subject& subject) {
  subject.request();
}

int main() {
  RealSubject* realSubject = new RealSubject();
  clientCode(*realSubject);

  SubjectProxy* proxy = new SubjectProxy(realSubject);
  clientCode(*proxy);

  delete proxy;

  return 0;
}