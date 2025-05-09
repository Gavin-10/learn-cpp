
#pragma once

#include "Subject.h"
#include "RealSubject.h"

class SubjectProxy: public Subject {
public:
  SubjectProxy(RealSubject*);
  ~SubjectProxy();
public:
  void request() const override;
private:
  bool checkAccess() const;
  void logAccess() const;
private:
  RealSubject* realSubject;
};