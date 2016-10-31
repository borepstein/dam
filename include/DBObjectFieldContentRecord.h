#ifndef _DBOBJECTFIELDCONTENTRECORD_H
#define _DBOBJECTFIELDCONTENTRECORD_H

class DBObjectFieldContentRecord{
 public:
  void DBObjectFieldContentRecord(void);

  void ~DBObjectFieldContentRecord(void);

  void *getFieldContent();

  void getLength();
 protected:
  
 private:
  void *field_ptr;
  void *temp_ptr;
  unsigned short field_length;
}

#endif /* _DBOBJECTFIELDCONTENTRECORD_H */
