#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;

	public ref class MyForm : public System::Windows::Forms::Form {

	public:
		MyForm();

	protected:
		~MyForm(); // `protected` destructor.

	private:
#pragma region // Aaaaall the UI components' fields. From WinForms Designer.
		System::Windows::Forms::Panel ^numpadPanel;
		System::Windows::Forms::TextBox ^inputTextBox;

		System::Windows::Forms::Button ^button0;
		System::Windows::Forms::Button ^button1;
		System::Windows::Forms::Button ^button2;
		System::Windows::Forms::Button ^button3;
		System::Windows::Forms::Button ^button4;
		System::Windows::Forms::Button ^button5;
		System::Windows::Forms::Button ^button6;
		System::Windows::Forms::Button ^button7;
		System::Windows::Forms::Button ^button8;
		System::Windows::Forms::Button ^button9;

		System::Windows::Forms::Button ^btnAdd;
		System::Windows::Forms::Button ^btnSub;
		System::Windows::Forms::Button ^btnMulti;
		System::Windows::Forms::Button ^btnDivide;
		System::Windows::Forms::Button ^buttonEqual;
		System::Windows::Forms::Button ^buttonClear;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion 

#pragma region // WinForms Designer-generated code.
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numpadPanel = (gcnew System::Windows::Forms::Panel());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numpadPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Green;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(289, 30);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(86, 66);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->BackColor = System::Drawing::Color::Green;
			this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulti->Location = System::Drawing::Point(289, 178);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(86, 66);
			this->btnMulti->TabIndex = 10;
			this->btnMulti->Text = L"x";
			this->btnMulti->UseVisualStyleBackColor = false;
			this->btnMulti->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::Green;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(289, 250);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(86, 66);
			this->btnDivide->TabIndex = 11;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->UseWaitCursor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::Green;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(289, 102);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(86, 66);
			this->btnSub->TabIndex = 12;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::btnSub_Click);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Cursor = System::Windows::Forms::Cursors::No;
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputTextBox->Location = System::Drawing::Point(16, 29);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->ReadOnly = true;
			this->inputTextBox->Size = System::Drawing::Size(386, 38);
			this->inputTextBox->TabIndex = 0;
			this->inputTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::inputTextBox_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(8, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 66);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numpadPanel
			// 
			this->numpadPanel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->numpadPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->numpadPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->numpadPanel->Controls->Add(this->buttonEqual);
			this->numpadPanel->Controls->Add(this->buttonClear);
			this->numpadPanel->Controls->Add(this->button0);
			this->numpadPanel->Controls->Add(this->button9);
			this->numpadPanel->Controls->Add(this->button8);
			this->numpadPanel->Controls->Add(this->button7);
			this->numpadPanel->Controls->Add(this->btnAdd);
			this->numpadPanel->Controls->Add(this->btnMulti);
			this->numpadPanel->Controls->Add(this->btnDivide);
			this->numpadPanel->Controls->Add(this->btnSub);
			this->numpadPanel->Controls->Add(this->button5);
			this->numpadPanel->Controls->Add(this->button4);
			this->numpadPanel->Controls->Add(this->button6);
			this->numpadPanel->Controls->Add(this->button3);
			this->numpadPanel->Controls->Add(this->button2);
			this->numpadPanel->Controls->Add(this->button1);
			this->numpadPanel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->numpadPanel->Location = System::Drawing::Point(12, 97);
			this->numpadPanel->Name = L"numpadPanel";
			this->numpadPanel->Size = System::Drawing::Size(386, 332);
			this->numpadPanel->TabIndex = 16;
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->Location = System::Drawing::Point(192, 250);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(86, 66);
			this->buttonEqual->TabIndex = 16;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(100, 250);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(86, 66);
			this->buttonClear->TabIndex = 15;
			this->buttonClear->Text = L"CE";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(8, 250);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(86, 66);
			this->button0->TabIndex = 14;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(192, 178);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 66);
			this->button9->TabIndex = 13;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(100, 178);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 66);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(8, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 66);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(100, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 66);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(8, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 66);
			this->button4->TabIndex = 7;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(192, 105);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 66);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(192, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 66);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(100, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 66);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(414, 441);
			this->Controls->Add(this->numpadPanel);
			this->Controls->Add(this->inputTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->numpadPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region // `MyForm`'s custom non-designer stuff!
	private:
		//List<char> ^opChars = gcnew List<char>{ '+', '-' };
		double num1, num2;
		bool canCalculate;
		String ^sign;

#pragma region // Numpad buttons callbacks.
		System::Void button0_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button1_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button2_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button3_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button4_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button5_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button6_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button7_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button8_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void button9_Click(System::Object ^sender, System::EventArgs ^e);
#pragma endregion

#pragma region // Operations buttons callbacks.
		System::Void btnAdd_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void btnSub_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void btnDivide_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void btnMultiply_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void buttonEqual_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void buttonClear_Click(System::Object ^sender, System::EventArgs ^e);
#pragma endregion

#pragma region // Other components' callbacks.
		System::Void inputTextBox_TextChanged(System::Object ^sender, System::EventArgs ^e);
#pragma endregion
#pragma endregion

	};

}
