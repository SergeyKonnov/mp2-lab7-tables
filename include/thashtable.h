#ifndef __T_HASH_TABLE__
#define __T_HASH_TABLE__

class  THashTable : public TTable {
  protected:
    virtual unsigned long HashFunc(const Tkey key); // hash-�������
  public:
    THashTable() : TTable() {} //�����������
};

#endif // __T_HASH_TABLE__
