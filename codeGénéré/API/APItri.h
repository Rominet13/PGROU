#ifndef API_APItri_h
#define API_APItri_h

#include <vector>

#include <shared/Constraint.h>
#include <shared/Elementary.h>
#include <shared/Message.h>



namespace API {

/*
 */
class APItri {

 public:

    virtual void gatherSegment();

    virtual void gatherCercle();

    virtual void recevoir();

    virtual void envoyer();

    APItri();

 public:
    std::vector< shared::Constraint > listeContrainteElem;
    shared::Message shapeList;

 private:
    std::vector< shared::Elementary > listeFormesElem;
};

} /* End of namespace API */

#endif // API_APItri_h
