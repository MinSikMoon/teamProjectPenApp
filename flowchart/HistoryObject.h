#pragma once
#include <collection.h>
#include <algorithm>
#include "SymbolInfo.h"
#include "App.xaml.h"

using namespace flowchart;
using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

ref class HistoryObject sealed
{
public:
	HistoryObject();

	//�����丮�� �ʱ�ȭ��
	void initHistory();
	//�����丮 �ȿ� �ٲ� �ɺ����͸� ���� �־���
	void putHistory();
	//���
	bool unDo();
	//����
	bool reDo();
	//���� �����丮�� �ڸ� �����
	void moveFullHistory();
	//SymbolInfo�� ��� ���͸� �������� �����ϱ�
	IVector<SymbolInfo^>^ copySymbolVector(IVector<SymbolInfo^>^ baseSymbolVector);

private:
	Vector<SymbolInfo^>^ *history = new Vector<SymbolInfo^>^[10];
	unsigned int historyIndex = 0;

public:
	/*property unsigned int HistoryIndex
	{
		unsigned int get() { return historyIndex; }
		void set(unsigned int value) { historyIndex = value; }
	}
	property Vector<SymbolInfo^>^* History
	{
		Vector<SymbolInfo^>^* get() { return history; }
	}*/
};