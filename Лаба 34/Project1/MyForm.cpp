#include "MyForm.h"
using namespace Project1;
int main() {
	string str = "������ ����������� ��������� ������ ������� ���������, ��� ������� 3 ���������� ������������� �������� �����,������� �������� ��� ������ ������ ������������.\n����������� -> � <- ��� ����������� ������ � ������� �������� �����, ����������� ������ ? ����� ����� �������� ����������, ����������� ������ Clear all, ����� �������� ��� ������.\n �� ������� Sys1,Sys2,Sys3,Sys4 �������� ������� ������� ����� ������������, ����� �� ��� ������.\n ������ = ����� ��� ��������� ������ �� ��������� �������.";
	String^ str2 = gcnew String(str.c_str());
	System::Windows::Forms::MessageBox::Show(str2, "����������");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}