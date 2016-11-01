#ifndef _DBCLASSFIELDSPECREC_H
#define _DBCLASSFIELDSPECREC_H

#include <DAMCommonIncludes.h>

#define FT_INT 0
#define FT_STRING 1
#define FT_FLOAT 2
#define FT_DATETIME 3

class DBClassFieldSpecRec{
 public:
  void DBClassFieldSpecRec(void);

  void ~DBClassFieldSpecRec(void);

  DBClassFieldSpecRec getPrev(void);

  DBClassFieldSpecRec getNext(void);

  char *getFieldName();

  unsigned char getFieldNameLength();
  
 protected:
 private:
  DBClassFieldSpecRec *prev;
  DBClassFieldSpecRec *next;
  unsigned char fieldType;
  char fieldName[];
  unsigned char fieldNameLength;
}

#endif /* _DBCLASSFIELDSPECREC_H */
