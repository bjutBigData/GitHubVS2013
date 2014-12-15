#pragma once
#include "Element.h"
#include "ItemManager.h"
class Visitor
{
public:
	Visitor();
	~Visitor();
	void Init();
	void CreateItem(CPoint& l_u);
	void CreateIO(CPoint& l_u);
	void CreateFILE(CPoint& l_u);
	void CreateFUNCTION(CPoint& l_u);
	void CreateAND(CPoint& l_u);
	void CreateOR(CPoint& l_u);
	void CreateMILDOR(CPoint& l_u);
	void CreateSTRAIGHTFLOW(CPoint& l_u);
	void Draw(CDC* pDC);
	void SelectedItem(CPoint& l_u);
	void MoveItem(CPoint& l_u);
	void DeleteItem();
	void SetName(const CString& content);
	void SignPos(const CPoint& point);
	void FormatState(const int &force_state);
private:
	int state;//10: 20: 30�� 40�� 50��0��1��2��4��3��
	CItemManager mgr;
	CItem* selected_item;
	CPoint press_point;
};

