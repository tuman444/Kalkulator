#pragma once

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ urokiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ urok1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ urok2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ testiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ urok1ToolStripMenuItem1;


	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->urokiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->urok1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->urok1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->urok2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->urokiToolStripMenuItem,
					this->testiToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(346, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// urokiToolStripMenuItem
			// 
			this->urokiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->urok1ToolStripMenuItem1 });
			this->urokiToolStripMenuItem->Name = L"urokiToolStripMenuItem";
			this->urokiToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->urokiToolStripMenuItem->Text = L"Uroki";
			this->urokiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::urokiToolStripMenuItem_Click);
			// 
			// urok1ToolStripMenuItem1
			// 
			this->urok1ToolStripMenuItem1->Name = L"urok1ToolStripMenuItem1";
			this->urok1ToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->urok1ToolStripMenuItem1->Text = L"Urok1";
			this->urok1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::urok1ToolStripMenuItem1_Click);
			// 
			// testiToolStripMenuItem
			// 
			this->testiToolStripMenuItem->Name = L"testiToolStripMenuItem";
			this->testiToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->testiToolStripMenuItem->Text = L"Testi";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// urok2ToolStripMenuItem
			// 
			this->urok2ToolStripMenuItem->Name = L"urok2ToolStripMenuItem";
			this->urok2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->urok2ToolStripMenuItem->Text = L"Urok2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(283, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(243, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"¬ведите числа";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(170, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L" —умма равно = ";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(283, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(287, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 260);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int num1, num2, sum;
	num1 = Convert::ToInt32(textBox1->Text);
	num2 = Convert::ToInt32(textBox2->Text);
	sum = num1 + num2;
	label2->Text = "Summa = " + Convert::ToString(sum);
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void urokiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void urok1ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Visible = true;
	this->textBox1->Visible = true;
	this->label2->Visible = true;
	this->label1->Visible = true;
	this->button1->Visible = true;

	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->Location = System::Drawing::Point(18, 177);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(125, 19);
	this->label2->TabIndex = 3;
	this->label2->Text = L" —умма равно = ";


	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->Location = System::Drawing::Point(17, 48);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(192, 31);
	this->label1->TabIndex = 2;
	this->label1->Text = L"¬ведите числа";


	this->textBox1->Location = System::Drawing::Point(21, 114);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(100, 20);
	this->textBox1->TabIndex = 4;


	this->textBox2->Location = System::Drawing::Point(210, 114);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(100, 20);
	this->textBox2->TabIndex = 5;


	this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button1->Location = System::Drawing::Point(127, 114);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(77, 31);
	this->button1->TabIndex = 1;
	this->button1->Text = L"+";
	this->button1->UseVisualStyleBackColor = true;
}
};
}
