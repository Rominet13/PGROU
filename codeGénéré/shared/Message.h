#ifndef shared_Message_h
#define shared_Message_h

#include <vector>

#include "Constraint.h"
#include "Message.h"
#include "Shape.h"


namespace shared {

class Message {

 public:

    virtual void add(Message toConcatenate);

    Message();

    virtual Constraint selectConstraint(Constraint theConstraint);

 public:
    std::vector< Shape > shapes;
    std::vector< Constraint > constraints;
};

} /* End of namespace shared */

#endif // shared_Message_h
