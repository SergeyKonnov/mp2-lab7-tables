#ifndef __T_TREE_TABLE_H__
#define __T_TREE_TABLE_H__

class  TTreeTable: public TTable {
  protected:
    PTTreeNode pRoot; // ��������� �� ������ ������
    PTTreeNode *ppRef;// ����� ��������� �� �������-���������� � FindRecord
    PTTreeNode pCurrent;// ��������� �� ������� �������
    int CurrPos;        // ����� ������� �������
    stack < PTTreeNode> St;// ���� ��� ���������
    void DeleteTreeTab (PTTreeNode pNode); // ��������
  public:
    TTreeTable(): TTable(){CurrPos=0; PRoot=pCurrent=NULL; ppRef=NULL;}
    ~TTreeTable(){DeleteTreeTab (pRoot);} // ����������
    // �������������� ������
    virtual int IsFull ( ) const ; //���������?
    //�������� ������
    virtual PTDatValue FindRecord (TKey k); // ����� ������
    virtual void InsRecord (TKey k, PTDatValue pVal ); // ��������
    virtual void DelReco rd (TKey k);       // ������� ������
    // ���������
    virtual TKey GetKey (void) const;
    virtual PTDatValue GetValuePTR (void) const;
    virtual int Reset (void);  // ���������� �� ������ ������
    virtual int IsTabEnded (void) const; // ������� ���������?
    virtual int GoNext (void) ;// ������� � ��������� ������
    //(=1 ����� ���������� ��� ��������� ������ �������)
};

#endif // __T_TREE_TABLE_H__