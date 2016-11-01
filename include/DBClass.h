#ifndef _DBCLASS_H
#define _DBCLASS_H

#include <uuid/uuid.h>


  
class DBClass{
 public:
  void DBClass(void);

  void ~DBClass(void);

  
 protected:
 private:
  uuid_t dbObjectUUID;

  DBObjectFieldContainer *fldContPtr;
}

#endif /* _DBCLASS_H */
