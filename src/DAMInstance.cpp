#include <DAMInstance.h>

DAMInstance::DAMInstance(void){
  instanceRunStatus = INSTANCE_RUN_STATUS_OK;
}

DAMInstance::~DAMInstance(void){
}

unsigned char DAMInstance::getInstanceRunStatus(void){
  return( instanceRunStatus );
}

void DAMInstance::updateInstanceRunStatus(void){
}

DBLocator *DAMInstance::getDBLocator(void){
  return( dataBaseLocator );
}
