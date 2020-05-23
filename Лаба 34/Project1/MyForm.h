#pragma once
#include<string>
#include<Windows.h>
using namespace std;
int vvod = 1;
int matrinf = 1;
int temp[3][4];
int matr1[3][4];
int matr2[3][4];
int matr3[3][4];
int matr4[3][4];
double x;
double y;
double z;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ X1;
	private: System::Windows::Forms::Button^ button0;


	private: System::Windows::Forms::Button^ back;

	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::Button^ clean;
	private: System::Windows::Forms::Button^ ravno;



	private: System::Windows::Forms::Button^ sys1;
	private: System::Windows::Forms::Button^ sys2;
	private: System::Windows::Forms::Button^ sys3;
	private: System::Windows::Forms::Button^ sys4;
	private: System::Windows::Forms::Button^ vopros;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ X2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ X3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ X4;
	private: System::Windows::Forms::TextBox^ X5;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ X6;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ X7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ X8;
	private: System::Windows::Forms::TextBox^ X9;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ X10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ X11;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ X12;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->X1 = (gcnew System::Windows::Forms::TextBox());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->clean = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->sys1 = (gcnew System::Windows::Forms::Button());
			this->sys2 = (gcnew System::Windows::Forms::Button());
			this->sys3 = (gcnew System::Windows::Forms::Button());
			this->sys4 = (gcnew System::Windows::Forms::Button());
			this->vopros = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->X2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->X3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->X4 = (gcnew System::Windows::Forms::TextBox());
			this->X5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->X6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->X7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->X8 = (gcnew System::Windows::Forms::TextBox());
			this->X9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->X10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->X11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->X12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(114, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(195, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 47);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 47);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(114, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 47);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(195, 195);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 47);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(279, 195);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 47);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(117, 248);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 47);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(198, 248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 47);
			this->button8->TabIndex = 0;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(279, 248);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 47);
			this->button9->TabIndex = 0;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// X1
			// 
			this->X1->Cursor = System::Windows::Forms::Cursors::No;
			this->X1->Location = System::Drawing::Point(12, 18);
			this->X1->Name = L"X1";
			this->X1->ReadOnly = true;
			this->X1->Size = System::Drawing::Size(25, 22);
			this->X1->TabIndex = 1;
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(360, 248);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(75, 47);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(450, 171);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 47);
			this->back->TabIndex = 0;
			this->back->Text = L"<-";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
			// 
			// next
			// 
			this->next->Location = System::Drawing::Point(450, 118);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(75, 47);
			this->next->TabIndex = 0;
			this->next->Text = L"->";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &MyForm::next_Click);
			// 
			// clean
			// 
			this->clean->Location = System::Drawing::Point(531, 118);
			this->clean->Name = L"clean";
			this->clean->Size = System::Drawing::Size(75, 47);
			this->clean->TabIndex = 0;
			this->clean->Text = L"\?";
			this->clean->UseVisualStyleBackColor = true;
			this->clean->Click += gcnew System::EventHandler(this, &MyForm::clean_Click);
			// 
			// ravno
			// 
			this->ravno->Location = System::Drawing::Point(531, 171);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(75, 47);
			this->ravno->TabIndex = 0;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = true;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// sys1
			// 
			this->sys1->Location = System::Drawing::Point(450, 12);
			this->sys1->Name = L"sys1";
			this->sys1->Size = System::Drawing::Size(75, 47);
			this->sys1->TabIndex = 0;
			this->sys1->Text = L"Sys1";
			this->sys1->UseVisualStyleBackColor = true;
			this->sys1->Click += gcnew System::EventHandler(this, &MyForm::sys1_Click);
			// 
			// sys2
			// 
			this->sys2->Location = System::Drawing::Point(531, 12);
			this->sys2->Name = L"sys2";
			this->sys2->Size = System::Drawing::Size(75, 47);
			this->sys2->TabIndex = 0;
			this->sys2->Text = L"Sys2";
			this->sys2->UseVisualStyleBackColor = true;
			this->sys2->Click += gcnew System::EventHandler(this, &MyForm::sys2_Click);
			// 
			// sys3
			// 
			this->sys3->Location = System::Drawing::Point(450, 65);
			this->sys3->Name = L"sys3";
			this->sys3->Size = System::Drawing::Size(75, 47);
			this->sys3->TabIndex = 0;
			this->sys3->Text = L"Sys3";
			this->sys3->UseVisualStyleBackColor = true;
			this->sys3->Click += gcnew System::EventHandler(this, &MyForm::sys3_Click);
			// 
			// sys4
			// 
			this->sys4->Location = System::Drawing::Point(531, 65);
			this->sys4->Name = L"sys4";
			this->sys4->Size = System::Drawing::Size(75, 47);
			this->sys4->TabIndex = 0;
			this->sys4->Text = L"Sys4";
			this->sys4->UseVisualStyleBackColor = true;
			this->sys4->Click += gcnew System::EventHandler(this, &MyForm::sys4_Click);
			// 
			// vopros
			// 
			this->vopros->Location = System::Drawing::Point(531, 224);
			this->vopros->Name = L"vopros";
			this->vopros->Size = System::Drawing::Size(75, 47);
			this->vopros->TabIndex = 0;
			this->vopros->Text = L"Clear all";
			this->vopros->UseVisualStyleBackColor = true;
			this->vopros->Click += gcnew System::EventHandler(this, &MyForm::vopros_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(43, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X +";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X2
			// 
			this->X2->Cursor = System::Windows::Forms::Cursors::No;
			this->X2->Location = System::Drawing::Point(93, 18);
			this->X2->Name = L"X2";
			this->X2->ReadOnly = true;
			this->X2->Size = System::Drawing::Size(25, 22);
			this->X2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(205, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Z =";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X3
			// 
			this->X3->Cursor = System::Windows::Forms::Cursors::No;
			this->X3->Location = System::Drawing::Point(174, 18);
			this->X3->Name = L"X3";
			this->X3->ReadOnly = true;
			this->X3->Size = System::Drawing::Size(25, 22);
			this->X3->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(124, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Y +";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X4
			// 
			this->X4->Cursor = System::Windows::Forms::Cursors::No;
			this->X4->Location = System::Drawing::Point(255, 18);
			this->X4->Name = L"X4";
			this->X4->ReadOnly = true;
			this->X4->Size = System::Drawing::Size(25, 22);
			this->X4->TabIndex = 1;
			// 
			// X5
			// 
			this->X5->Cursor = System::Windows::Forms::Cursors::No;
			this->X5->Location = System::Drawing::Point(12, 59);
			this->X5->Name = L"X5";
			this->X5->ReadOnly = true;
			this->X5->Size = System::Drawing::Size(25, 22);
			this->X5->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(43, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"X +";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X6
			// 
			this->X6->Cursor = System::Windows::Forms::Cursors::No;
			this->X6->Location = System::Drawing::Point(93, 59);
			this->X6->Name = L"X6";
			this->X6->ReadOnly = true;
			this->X6->Size = System::Drawing::Size(25, 22);
			this->X6->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(124, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 29);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Y +";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X7
			// 
			this->X7->Cursor = System::Windows::Forms::Cursors::No;
			this->X7->Location = System::Drawing::Point(174, 59);
			this->X7->Name = L"X7";
			this->X7->ReadOnly = true;
			this->X7->Size = System::Drawing::Size(25, 22);
			this->X7->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(205, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 29);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Z =";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X8
			// 
			this->X8->Cursor = System::Windows::Forms::Cursors::No;
			this->X8->Location = System::Drawing::Point(255, 59);
			this->X8->Name = L"X8";
			this->X8->ReadOnly = true;
			this->X8->Size = System::Drawing::Size(25, 22);
			this->X8->TabIndex = 1;
			// 
			// X9
			// 
			this->X9->Cursor = System::Windows::Forms::Cursors::No;
			this->X9->Location = System::Drawing::Point(12, 97);
			this->X9->Name = L"X9";
			this->X9->ReadOnly = true;
			this->X9->Size = System::Drawing::Size(25, 22);
			this->X9->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(43, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 29);
			this->label7->TabIndex = 2;
			this->label7->Text = L"X +";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X10
			// 
			this->X10->Cursor = System::Windows::Forms::Cursors::No;
			this->X10->Location = System::Drawing::Point(93, 97);
			this->X10->Name = L"X10";
			this->X10->ReadOnly = true;
			this->X10->Size = System::Drawing::Size(25, 22);
			this->X10->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(124, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 29);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Y +";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X11
			// 
			this->X11->Cursor = System::Windows::Forms::Cursors::No;
			this->X11->Location = System::Drawing::Point(174, 97);
			this->X11->Name = L"X11";
			this->X11->ReadOnly = true;
			this->X11->Size = System::Drawing::Size(25, 22);
			this->X11->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(205, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 29);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Z =";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// X12
			// 
			this->X12->Cursor = System::Windows::Forms::Cursors::No;
			this->X12->Location = System::Drawing::Point(255, 97);
			this->X12->Name = L"X12";
			this->X12->ReadOnly = true;
			this->X12->Size = System::Drawing::Size(25, 22);
			this->X12->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(643, 307);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->X12);
			this->Controls->Add(this->X8);
			this->Controls->Add(this->X4);
			this->Controls->Add(this->X11);
			this->Controls->Add(this->X7);
			this->Controls->Add(this->X3);
			this->Controls->Add(this->X10);
			this->Controls->Add(this->X6);
			this->Controls->Add(this->X2);
			this->Controls->Add(this->X9);
			this->Controls->Add(this->X5);
			this->Controls->Add(this->X1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->next);
			this->Controls->Add(this->back);
			this->Controls->Add(this->clean);
			this->Controls->Add(this->sys1);
			this->Controls->Add(this->sys2);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->vopros);
			this->Controls->Add(this->sys4);
			this->Controls->Add(this->sys3);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void kramor() {
			double del, delx, dely, delz;
			del = temp[0][0] * temp[1][1] * temp[2][2] + temp[1][0] * temp[2][1] * temp[0][2] + temp[0][1] * temp[1][2] * temp[2][0] - temp[0][2] * temp[1][1] * temp[2][0] - temp[0][0] * temp[1][2] * temp[2][1] - temp[0][1] * temp[1][0] * temp[2][2];
			if (del != 0) {
				delx = temp[0][3] * temp[1][1] * temp[2][2] + temp[1][3] * temp[2][1] * temp[0][2] + temp[0][1] * temp[1][2] * temp[2][3] - temp[0][2] * temp[1][1] * temp[2][3] - temp[0][3] * temp[1][2] * temp[2][1] - temp[0][1] * temp[1][3] * temp[2][2];
				dely = temp[0][0] * temp[1][3] * temp[2][2] + temp[1][0] * temp[2][3] * temp[0][2] + temp[0][3] * temp[1][2] * temp[2][0] - temp[0][2] * temp[1][3] * temp[2][0] - temp[0][0] * temp[1][2] * temp[2][3] - temp[0][3] * temp[1][0] * temp[2][2];
				delz = temp[0][0] * temp[1][1] * temp[2][3] + temp[1][0] * temp[2][1] * temp[0][3] + temp[0][1] * temp[1][3] * temp[2][0] - temp[0][3] * temp[1][1] * temp[2][0] - temp[0][0] * temp[1][3] * temp[2][1] - temp[0][1] * temp[1][0] * temp[2][3];
				x = delx / del;
				y = dely / del;
				z = delz / del;
			}
		}
		void clear() {
			temp[0][0] = NULL;
			X1->Text = " ";
			temp[0][1] = NULL;
			X2->Text = " ";
			temp[0][2] = NULL;
			X3->Text = " ";
			temp[0][3] = NULL;
			X4->Text = " ";
			temp[1][0] = NULL;
			X5->Text = " ";
			temp[1][1] = NULL;
			X6->Text = " ";
			temp[1][2] = NULL;
			X7->Text = " ";
			temp[1][3] = NULL;
			X8->Text = " ";
			temp[2][0] = NULL;
			X9->Text = " ";
			temp[2][1] = NULL;
			X10->Text = " ";
			temp[2][2] = NULL;
			X11->Text = " ";
			temp[2][3] = NULL;
			X12->Text = " ";
}
		void obrper() {
			switch (matrinf) {
			case 1:temp[0][0] = matr1[0][0];
				X1->Text += matr1[0][0];
				temp[0][1] = matr1[0][1];
				X2->Text += matr1[0][1];
				temp[0][2] = matr1[0][2];
				X3->Text += matr1[0][2];
				temp[0][3] =  matr1[0][3];
				X4->Text += matr1[0][3];
				temp[1][0]= matr1[1][0];
				X5->Text += matr1[1][0];
				temp[1][1] = matr1[1][1];
				X6->Text += matr1[1][1];
				temp[1][2] = matr1[1][2];
				X7->Text += matr1[1][2];
				temp[1][3] = matr1[1][3];
				X8->Text += matr1[1][3];
				temp[2][0] = matr1[2][0];
				X9->Text += matr1[2][0];
				temp[2][1] = matr1[2][1];
				X10->Text += matr1[2][1];
				temp[2][2] = matr1[2][2];
				X11->Text += matr1[2][2];
				temp[2][3] = matr1[2][3];
				X12->Text += matr1[2][3];
				  break;
			case 2:temp[0][0] = matr2[0][0];
				X1->Text += matr2[0][0];
				temp[0][1] = matr2[0][1];
				X2->Text += matr2[0][1];
				temp[0][2] = matr2[0][2];
				X3->Text += matr2[0][2];
				temp[0][3] = matr2[0][3];
				X4->Text += matr2[0][3];
				temp[1][0] = matr2[1][0];
				X5->Text += matr2[1][0];
				temp[1][1] = matr2[1][1];
				X6->Text += matr2[1][1];
				temp[1][2] = matr2[1][2];
				X7->Text += matr2[1][2];
				temp[1][3] = matr2[1][3];
				X8->Text += matr2[1][3];
				temp[2][0] = matr2[2][0];
				X9->Text += matr2[2][0];
				temp[2][1] = matr2[2][1];
				X10->Text += matr2[2][1];
				temp[2][2] = matr2[2][2];
				X11->Text += matr2[2][2];
				temp[2][3] = matr2[2][3];
				X12->Text += matr2[2][3];
				  break;
			case 3:temp[0][0] = matr3[0][0];
				X1->Text += matr3[0][0];
				temp[0][1] = matr3[0][1];
				X2->Text += matr3[0][1];
				temp[0][2] = matr3[0][2];
				X3->Text += matr3[0][2];
				temp[0][3] = matr3[0][3];
				X4->Text += matr3[0][3];
				temp[1][0] = matr3[1][0];
				X5->Text += matr3[1][0];
				temp[1][1] = matr3[1][1];
				X6->Text += matr3[1][1];
				temp[1][2] = matr3[1][2];
				X7->Text += matr3[1][2];
				temp[1][3] = matr3[1][3];
				X8->Text += matr3[1][3];
				temp[2][0] = matr3[2][0];
				X9->Text += matr3[2][0];
				temp[2][1] = matr3[2][1];
				X10->Text += matr3[2][1];
				temp[2][2] = matr3[2][2];
				X11->Text += matr3[2][2];
				temp[2][3] = matr3[2][3];
				X12->Text += matr3[2][3];
				  break;
			case 4:temp[0][0] = matr4[0][0];
				X1->Text += matr4[0][0];
				temp[0][1] = matr4[0][1];
				X2->Text += matr4[0][1];
				temp[0][2] = matr4[0][2];
				X3->Text += matr4[0][2];
				temp[0][3] = matr4[0][3];
				X4->Text += matr4[0][3];
				temp[1][0] = matr4[1][0];
				X5->Text += matr4[1][0];
				temp[1][1] = matr4[1][1];
				X6->Text += matr4[1][1];
				temp[1][2] = matr4[1][2];
				X7->Text += matr4[1][2];
				temp[1][3] = matr4[1][3];
				X8->Text += matr4[1][3];
				temp[2][0] = matr4[2][0];
				X9->Text += matr4[2][0];
				temp[2][1] = matr4[2][1];
				X10->Text += matr4[2][1];
				temp[2][2] = matr4[2][2];
				X11->Text += matr4[2][2];
				temp[2][3] = matr4[2][3];
				X12->Text += matr4[2][3];
				  break;

			}
		}
		void pereim() {
			switch (matrinf) {
			case 1:for (int i = 0;i <= 2;i++)
			{
				for (int j = 0;j <=3;j++)
				{
					matr1[i][j] = temp[i][j];
				}
			}
				break;
			case 2:for (int i = 0;i <=2;i++)
			{
				for (int j = 0;j <= 3;j++)
				{
					matr2[i][j] = temp[i][j];
				}
			}
				  break;
			case 3:for (int i = 0;i <= 2;i++)
			{
				for (int j = 0;j <= 3;j++)
				{
					matr3[i][j] = temp[i][j];
				}
			}
				  break;
			case 4:for (int i = 0;i <= 2;i++)
			{
				for (int j = 0;j <= 3;j++)
				{
					matr4[i][j] = temp[i][j];
				}
			}
				  break;

			}

	}
		void vvodmatrix(int n) {
			switch (vvod) {
			case 1:temp[0][0] = n;
				X1->Text = " ";
				X1->Text += n;
				break;
			case 2:temp[0][1] = n;
				X2->Text = " ";
				X2->Text += n;
				break;
			case 3:temp[0][2] = n;
				X3->Text = " ";
				X3->Text += n;
				break;
			case 4:temp[0][3] = n;
				X4->Text = " ";
				X4->Text += n;
				break;
			case 5:temp[1][0] = n;
				X5->Text = " ";
				X5->Text += n;
				break;
			case 6:temp[1][1] = n;
				X6->Text = " ";
				X6->Text += n;
				break;
			case 7:temp[1][2] = n;
				X7->Text = " ";
				X7->Text += n;
				break;
			case 8:temp[1][3] = n;
				X8->Text = " ";
				X8->Text += n;
				break;
			case 9:temp[2][0] = n;
				X9->Text = " ";
				X9->Text += n;
				break;
			case 10:temp[2][1] = n;
				X10->Text = " ";
				X10->Text += n;
				break;
			case 11:temp[2][2] = n;
				X11->Text = " ";
				X11->Text += n;
				break;
			case 12:temp[2][3] = n;
				X12->Text = " ";
				X12->Text += n;
				break;
			}
}
	private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
		if (vvod == 12)
		{
			vvod = 1;
		}
		else {
			vvod++;
		}
	}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	if (vvod == 1)
	{
		vvod = 12;
	}
	else {
		vvod--;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(1);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(3);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(4);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(5);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(6);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(7);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(8);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(9);
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	vvodmatrix(0);
}
private: System::Void clean_Click(System::Object^ sender, System::EventArgs^ e) {
	string str = "Данный калькулятор позволяет решать системы уравнений, где имеется 3 переменные коэфициентами являются цифры,которые вводятся при помощи кнопок калькулятора.\nИспользуйте -> и <- для перемещения ячейки в которую вводится цифра, используйте кнопку ? чтобы снова получить инструкцию, используйте кнопку Clear all, чтобы очистить все ячейки.\n На кнопках Sys1,Sys2,Sys3,Sys4 хранятся системы которые можно воостановить, нажав на эти кнопки.\n Кнопка = нужна для получения ответа по выбранной системе.";
	String^ str2 = gcnew String(str.c_str());
	System::Windows::Forms::MessageBox::Show(str2, "Инструкция");
}
private: System::Void sys1_Click(System::Object^ sender, System::EventArgs^ e) {
	pereim();
	clear();
	matrinf = 1;
	obrper();
	x = 0;
	y = 0;
	z = 0;
}
	private: System::Void vopros_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
	}
private: System::Void sys2_Click(System::Object^ sender, System::EventArgs^ e) {
	pereim();
	clear();
	matrinf = 2;
	obrper();
	x = 0;
	y = 0;
	z = 0;
}
private: System::Void sys3_Click(System::Object^ sender, System::EventArgs^ e) {
	pereim();
	clear();
	matrinf = 3;
	obrper();
	x = 0;
	y = 0;
	z = 0;
}
private: System::Void sys4_Click(System::Object^ sender, System::EventArgs^ e) {
	pereim();
	clear();
	matrinf = 4;
	obrper();
	x = 0;
	y = 0;
	z = 0;
}
private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	kramor();
	string s = " x=" + to_string(x) + " y=" + to_string(y) + " z=" + to_string(z);
	String^ str2 = gcnew String(s.c_str());
	System::Windows::Forms::MessageBox::Show(str2, "Результат");
}



};
}
