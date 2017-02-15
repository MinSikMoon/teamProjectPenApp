#pragma once
#include <collection.h>
#include <algorithm>

using namespace std;
using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

ref class SymbolInfo sealed
{
	//enum class SymbolType
	//{
	//	process,	// ó��
	//	decision,	// �Ǵ�
	//	preparation,	// �غ�
	//	terminator,	// �ܸ�
	//	data,	// �����
	//	document	// �μ�
	//};
private:

	UINT64 symbolNo = 0;	// symbol�� ������ȣ
	int rowIndex = -1, columnIndex = -1;	// Grid ������ index
	// 1.process 2.decision 3.preparation 4.terminator 5.data 6. document
	int symbolType = 0;	// symbol�� ����
	bool decisionChecker = false;	// decision y or n
	String^ title = nullptr;	// ����
	String^ content = nullptr;	// ����
	String^ detail = nullptr;	// ���γ���
	Vector<SymbolInfo^>^ path = ref new Vector<SymbolInfo^>();	// ��� (�������)
	Vector<bool>^ decision = ref new Vector<bool>(); //yes or no
public:
	SymbolInfo();

	// GET & SET


	property UINT64 SymbolNo
	{
		UINT64 get() { return symbolNo; }
		void set(UINT64 value) { symbolNo = value; }
	}
	property int RowIndex
	{
		int get() { return rowIndex; }
		void set(int value) { rowIndex = value; }
	}
	property int ColumnIndex
	{
		int get() { return columnIndex; }
		void set(int value) { columnIndex = value; }
	}
	property int SymbolType
	{
		int get() { return symbolType; }
		void set(int value) { symbolType = value; }
	}
	property bool DecisionChecker
	{
		bool get() { return decisionChecker; }
		void set(bool value) { decisionChecker = value; }
	}
	property String^ Title
	{
		String^ get() { return title; }
		void set(String^ value) 
		{ 
			String^ tempValue = ref new String(value->Data());
			title = tempValue; 
		}
	}
	property String^ Content
	{
		String^ get() { return content; }
		void set(String^ value) 
		{ 
			String^ tempValue = ref new String(value->Data());
			content = tempValue; 
		}
	}
	property String^ Detail
	{
		String^ get() { return detail; }
		void set(String^ value) 
		{ 
			String^ tempValue = ref new String(value->Data());
			detail = tempValue; 
		}
	}
	property IVector<SymbolInfo^>^ Path
	{
		IVector<SymbolInfo^>^ get() 
		{
			return path;
		}
	}
	property IVector<bool>^ Decision
	{
		IVector<bool>^ get()
		{
			return decision;
		}
		/*void set(IVector<bool>^ value)
		{
			Vector<bool>^ tempDecision = ref new Vector<bool>();
			for (int i = 0; i < value->Size; i++)
			{
				tempDecision->Append(value->GetAt(i));
			}
			decision = tempDecision;
		}*/
	}
};
