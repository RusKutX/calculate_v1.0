#pragma once

namespace MyFIrstWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//кто прочел - лох.
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Button^ buttonAC;


	private: System::Windows::Forms::Button^ button_minus_plus;
	private: System::Windows::Forms::Button^ buttonPercent;


	private: System::Windows::Forms::Button^ buttonDivided;

	private: System::Windows::Forms::Button^ buttonMultiplication;

	private: System::Windows::Forms::Button^ buttonNum9;

	private: System::Windows::Forms::Button^ buttonNum7;

	private: System::Windows::Forms::Button^ buttonNum8;
	private: System::Windows::Forms::Button^ buttonSubtraction;


	private: System::Windows::Forms::Button^ buttonNum6;

	private: System::Windows::Forms::Button^ buttonNum5;

	private: System::Windows::Forms::Button^ buttonNum4;
	private: System::Windows::Forms::Button^ buttonAddition;


	private: System::Windows::Forms::Button^ buttonNum3;

	private: System::Windows::Forms::Button^ buttonNum2;

	private: System::Windows::Forms::Button^ buttonNum1;
	private: System::Windows::Forms::Button^ buttonEquals;
	private: System::Windows::Forms::Button^ buttonDot;

	private: System::Windows::Forms::Button^ buttonNum0;

	private: float first_num;
	private: char user_action = ' ';
	private:  bool is_equal = false;











	protected:

	protected:

	protected:






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->button_minus_plus = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->buttonDivided = (gcnew System::Windows::Forms::Button());
			this->buttonMultiplication = (gcnew System::Windows::Forms::Button());
			this->buttonNum9 = (gcnew System::Windows::Forms::Button());
			this->buttonNum7 = (gcnew System::Windows::Forms::Button());
			this->buttonNum8 = (gcnew System::Windows::Forms::Button());
			this->buttonSubtraction = (gcnew System::Windows::Forms::Button());
			this->buttonNum6 = (gcnew System::Windows::Forms::Button());
			this->buttonNum5 = (gcnew System::Windows::Forms::Button());
			this->buttonNum4 = (gcnew System::Windows::Forms::Button());
			this->buttonAddition = (gcnew System::Windows::Forms::Button());
			this->buttonNum3 = (gcnew System::Windows::Forms::Button());
			this->buttonNum2 = (gcnew System::Windows::Forms::Button());
			this->buttonNum1 = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonNum0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Location = System::Drawing::Point(-8, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"__________________________________________________";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Location = System::Drawing::Point(-8, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"__________________________________________________";
			// 
			// labelResult
			// 
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->labelResult->Location = System::Drawing::Point(0, 11);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(292, 77);
			this->labelResult->TabIndex = 3;
			this->labelResult->Text = L"0";
			this->labelResult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::DarkOrange;
			this->buttonAC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonAC->Location = System::Drawing::Point(9, 100);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(60, 60);
			this->buttonAC->TabIndex = 4;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &Form1::buttonAC_Click);
			// 
			// button_minus_plus
			// 
			this->button_minus_plus->BackColor = System::Drawing::Color::DarkOrange;
			this->button_minus_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus_plus->ForeColor = System::Drawing::SystemColors::Info;
			this->button_minus_plus->Location = System::Drawing::Point(80, 100);
			this->button_minus_plus->Name = L"button_minus_plus";
			this->button_minus_plus->Size = System::Drawing::Size(60, 60);
			this->button_minus_plus->TabIndex = 6;
			this->button_minus_plus->Text = L"+/-";
			this->button_minus_plus->UseVisualStyleBackColor = false;
			this->button_minus_plus->Click += gcnew System::EventHandler(this, &Form1::button_minus_plus_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::DarkOrange;
			this->buttonPercent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPercent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPercent->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonPercent->Location = System::Drawing::Point(151, 100);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(60, 60);
			this->buttonPercent->TabIndex = 7;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &Form1::buttonPercent_Click);
			// 
			// buttonDivided
			// 
			this->buttonDivided->BackColor = System::Drawing::Color::DarkSlateGray;
			this->buttonDivided->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDivided->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDivided->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivided->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonDivided->Location = System::Drawing::Point(223, 100);
			this->buttonDivided->Name = L"buttonDivided";
			this->buttonDivided->Size = System::Drawing::Size(60, 60);
			this->buttonDivided->TabIndex = 8;
			this->buttonDivided->Text = L"÷";
			this->buttonDivided->UseVisualStyleBackColor = false;
			this->buttonDivided->Click += gcnew System::EventHandler(this, &Form1::buttonDivided_Click);
			// 
			// buttonMultiplication
			// 
			this->buttonMultiplication->BackColor = System::Drawing::Color::DarkSlateGray;
			this->buttonMultiplication->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMultiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiplication->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonMultiplication->Location = System::Drawing::Point(223, 166);
			this->buttonMultiplication->Name = L"buttonMultiplication";
			this->buttonMultiplication->Size = System::Drawing::Size(60, 60);
			this->buttonMultiplication->TabIndex = 12;
			this->buttonMultiplication->Text = L"x";
			this->buttonMultiplication->UseVisualStyleBackColor = false;
			this->buttonMultiplication->Click += gcnew System::EventHandler(this, &Form1::buttonMultiplication_Click);
			// 
			// buttonNum9
			// 
			this->buttonNum9->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum9->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum9->Location = System::Drawing::Point(151, 166);
			this->buttonNum9->Name = L"buttonNum9";
			this->buttonNum9->Size = System::Drawing::Size(60, 60);
			this->buttonNum9->TabIndex = 11;
			this->buttonNum9->Text = L"9";
			this->buttonNum9->UseVisualStyleBackColor = false;
			this->buttonNum9->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum7
			// 
			this->buttonNum7->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum7->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum7->Location = System::Drawing::Point(9, 166);
			this->buttonNum7->Name = L"buttonNum7";
			this->buttonNum7->Size = System::Drawing::Size(60, 60);
			this->buttonNum7->TabIndex = 10;
			this->buttonNum7->Text = L"7";
			this->buttonNum7->UseVisualStyleBackColor = false;
			this->buttonNum7->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum8
			// 
			this->buttonNum8->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum8->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum8->Location = System::Drawing::Point(80, 166);
			this->buttonNum8->Name = L"buttonNum8";
			this->buttonNum8->Size = System::Drawing::Size(60, 60);
			this->buttonNum8->TabIndex = 9;
			this->buttonNum8->Text = L"8";
			this->buttonNum8->UseVisualStyleBackColor = false;
			this->buttonNum8->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonSubtraction
			// 
			this->buttonSubtraction->BackColor = System::Drawing::Color::DarkSlateGray;
			this->buttonSubtraction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSubtraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSubtraction->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonSubtraction->Location = System::Drawing::Point(223, 232);
			this->buttonSubtraction->Name = L"buttonSubtraction";
			this->buttonSubtraction->Size = System::Drawing::Size(60, 60);
			this->buttonSubtraction->TabIndex = 16;
			this->buttonSubtraction->Text = L"-";
			this->buttonSubtraction->UseVisualStyleBackColor = false;
			this->buttonSubtraction->Click += gcnew System::EventHandler(this, &Form1::buttonSubtraction_Click);
			// 
			// buttonNum6
			// 
			this->buttonNum6->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum6->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum6->Location = System::Drawing::Point(151, 232);
			this->buttonNum6->Name = L"buttonNum6";
			this->buttonNum6->Size = System::Drawing::Size(60, 60);
			this->buttonNum6->TabIndex = 15;
			this->buttonNum6->Text = L"6";
			this->buttonNum6->UseVisualStyleBackColor = false;
			this->buttonNum6->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum5
			// 
			this->buttonNum5->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum5->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum5->Location = System::Drawing::Point(80, 232);
			this->buttonNum5->Name = L"buttonNum5";
			this->buttonNum5->Size = System::Drawing::Size(60, 60);
			this->buttonNum5->TabIndex = 14;
			this->buttonNum5->Text = L"5";
			this->buttonNum5->UseVisualStyleBackColor = false;
			this->buttonNum5->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum4
			// 
			this->buttonNum4->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum4->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum4->Location = System::Drawing::Point(9, 232);
			this->buttonNum4->Name = L"buttonNum4";
			this->buttonNum4->Size = System::Drawing::Size(60, 60);
			this->buttonNum4->TabIndex = 13;
			this->buttonNum4->Text = L"4";
			this->buttonNum4->UseVisualStyleBackColor = false;
			this->buttonNum4->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonAddition
			// 
			this->buttonAddition->BackColor = System::Drawing::Color::DarkSlateGray;
			this->buttonAddition->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddition->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddition->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonAddition->Location = System::Drawing::Point(223, 298);
			this->buttonAddition->Name = L"buttonAddition";
			this->buttonAddition->Size = System::Drawing::Size(60, 60);
			this->buttonAddition->TabIndex = 20;
			this->buttonAddition->Text = L"+";
			this->buttonAddition->UseVisualStyleBackColor = false;
			this->buttonAddition->Click += gcnew System::EventHandler(this, &Form1::buttonAddition_Click);
			// 
			// buttonNum3
			// 
			this->buttonNum3->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum3->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum3->Location = System::Drawing::Point(151, 298);
			this->buttonNum3->Name = L"buttonNum3";
			this->buttonNum3->Size = System::Drawing::Size(60, 60);
			this->buttonNum3->TabIndex = 19;
			this->buttonNum3->Text = L"3";
			this->buttonNum3->UseVisualStyleBackColor = false;
			this->buttonNum3->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum2
			// 
			this->buttonNum2->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum2->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum2->Location = System::Drawing::Point(80, 298);
			this->buttonNum2->Name = L"buttonNum2";
			this->buttonNum2->Size = System::Drawing::Size(60, 60);
			this->buttonNum2->TabIndex = 18;
			this->buttonNum2->Text = L"2";
			this->buttonNum2->UseVisualStyleBackColor = false;
			this->buttonNum2->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonNum1
			// 
			this->buttonNum1->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum1->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum1->Location = System::Drawing::Point(9, 298);
			this->buttonNum1->Name = L"buttonNum1";
			this->buttonNum1->Size = System::Drawing::Size(60, 60);
			this->buttonNum1->TabIndex = 17;
			this->buttonNum1->Text = L"1";
			this->buttonNum1->UseVisualStyleBackColor = false;
			this->buttonNum1->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// buttonEquals
			// 
			this->buttonEquals->BackColor = System::Drawing::Color::SlateGray;
			this->buttonEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEquals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEquals->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonEquals->Location = System::Drawing::Point(151, 364);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(132, 60);
			this->buttonEquals->TabIndex = 24;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = false;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &Form1::buttonEquals_Click);
			// 
			// buttonDot
			// 
			this->buttonDot->BackColor = System::Drawing::Color::SlateGray;
			this->buttonDot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDot->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonDot->Location = System::Drawing::Point(79, 364);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(60, 60);
			this->buttonDot->TabIndex = 23;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = false;
			this->buttonDot->Click += gcnew System::EventHandler(this, &Form1::buttonDot_Click);
			// 
			// buttonNum0
			// 
			this->buttonNum0->BackColor = System::Drawing::Color::SlateGray;
			this->buttonNum0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNum0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNum0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum0->ForeColor = System::Drawing::SystemColors::Info;
			this->buttonNum0->Location = System::Drawing::Point(8, 364);
			this->buttonNum0->Name = L"buttonNum0";
			this->buttonNum0->Size = System::Drawing::Size(60, 60);
			this->buttonNum0->TabIndex = 22;
			this->buttonNum0->Text = L"0";
			this->buttonNum0->UseVisualStyleBackColor = false;
			this->buttonNum0->Click += gcnew System::EventHandler(this, &Form1::ButtonNumber_Clic);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(292, 433);
			this->Controls->Add(this->buttonNum4);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->buttonNum0);
			this->Controls->Add(this->buttonAddition);
			this->Controls->Add(this->buttonNum3);
			this->Controls->Add(this->buttonNum2);
			this->Controls->Add(this->buttonNum1);
			this->Controls->Add(this->buttonSubtraction);
			this->Controls->Add(this->buttonNum6);
			this->Controls->Add(this->buttonNum5);
			this->Controls->Add(this->buttonMultiplication);
			this->Controls->Add(this->buttonNum9);
			this->Controls->Add(this->buttonNum7);
			this->Controls->Add(this->buttonNum8);
			this->Controls->Add(this->buttonDivided);
			this->Controls->Add(this->buttonPercent);
			this->Controls->Add(this->button_minus_plus);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelResult);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::Info;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	/*
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void RollUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	*/

	private: System::Void ButtonNumber_Clic(System::Object^ sender, System::EventArgs^ e) {
		this->labelResult->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender); // Понимаем на какую кнопку конкретно я нажал
		
		if (this->labelResult->Text == "0" || is_equal == true) {
			this->labelResult->Text = button->Text;
			is_equal = false;
		}
		else
			this->labelResult->Text = this->labelResult->Text + button->Text;
	}
	private: System::Void buttonAddition_Click(System::Object^ sender, System::EventArgs^ e) {
		muth_action('+');
	}
	private: System::Void buttonSubtraction_Click(System::Object^ sender, System::EventArgs^ e) {
		muth_action('-');
	}
	private: System::Void buttonMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		muth_action('*');
	}
	private: System::Void buttonDivided_Click(System::Object^ sender, System::EventArgs^ e) {
		muth_action('/'); 
	}

	private: System::Void muth_action(char action) {
		this->first_num = System::Convert::ToDouble(this->labelResult->Text);
		this->user_action = action;
		this->labelResult->Text = "0";
	}
	private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;
		
		float secondNum = System::Convert::ToDouble(this->labelResult->Text);
		float result = 0;
		switch (this->user_action)
		{
		case '+':
			result = this->first_num + secondNum;
			break;
		case '-':
			result = this->first_num - secondNum;
			break;
		case '*':
			result = this->first_num * secondNum;
			break;
		case '/':
			if (secondNum == 0) {
				result = 0;
				this->labelResult->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "На ноль делить нельзя!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else 
				result = this->first_num / secondNum;
			break;
		case '%':
			result = this->first_num * secondNum / 100;
			break;
		}
		this->is_equal = true;
		this->labelResult->Text = System::Convert::ToString(result);

		user_action = ' ';
	}
	private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelResult->Text = "0";
		this->labelResult->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void button_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->labelResult->Text);
		num += -1;
		this->labelResult->Text = System::Convert::ToString(num);
	}
	private: System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		muth_action('%');
	}
	private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Txt = this->labelResult->Text;
		if (!Txt->Contains(","))
			this->labelResult->Text = Txt + ",";
	}
};
}
