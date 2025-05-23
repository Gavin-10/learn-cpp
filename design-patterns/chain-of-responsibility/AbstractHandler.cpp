
#include "AbstractHandler.h"

AbstractHandler::~AbstractHandler() {
  delete this->nextHandler;
  this->nextHandler = nullptr;
}

Handler* AbstractHandler::setNext(Handler* nextHandler) {
  this->nextHandler = nextHandler;
  return this;
}

void AbstractHandler::handle(std::string_view request) {
  if(this->nextHandler) {
    this->nextHandler->handle(request);
  }
}