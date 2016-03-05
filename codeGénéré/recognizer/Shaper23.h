#ifndef recognizer_Shaper23_h
#define recognizer_Shaper23_h

#include <vector>

#include <shared/ComplexeShapeTODO.h>
#include <shared/Message.h>



namespace recognizer {

class Shaper23 {

 public:

    virtual Boolean matcher(Integer );

    virtual void leMatcheur();

    Shaper23();

 public:
    shared::Message shapeList;
    std::vector< shared::ComplexeShapeTODO > catalogComplexeForm;
};

} /* End of namespace recognizer */

#endif // recognizer_Shaper23_h
