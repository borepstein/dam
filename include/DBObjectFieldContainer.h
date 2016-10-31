#ifndef _DBOBJECTFIELDCONTAINER_H
#define _DBOBJECTFIELDCONTAINER_H

#include <FieldSpecRec.h>

class DBObjectFieldContainer{
 public:
  unsigned short getNumberFields(void);

  FieldSpecRec *getFieldList(void);
 protected:

 private:

  FieldSpecRec *fieldList;
}

#endif /* _DBOBJECTFIELDCONTAINER_ */
