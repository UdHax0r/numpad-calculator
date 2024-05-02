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

	MyForm::MyForm() {
		this->InitializeComponent();
	}

	MyForm::~MyForm() {
		if (this->components)
			delete this->components;
	}

	System::Void MyForm::button1_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "1";
	}

	System::Void MyForm::button2_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "2";
	}

	System::Void MyForm::button3_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "3";
	}

	System::Void MyForm::button4_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "4";
	}

	System::Void MyForm::button5_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "5";
	}

	System::Void MyForm::button6_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "6";
	}

	System::Void MyForm::button7_Click(System::Object ^sender, System::EventArgs ^e) {

		textBox1->Text = textBox1->Text + "7";
	}

	System::Void MyForm::button8_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "8";
	}

	System::Void MyForm::button9_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "9";

	}

	System::Void MyForm::button0_Click(System::Object ^sender, System::EventArgs ^e) {
		textBox1->Text = textBox1->Text + "0";

	}

	System::Void MyForm::buttonClear_Click(System::Object ^sender, System::EventArgs ^e) {
	}

	System::Void MyForm::btnadd_Click(System::Object ^sender, System::EventArgs ^e) {
		if (textBox1->Text != "") {
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "+";
			sign = "+";
		}

	}

	System::Void MyForm::btnsub_Click(System::Object ^sender, System::EventArgs ^e) {
		if (textBox1->Text != "") {
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "-";
			sign = "-";
		}

	}

	System::Void MyForm::btnMulti_Click(System::Object ^sender, System::EventArgs ^e) {
		if (textBox1->Text != "") {
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "*";
			sign = "*";
		}

	}

	System::Void MyForm::btnDivide_Click(System::Object ^sender, System::EventArgs ^e) {
		if (textBox1->Text != "") {
			num1 = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = "/";
			sign = "/";

		}

	}

	System::Void MyForm::button12_Click(System::Object ^sender, System::EventArgs ^e) {
		double result;
		if (sign == "+" && textBox1->Text != "") {

			num2 = System::Convert::ToDouble(textBox1->Text);
			result = num1 + num2;
			textBox1->Text = System::Convert::ToString(result);

		} else if (sign == "-" && textBox1->Text != "") {

			num2 = System::Convert::ToDouble(textBox1->Text);
			result = num1 - num2;
			textBox1->Text = System::Convert::ToString(result);

		} else if (sign == "*" && textBox1->Text != "") {

			num2 = System::Convert::ToDouble(textBox1->Text);
			result = num1 * num2;
			textBox1->Text = System::Convert::ToString(result);

		} else if (sign == "/" && textBox1->Text != "") {

			num2 = System::Convert::ToDouble(textBox1->Text);
			result = num1 / num2;
			textBox1->Text = System::Convert::ToString(result);

		}

	}

	System::Void MyForm::textBox1_TextChanged(System::Object ^sender, System::EventArgs ^e) {
	}

}
