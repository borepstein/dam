#include <DAMInstance.h>
#include <DBLocator.h>

uuid_t *DBLocator::getDbaseUUID(void){
  return( &dbaseUUID );
}
