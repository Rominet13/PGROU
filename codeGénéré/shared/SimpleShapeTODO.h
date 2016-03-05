#ifndef shared_SimpleShapeTODO_h
#define shared_SimpleShapeTODO_h

#include <vector>

#include "Constraint.h"
#include "Shape.h"


namespace shared {

class SimpleShapeTODO : public Shape {
 public:

    
    class  {};


 public:

    SimpleShapeTODO();

 public:
    std::vector< Shape > listeFormeElemBesoin;
    std::vector< Constraint > listeContrainteElemBesoin;
    String nom;
};

} /* End of namespace shared */

#endif // shared_SimpleShapeTODO_h
