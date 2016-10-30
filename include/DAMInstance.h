#ifndef _DAMINSTANCE_H_INCLUDED
#define _DAMINSTANCE_H_INCLUDED

#include <DBLocator.h>

/**
instanceRunStatus values 
 */
#define INSTANCE_RUN_STATUS_OK 0
#define INSTANCE_RUN_STATUS_STOP 1

class DAMInstance{
 public:
  DAMInstance();
  ~DAMInstance();
  unsigned char getInstanceRunStatus(void);
  void updateInstanceRunStatus(void);
  DBLocator *getDBLocator(void);
  
 protected:

 private:
  unsigned char instanceRunStatus;

  DBLocator *dataBaseLocator;
};

#endif /* _DAMINSTANCE_H_INCLUDE */
