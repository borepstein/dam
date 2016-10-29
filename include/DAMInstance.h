#ifndef _DAMINSTANCE_H_INCLUDED
#define _DAMINSTANCE_H_INCLUDED

/**
instanceRunStatus values 
 */
#define INSTANCE_RUN_STATUS_OK 0
#define INSTANCE_RUN_STATUS_STOP 1

class DAMInstance{
 public:
  DAMInstance();
  ~DAMInstance();
  byte getInstanceRunStatus(void);
  void updateStatus(void);
  
 protected:

 private:
  byte instanceRunStatus;
}

DAMInstance::DAMInstance(void){
  instnaceRunStatus = INSTANCE_RUN_STATUS_O;
}

byte DAMInstance::getInstanceRunStatus(void){
  return( instanceRunStatus );
}

#endif /* _DAMINSTANCE_H_INCLUDE */
