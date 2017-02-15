//
// GridContent.xaml.h
// Declaration of the GridContent class
//

#pragma once
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Shapes;
using namespace Windows::UI;
#include "GridContent.g.h"

namespace flowchart 
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class GridContent sealed
	{
	public:
		GridContent();
	private:
		int curRowIdx, curColumnIdx;
		int rowHeight, columnWidth;			//�������� ����, �������� �ʺ�
		int nowRowNum, nowColumnNum;		//���� ������ ��, ���� ������ ��

		void makeButton(Grid^ parentGrid, int horizontal, int vertical, int width, int height, int rowIdx, int columnIdx);
		void makeRectangle(Grid^ parentGrid, int width, int height, int rowIdx, int columnIdx);
		void makeGridArray(int rowNum, int columnNum, int rectWidth, int rectHeight);
		void makeImage(Grid^ parentGrid, int rowIdx, int columnIdx);
		void appendRow();			//���� ������ ���� �߰�
		void appendColumn();		//���� ������ ���� �߰�
		void appendTopRow();		//�տ� ������ ���� �߰�
		void appendLeftColumn();	//�տ� ������ ���� �߰�

		void PageGrid_DragOver(Platform::Object^ sender, Windows::UI::Xaml::DragEventArgs^ e);
		void PageGrid_Drop(Platform::Object^ sender, Windows::UI::Xaml::DragEventArgs^ e);
		void Rectangle_DragEnter(Platform::Object^ sender, Windows::UI::Xaml::DragEventArgs^ e);
		void PageGrid_SizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);					//GridContent ������ ���� �̺�Ʈ(âũ�Ⱑ �þ �� grid�� �÷��ֱ� ����)
	};
}