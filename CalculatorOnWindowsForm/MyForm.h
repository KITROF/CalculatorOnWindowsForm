#pragma once

namespace CalculatorOnWindowsForm 
{

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
	private: System::Windows::Forms::Button^ ButtonErs;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ ButtonCE;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ ButtonPlusOrMinus;
	private: System::Windows::Forms::Button^ ButtonSeven;
	private: System::Windows::Forms::Button^ ButtonEight;
	private: System::Windows::Forms::Button^ ButtonNine;
	private: System::Windows::Forms::Button^ ButtonPlus;
	private: System::Windows::Forms::Button^ ButtonFour;
	private: System::Windows::Forms::Button^ ButtonFive;
	private: System::Windows::Forms::Button^ ButtonSix;
	private: System::Windows::Forms::Button^ ButtonMinus;
	private: System::Windows::Forms::Button^ ButtonOne;
	private: System::Windows::Forms::Button^ ButtonTwo;
	private: System::Windows::Forms::Button^ ButtonThree;
	private: System::Windows::Forms::Button^ ButtonMult;
	private: System::Windows::Forms::Button^ ButtonDot;
	private: System::Windows::Forms::Button^ ButtonZero;
	private: System::Windows::Forms::Button^ ButtonEql;
	private: System::Windows::Forms::Button^ ButtonDiv;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ButtonErs = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCE = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->ButtonPlusOrMinus = (gcnew System::Windows::Forms::Button());
			this->ButtonSeven = (gcnew System::Windows::Forms::Button());
			this->ButtonEight = (gcnew System::Windows::Forms::Button());
			this->ButtonNine = (gcnew System::Windows::Forms::Button());
			this->ButtonPlus = (gcnew System::Windows::Forms::Button());
			this->ButtonFour = (gcnew System::Windows::Forms::Button());
			this->ButtonFive = (gcnew System::Windows::Forms::Button());
			this->ButtonSix = (gcnew System::Windows::Forms::Button());
			this->ButtonMinus = (gcnew System::Windows::Forms::Button());
			this->ButtonOne = (gcnew System::Windows::Forms::Button());
			this->ButtonTwo = (gcnew System::Windows::Forms::Button());
			this->ButtonThree = (gcnew System::Windows::Forms::Button());
			this->ButtonMult = (gcnew System::Windows::Forms::Button());
			this->ButtonDot = (gcnew System::Windows::Forms::Button());
			this->ButtonZero = (gcnew System::Windows::Forms::Button());
			this->ButtonEql = (gcnew System::Windows::Forms::Button());
			this->ButtonDiv = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ButtonErs
			// 
			this->ButtonErs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonErs->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonErs->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ButtonErs->Location = System::Drawing::Point(3, 3);
			this->ButtonErs->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonErs->Name = L"ButtonErs";
			this->ButtonErs->Size = System::Drawing::Size(80, 80);
			this->ButtonErs->TabIndex = 0;
			this->ButtonErs->Text = L"";
			this->ButtonErs->UseVisualStyleBackColor = true;
			this->ButtonErs->Click += gcnew System::EventHandler(this, &MyForm::ButtonErs_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 5);
			this->textBox1->Margin = System::Windows::Forms::Padding(10);
			this->textBox1->MinimumSize = System::Drawing::Size(338, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(338, 66);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ButtonCE
			// 
			this->ButtonCE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonCE->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonCE->Location = System::Drawing::Point(87, 3);
			this->ButtonCE->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonCE->Name = L"ButtonCE";
			this->ButtonCE->Size = System::Drawing::Size(80, 80);
			this->ButtonCE->TabIndex = 2;
			this->ButtonCE->Text = L"CE";
			this->ButtonCE->UseVisualStyleBackColor = true;
			this->ButtonCE->Click += gcnew System::EventHandler(this, &MyForm::ButtonCE_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(171, 3);
			this->button3->MinimumSize = System::Drawing::Size(80, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ButtonPlusOrMinus
			// 
			this->ButtonPlusOrMinus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonPlusOrMinus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonPlusOrMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonPlusOrMinus->Location = System::Drawing::Point(255, 3);
			this->ButtonPlusOrMinus->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonPlusOrMinus->Name = L"ButtonPlusOrMinus";
			this->ButtonPlusOrMinus->Size = System::Drawing::Size(80, 80);
			this->ButtonPlusOrMinus->TabIndex = 4;
			this->ButtonPlusOrMinus->Text = L"+/-";
			this->ButtonPlusOrMinus->UseVisualStyleBackColor = true;
			this->ButtonPlusOrMinus->Click += gcnew System::EventHandler(this, &MyForm::ButtonPlusOrMinus_Click);
			// 
			// ButtonSeven
			// 
			this->ButtonSeven->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonSeven->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonSeven->Location = System::Drawing::Point(3, 88);
			this->ButtonSeven->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonSeven->Name = L"ButtonSeven";
			this->ButtonSeven->Size = System::Drawing::Size(80, 80);
			this->ButtonSeven->TabIndex = 0;
			this->ButtonSeven->Text = L"7";
			this->ButtonSeven->UseVisualStyleBackColor = true;
			this->ButtonSeven->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonEight
			// 
			this->ButtonEight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonEight->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonEight->Location = System::Drawing::Point(87, 88);
			this->ButtonEight->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonEight->Name = L"ButtonEight";
			this->ButtonEight->Size = System::Drawing::Size(80, 80);
			this->ButtonEight->TabIndex = 2;
			this->ButtonEight->Text = L"8";
			this->ButtonEight->UseVisualStyleBackColor = true;
			this->ButtonEight->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonNine
			// 
			this->ButtonNine->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonNine->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonNine->Location = System::Drawing::Point(171, 88);
			this->ButtonNine->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonNine->Name = L"ButtonNine";
			this->ButtonNine->Size = System::Drawing::Size(80, 80);
			this->ButtonNine->TabIndex = 3;
			this->ButtonNine->Text = L"9";
			this->ButtonNine->UseVisualStyleBackColor = true;
			this->ButtonNine->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonPlus
			// 
			this->ButtonPlus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonPlus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonPlus->Location = System::Drawing::Point(255, 88);
			this->ButtonPlus->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonPlus->Name = L"ButtonPlus";
			this->ButtonPlus->Size = System::Drawing::Size(80, 80);
			this->ButtonPlus->TabIndex = 4;
			this->ButtonPlus->Text = L"+";
			this->ButtonPlus->UseVisualStyleBackColor = true;
			this->ButtonPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ButtonFour
			// 
			this->ButtonFour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonFour->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonFour->Location = System::Drawing::Point(3, 173);
			this->ButtonFour->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonFour->Name = L"ButtonFour";
			this->ButtonFour->Size = System::Drawing::Size(80, 80);
			this->ButtonFour->TabIndex = 0;
			this->ButtonFour->Text = L"4";
			this->ButtonFour->UseVisualStyleBackColor = true;
			this->ButtonFour->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonFive
			// 
			this->ButtonFive->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonFive->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonFive->Location = System::Drawing::Point(87, 173);
			this->ButtonFive->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonFive->Name = L"ButtonFive";
			this->ButtonFive->Size = System::Drawing::Size(80, 80);
			this->ButtonFive->TabIndex = 2;
			this->ButtonFive->Text = L"5";
			this->ButtonFive->UseVisualStyleBackColor = true;
			this->ButtonFive->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonSix
			// 
			this->ButtonSix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonSix->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonSix->Location = System::Drawing::Point(171, 173);
			this->ButtonSix->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonSix->Name = L"ButtonSix";
			this->ButtonSix->Size = System::Drawing::Size(80, 80);
			this->ButtonSix->TabIndex = 3;
			this->ButtonSix->Text = L"6";
			this->ButtonSix->UseVisualStyleBackColor = true;
			this->ButtonSix->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonMinus
			// 
			this->ButtonMinus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonMinus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonMinus->Location = System::Drawing::Point(255, 173);
			this->ButtonMinus->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonMinus->Name = L"ButtonMinus";
			this->ButtonMinus->Size = System::Drawing::Size(80, 80);
			this->ButtonMinus->TabIndex = 4;
			this->ButtonMinus->Text = L"-";
			this->ButtonMinus->UseVisualStyleBackColor = true;
			this->ButtonMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ButtonOne
			// 
			this->ButtonOne->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonOne->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonOne->Location = System::Drawing::Point(3, 258);
			this->ButtonOne->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonOne->Name = L"ButtonOne";
			this->ButtonOne->Size = System::Drawing::Size(80, 80);
			this->ButtonOne->TabIndex = 0;
			this->ButtonOne->Text = L"1";
			this->ButtonOne->UseVisualStyleBackColor = true;
			this->ButtonOne->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonTwo
			// 
			this->ButtonTwo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonTwo->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonTwo->Location = System::Drawing::Point(87, 258);
			this->ButtonTwo->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonTwo->Name = L"ButtonTwo";
			this->ButtonTwo->Size = System::Drawing::Size(80, 80);
			this->ButtonTwo->TabIndex = 2;
			this->ButtonTwo->Text = L"2";
			this->ButtonTwo->UseVisualStyleBackColor = true;
			this->ButtonTwo->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonThree
			// 
			this->ButtonThree->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonThree->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonThree->Location = System::Drawing::Point(171, 258);
			this->ButtonThree->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonThree->Name = L"ButtonThree";
			this->ButtonThree->Size = System::Drawing::Size(80, 80);
			this->ButtonThree->TabIndex = 3;
			this->ButtonThree->Text = L"3";
			this->ButtonThree->UseVisualStyleBackColor = true;
			this->ButtonThree->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonMult
			// 
			this->ButtonMult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonMult->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonMult->Location = System::Drawing::Point(255, 258);
			this->ButtonMult->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonMult->Name = L"ButtonMult";
			this->ButtonMult->Size = System::Drawing::Size(80, 80);
			this->ButtonMult->TabIndex = 4;
			this->ButtonMult->Text = L"*";
			this->ButtonMult->UseVisualStyleBackColor = true;
			this->ButtonMult->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ButtonDot
			// 
			this->ButtonDot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonDot->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonDot->Location = System::Drawing::Point(3, 343);
			this->ButtonDot->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonDot->Name = L"ButtonDot";
			this->ButtonDot->Size = System::Drawing::Size(80, 81);
			this->ButtonDot->TabIndex = 0;
			this->ButtonDot->Text = L".";
			this->ButtonDot->UseVisualStyleBackColor = true;
			this->ButtonDot->Click += gcnew System::EventHandler(this, &MyForm::EnterDot);
			// 
			// ButtonZero
			// 
			this->ButtonZero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonZero->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonZero->Location = System::Drawing::Point(87, 343);
			this->ButtonZero->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonZero->Name = L"ButtonZero";
			this->ButtonZero->Size = System::Drawing::Size(80, 81);
			this->ButtonZero->TabIndex = 2;
			this->ButtonZero->Text = L"0";
			this->ButtonZero->UseVisualStyleBackColor = true;
			this->ButtonZero->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// ButtonEql
			// 
			this->ButtonEql->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonEql->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonEql->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonEql->Location = System::Drawing::Point(171, 343);
			this->ButtonEql->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonEql->Name = L"ButtonEql";
			this->ButtonEql->Size = System::Drawing::Size(80, 81);
			this->ButtonEql->TabIndex = 3;
			this->ButtonEql->Text = L"=";
			this->ButtonEql->UseVisualStyleBackColor = true;
			this->ButtonEql->Click += gcnew System::EventHandler(this, &MyForm::ButtonEql_Click);
			// 
			// ButtonDiv
			// 
			this->ButtonDiv->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonDiv->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonDiv->Location = System::Drawing::Point(255, 343);
			this->ButtonDiv->MinimumSize = System::Drawing::Size(80, 80);
			this->ButtonDiv->Name = L"ButtonDiv";
			this->ButtonDiv->Size = System::Drawing::Size(80, 81);
			this->ButtonDiv->TabIndex = 4;
			this->ButtonDiv->Text = L"/";
			this->ButtonDiv->UseVisualStyleBackColor = true;
			this->ButtonDiv->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->ButtonErs, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->ButtonDiv, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->ButtonCE, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->ButtonEql, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->ButtonMult, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->ButtonZero, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->ButtonDot, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->ButtonMinus, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->ButtonPlusOrMinus, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->ButtonThree, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->ButtonPlus, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->ButtonTwo, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->ButtonSeven, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->ButtonEight, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->ButtonOne, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->ButtonNine, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->ButtonSix, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->ButtonFour, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->ButtonFive, 1, 2);
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 84);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(338, 427);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(345, 513);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(361, 552);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit = 0, secondDigit = 0, result = 0, thirdDigit = 0;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ NumbOperators = safe_cast<Button^>(sender);

		try
		{
			firstDigit = Double::Parse(textBox1->Text);
		}
		catch (...)
		{
			textBox1->Text = "";
		}
		textBox1->Text = "";
		operators = NumbOperators->Text;
		
	}

	private: System::Void EnterDot(System::Object^ sender, System::EventArgs^ e)
	{
		if (!textBox1->Text->Contains(","))
		{
			textBox1->Text = textBox1->Text + ",";
		}
	}
	private: System::Void ButtonEql_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			secondDigit = Double::Parse(textBox1->Text);
		}
		catch(...)
		{
			textBox1->Text = "";
		}
		
		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "-")
		{
			result = firstDigit - secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "*")
		{
			result = firstDigit * secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "/")
		{
			result = firstDigit / secondDigit;
			if (result ='∞')
			{
				textBox1->Text = "ДЕЛЕНИЕ НА НОЛЬ НЕВОЗМОЖНО";
			}
			else
			{
				textBox1->Text = System::Convert::ToString(result);
			}
		}
		else if (operators == "%")
		{
			result = firstDigit / 100 * secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void ButtonCE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = "0";
		firstDigit = 0;
		secondDigit = 0;
		result = 0;
	}
private: System::Void ButtonPlusOrMinus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void ButtonErs_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
	if (textBox1->Text=="")
	{
		textBox1->Text = "0";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}