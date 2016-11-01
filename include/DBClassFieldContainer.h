#ifndef _DBCLASSFIELDCONTAINER_H
#define _DBCLASSFIELDCONTAINER_H

#include <FieldSpecRec.h>

class DBObjectFieldContainer{
 public:
  unsigned short getNumberFields(void);

  FieldSpecRec *getFieldList(void);
 protected:

 private:

  DBClassFieldSpecRec *fieldList;
}

#endif /* _DBCLASSFIELDCONTAINER_ */
