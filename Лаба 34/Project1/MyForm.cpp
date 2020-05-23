#include "MyForm.h"
using namespace Project1;
int main() {
	string str = "Данный калькулятор позволяет решать системы уравнений, где имеется 3 переменные коэфициентами являются цифры,которые вводятся при помощи кнопок калькулятора.\nИспользуйте -> и <- для перемещения ячейки в которую вводится цифра, используйте кнопку ? чтобы снова получить инструкцию, используйте кнопку Clear all, чтобы очистить все ячейки.\n На кнопках Sys1,Sys2,Sys3,Sys4 хранятся системы которые можно воостановить, нажав на эти кнопки.\n Кнопка = нужна для получения ответа по выбранной системе.";
	String^ str2 = gcnew String(str.c_str());
	System::Windows::Forms::MessageBox::Show(str2, "Инструкция");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}