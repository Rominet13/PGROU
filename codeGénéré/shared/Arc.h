#ifndef shared_Arc_h
#define shared_Arc_h

#include "Elementary.h"
#include "Point.h"


namespace shared {

class Arc : public Elementary {

 public:

    Arc();

 public:
    Integer smallRadus;
    Integer GigRadus;
    Point Center;
    Integer startAngle;
    Integer endAngle;
};

} /* End of namespace shared */

#endif // shared_Arc_h
