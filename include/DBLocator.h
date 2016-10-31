#ifndef _DBLOCATOR_H_INCLUDED
#define _DBLOCATOR_H_INCLUDED

#include <uuid/uuid.h>

class DBLocator{
 public:
  DBLocator(void);

  ~DBLocator(void);

  uuid_t *getDbaseUUID(void);
 protected:
  
 private:
  uuid_t dbaseUUID;

  
};

#endif /* _DBLOCATOR_H_INCLUDE */
