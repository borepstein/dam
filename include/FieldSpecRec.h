#ifndef _FIELDSPECREC_H
#define _FIELDSPECREC_H

class FieldSpecRec{
 public:
  void FieldSpecRec(void);

  void ~FieldSpecRec(void);

  FieldSpecRec getPrev(void);

  FieldSpecRec getNext(void);

  char *getFieldName();

  unsigned short getFieldNameLength();
  
 protected:
 private:
  FieldSpecRec *prev;
  FieldSpecRec *next;
  unsigned char fieldType;
  char fieldName[];
  unsigned short fieldNameLength;
}

#endif /* _FIELDSPECREC_H */
