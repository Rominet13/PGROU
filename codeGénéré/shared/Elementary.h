#ifndef shared_Elementary_h
#define shared_Elementary_h

#include "Point.h"
#include "Shape.h"


namespace shared {

class Elementary : public Shape {

 public:

    Elementary();

 public:
    Integer ID;
    Point * ends;
};

} /* End of namespace shared */

#endif // shared_Elementary_h
