#ifndef __T_BALANCE_TREE_H__
#define __T_BALANCE_TREE_H__

class  TBalanceTree: public TTreeTable  {
    protected:
int InsBalanceTree(PTBalanceNode &pNode, TKey k, PTDatValue pVal);
int LeftTreeBalancing(PTBalanceNode &pNode); // ������. ������ ���������
int RightTreeBalancing(PTBalanceNode &pNode);// ������. ������� ���������
  public:
    TBalanceTree():TTreeTable(){} // �����������
    //�������� ������
    virtual void InsRecord (TKey k, PTDatValue pVal ); // ��������
    virtual void DelRecord (TKey k);                   // �������
};

#endif // __T_BALANCE_TREE_H__