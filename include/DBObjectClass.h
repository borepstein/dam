#ifndef _DBOBJECTCLASS_H
#define _DBOBJECTCLASS_H

#include <uuid/uuid.h>


  
class DBObjectClass{
 public:
  void DBObjectClass(void);

  void ~DBObjectClass(void);

  
 protected:
 private:
  uuid_t dbObjectUUID;

  DBObjectFieldContainer *fldContPtr;
}

#endif
