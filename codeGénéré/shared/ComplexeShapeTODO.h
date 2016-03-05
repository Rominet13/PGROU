#ifndef shared_ComplexeShapeTODO_h
#define shared_ComplexeShapeTODO_h

#include <vector>

#include "Shape.h"
#include "SimpleShapeTODO.h"


namespace shared {

class ComplexeShapeTODO : public Shape {

 public:

    ComplexeShapeTODO();

 public:
    std::vector< SimpleShapeTODO > listeFormeSimpleBesoin;
    std::vector< null > listeContrainteSimpleBesoin;
    String nom;
};

} /* End of namespace shared */

#endif // shared_ComplexeShapeTODO_h
