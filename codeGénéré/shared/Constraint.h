#ifndef shared_Constraint_h
#define shared_Constraint_h

#include <vector>

#include "Shape.h"


namespace shared {

class Constraint {

 public:

    Constraint();

 public:
    std::vector< Shape > shapes;
    ConstraintType type;
    Integer value;
};

} /* End of namespace shared */

#endif // shared_Constraint_h
