#ifndef recognizer_Shaper12_h
#define recognizer_Shaper12_h

#include <vector>

#include <shared/Message.h>
#include <shared/SimpleShapeTODO.h>



namespace recognizer {

class Shaper12 {

 public:

    virtual Boolean matcher(shared::SimpleShapeTODO );

    virtual void leMatcheur();

    virtual void recevoir();

    virtual void envoyer();

    Shaper12();

 public:
    shared::Message shapeList;
    std::vector< shared::SimpleShapeTODO > catalogSimpleForm;
};

} /* End of namespace recognizer */

#endif // recognizer_Shaper12_h
