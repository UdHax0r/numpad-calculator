#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // "Single Thread App"?
void main(array<String ^> ^args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Project1::MyForm form;
	Application::Run(% form);
}

namespace Project1 {

#pragma region // `MyForm`'s methods.
	MyForm::MyForm() {
		this->InitializeComponent();
	}

	MyForm::~MyForm() {
		if (this->components)
			delete this->components;
	}

#pragma region // Numpad buttons callbacks.
	System::Void MyForm::button0_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "0";
	}

	System::Void MyForm::button1_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "1";
	}

	System::Void MyForm::button2_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "2";
	}

	System::Void MyForm::button3_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "3";
	}

	System::Void MyForm::button4_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "4";
	}

	System::Void MyForm::button5_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "5";
	}

	System::Void MyForm::button6_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "6";
	}

	System::Void MyForm::button7_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "7";
	}

	System::Void MyForm::button8_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "8";
	}

	System::Void MyForm::button9_Click(System::Object ^sender, System::EventArgs ^e) {
		inputTextBox->Text += "9";
	}
#pragma endregion

#pragma region // Operations buttons.
	System::Void MyForm::btnAdd_Click(System::Object ^sender, System::EventArgs ^e) {
		if (inputTextBox->Text != "") {

			num1 = System::Convert::ToDouble(inputTextBox->Text);
			inputTextBox->Text = "+";
			sign = "+";

		}
	}

	System::Void MyForm::btnSub_Click(System::Object ^sender, System::EventArgs ^e) {
		if (inputTextBox->Text != "") {

			num1 = System::Convert::ToDouble(inputTextBox->Text);
			inputTextBox->Text = "-";
			sign = "-";

		}
	}

	System::Void MyForm::btnDivide_Click(System::Object ^sender, System::EventArgs ^e) {
		if (inputTextBox->Text != "") {

			num1 = System::Convert::ToDouble(inputTextBox->Text);
			inputTextBox->Text = "/";
			sign = "/";

		}
	}

	System::Void MyForm::btnMultiply_Click(System::Object ^sender, System::EventArgs ^e) {
		if (inputTextBox->Text != "") {

			num1 = System::Convert::ToDouble(inputTextBox->Text);
			inputTextBox->Text = "*";
			sign = "*";

		}
	}

	System::Void MyForm::buttonClear_Click(System::Object ^sender, System::EventArgs ^e) {
	}

	System::Void MyForm::buttonEqual_Click(System::Object ^sender, System::EventArgs ^e) {
		double result = 0;

		if (sign == "+" && inputTextBox->Text != "") {

			num2 = System::Convert::ToDouble(inputTextBox->Text);
			result = num1 + num2;
			inputTextBox->Text = System::Convert::ToString(result);

		} else if (sign == "-" && inputTextBox->Text != "") {

			num2 = System::Convert::ToDouble(inputTextBox->Text);
			result = num1 - num2;
			inputTextBox->Text = System::Convert::ToString(result);

		} else if (sign == "*" && inputTextBox->Text != "") {

			num2 = System::Convert::ToDouble(inputTextBox->Text);
			result = num1 * num2;
			inputTextBox->Text = System::Convert::ToString(result);

		} else if (sign == "/" && inputTextBox->Text != "") {

			num2 = System::Convert::ToDouble(inputTextBox->Text);
			result = num1 / num2;
			inputTextBox->Text = System::Convert::ToString(result);

		}

	}
#pragma endregion

#pragma region // Other stuff's callbacks.
	System::Void MyForm::inputTextBox_TextChanged(System::Object ^sender, System::EventArgs ^e) {
	}
#pragma endregion
#pragma endregion

}
