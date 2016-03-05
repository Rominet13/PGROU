#ifndef API_APICatalogueur_h
#define API_APICatalogueur_h

#include <vector>

#include <shared/ComplexeShapeTODO.h>
#include <shared/SimpleShapeTODO.h>



namespace API {

class APICatalogueur {

 public:

    virtual void miseAJourFS(String fichierTexteFS);

    virtual void miseAJourFC(String fichierTexteFC);

    APICatalogueur();

 public:
    std::vector< shared::SimpleShapeTODO > catalogSimpleForm;
    std::vector< shared::ComplexeShapeTODO > catalogueComplexeForm;
};

} /* End of namespace API */

#endif // API_APICatalogueur_h
