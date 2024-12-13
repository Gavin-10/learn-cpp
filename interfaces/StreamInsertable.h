#ifndef STREAMINSERTABLE_H_
#define STREAMINSERTABLE_H_

#include <iostream>

class StreamInsertable {
  friend std::ostream& operator << (std::ostream&, const StreamInsertable&);

  public:
    virtual void stream_insert(std::ostream&) const =0;
};

#endif