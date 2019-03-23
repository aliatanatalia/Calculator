#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		double A;
		int Action=0;
	private: System::Windows::Forms::Button^  button18;
	public:
		String^ Answear;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  textBox1;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	public: System::Windows::Forms::Button^  button12;
	public: System::Windows::Forms::Button^  button13;
	public: System::Windows::Forms::Button^  button14;
	public: System::Windows::Forms::Button^  button15;
	public: System::Windows::Forms::Button^  button16;
	private:





	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(135, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(216, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(54, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(135, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 25);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(216, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 25);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(54, 198);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 25);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(135, 198);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 25);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(216, 198);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 25);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(216, 229);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 25);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(216, 73);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 25);
			this->button11->TabIndex = 11;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(54, 337);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 25);
			this->button12->TabIndex = 12;
			this->button12->Tag = L"int A, int Action";
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(135, 337);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 25);
			this->button13->TabIndex = 13;
			this->button13->Tag = L"int A, int Action";
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(54, 368);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 25);
			this->button14->TabIndex = 14;
			this->button14->Tag = L"int A, int Action";
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(135, 368);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 25);
			this->button15->TabIndex = 15;
			this->button15->Tag = L"int A, int Action";
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(54, 400);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 25);
			this->button16->TabIndex = 16;
			this->button16->Tag = L"int A, int Action";
			this->button16->Text = L"|  |";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(216, 473);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 25);
			this->button17->TabIndex = 17;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"DengXian", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(51, 451);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 18;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(54, 229);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 25);
			this->button18->TabIndex = 19;
			this->button18->Text = L",";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(362, 542);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"DengXian", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"KALKULATOR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				{
					if (textBox1->TextLength > 0)
					{
						label1->Text = "";
					}
				}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "1";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "2";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "3";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "4";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "5";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "6";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "7";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "8";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = textBox1->Text + "9";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->TextLength == 0)
			 {
			 }
			 else
			 {
				 textBox1->Text = textBox1->Text + "0";
			 }
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->TextBoxBase::ResetText();
			 button18->Enabled = true;
} 
public: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			double Number;
			if (textBox1->TextLength == 0)
			{
			}
			else if (textBox1->Text == "-")
			{
			}
			else
			{
				try
				{
					Number = Convert::ToDouble(textBox1->Text);
					A = Number;
					textBox1->TextBoxBase::ResetText();
					Action = 1;
				}
				catch (...)
				{
					textBox1->TextBoxBase::Clear();
					label1->Text = "Niepoprawne dane!";
				}
			}
			button18->Enabled = true;
}
public: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			double Number;
			if (textBox1->TextLength == 0)
			{
				textBox1->Text = "-";
			}
			else if (textBox1->Text == "-")
			{
			}
			else
			{
				try
				{
					Number = Convert::ToDouble(textBox1->Text);
					A = Number;
					textBox1->TextBoxBase::ResetText();
					Action = 2;
				}
				catch (...)
				{
					textBox1->TextBoxBase::Clear();
					label1->Text = "Niepoprawne dane!";
				}
			}
			button18->Enabled = true;
}
	public: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			double Number;
			if (textBox1->TextLength == 0)
			{
			}
			else if (textBox1->Text == "-")
			{
			}
			else
			{
				try
				{
					Number = Convert::ToDouble(textBox1->Text);
					A = Number;
					textBox1->TextBoxBase::ResetText();
					Action = 3;
				}
				catch (...)
				{
					textBox1->TextBoxBase::Clear();
					label1->Text = "Niepoprawne dane!";
				}
			}
			button18->Enabled = true;
}
public: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			double Number;
			if (textBox1->TextLength == 0)
			{
			}
			else if (textBox1->Text == "-")
			{
			}
			else
			{
				try
				{
					Number = Convert::ToDouble(textBox1->Text);
					A = Number;
					textBox1->TextBoxBase::ResetText();
					Action = 4;
				}
				catch (...)
				{
					textBox1->TextBoxBase::Clear();
					label1->Text = "Niepoprawne dane!";
				}
			}
			button18->Enabled = true;
}
public: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			double Number;
			if (textBox1->TextLength == 0)
			{
			}
			else if (textBox1->Text == "-")
			{
			}
			else
			{
				try
				{
					Number = Convert::ToDouble(textBox1->Text);
					double C;
					if (Number >= 0)
					{
						C = Number;
					}
					else
					{
						C = -Number;
					}
					Answear = Convert::ToString(C);
					textBox1->Text = Answear;
				}
				catch (...)
				{
					textBox1->TextBoxBase::Clear();
					label1->Text = "Niepoprawne dane!";
				}
			}
}
private: System::Void button17_Click(System::Object^  sender,  System::EventArgs^  e) {
			 if (textBox1->Text == "-" || textBox1->TextLength == 0)
			 {
				 label1->Text = "Wpisz działanie!";
				 textBox1->TextBoxBase::Clear();

			 }
			 else
			 {
				 try
				 {
					 double Number2;
					 Number2 = Convert::ToDouble(textBox1->Text);
					 double B = Number2;
					 double Result;
					 if (Action == 1)
					 {
						 Result = A + B;
					 }
					 else if (Action == 2)
					 {
						 Result = A - B;
					 }
					 else if (Action == 3)
					 {
						 Result = A * B;
					 }
					 else if (Action == 4)
					 {
						 Result = A / B;
					 }
					 Answear = Convert::ToString(Result);
					 textBox1->Text = Answear;
					 Action = 0;
				 }
				 catch (...)
				 {
					 textBox1->TextBoxBase::Clear();
					 label1->Text = "Niepoprawne dane!";

				 }
			 }
			 button18->Enabled = true;
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->TextLength == 0)
			 {
				 textBox1->Text = "0,";
			 }
			 else
			 {
				 textBox1->Text = textBox1->Text + ",";
			 }
			 button18->Enabled = false;
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
