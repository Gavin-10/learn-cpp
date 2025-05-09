
#include "SubjectProxy.h"

#include <iostream>

SubjectProxy::SubjectProxy(RealSubject* realSubject) : realSubject(realSubject) {};

SubjectProxy::~SubjectProxy() {
  delete this->realSubject;
  this->realSubject = nullptr;
}

void SubjectProxy::request() const {
  if (checkAccess()) {
    realSubject->request();
    logAccess();
  }
}

bool SubjectProxy::checkAccess() const {
  std::cout << "Checking access..." << std::endl;

  return true;
}

void SubjectProxy::logAccess() const {
  std::cout << "Logging time..." << std::endl;
}