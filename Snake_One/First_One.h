#pragma once

#include <iostream>

namespace SnakeOne 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Obraz2 picture2;

	/// <summary>
	/// Podsumowanie informacji o First_One
	/// </summary>
	public ref class First_One : public System::Windows::Forms::Form
	{
	public:
		First_One(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~First_One()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  xTBox;

	private: System::Windows::Forms::TextBox^  yTBox;


	private: System::Windows::Forms::Button^  PlusButton;
	private: System::Windows::Forms::Button^  TimesButton;


	private: System::Windows::Forms::Button^  MinusButton;
	private: System::Windows::Forms::Button^  DivisionButton;
	private: System::Windows::Forms::Label^  xLabel;



	private: System::Windows::Forms::Label^  yLabel;


	private: System::Windows::Forms::Label^  resLabel;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  PicLabel;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  face;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  resLabel2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;

	private: System::Windows::Forms::Button^  Prawo;
	private: System::Windows::Forms::Button^  Lewo;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;






	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(First_One::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->xTBox = (gcnew System::Windows::Forms::TextBox());
			this->yTBox = (gcnew System::Windows::Forms::TextBox());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->TimesButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->DivisionButton = (gcnew System::Windows::Forms::Button());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->resLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PicLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->face = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->resLabel2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Prawo = (gcnew System::Windows::Forms::Button());
			this->Lewo = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->face))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Przycisk1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &First_One::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(165, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Przycisk2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &First_One::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Super Program";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &First_One::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(184, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &First_One::label1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(86, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Kopiuj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &First_One::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(134, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"+1";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &First_One::button4_Click);
			// 
			// xTBox
			// 
			this->xTBox->Location = System::Drawing::Point(121, 82);
			this->xTBox->Name = L"xTBox";
			this->xTBox->Size = System::Drawing::Size(62, 20);
			this->xTBox->TabIndex = 7;
			this->xTBox->TextChanged += gcnew System::EventHandler(this, &First_One::textBox2_TextChanged);
			// 
			// yTBox
			// 
			this->yTBox->Location = System::Drawing::Point(121, 108);
			this->yTBox->Name = L"yTBox";
			this->yTBox->Size = System::Drawing::Size(62, 20);
			this->yTBox->TabIndex = 8;
			// 
			// PlusButton
			// 
			this->PlusButton->Location = System::Drawing::Point(69, 134);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(33, 23);
			this->PlusButton->TabIndex = 9;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = true;
			this->PlusButton->Click += gcnew System::EventHandler(this, &First_One::PlusButton_Click);
			// 
			// TimesButton
			// 
			this->TimesButton->Location = System::Drawing::Point(147, 134);
			this->TimesButton->Name = L"TimesButton";
			this->TimesButton->Size = System::Drawing::Size(33, 23);
			this->TimesButton->TabIndex = 10;
			this->TimesButton->Text = L"×";
			this->TimesButton->UseVisualStyleBackColor = true;
			this->TimesButton->Click += gcnew System::EventHandler(this, &First_One::TimesButton_Click);
			// 
			// MinusButton
			// 
			this->MinusButton->Location = System::Drawing::Point(108, 134);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(33, 23);
			this->MinusButton->TabIndex = 11;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = true;
			this->MinusButton->Click += gcnew System::EventHandler(this, &First_One::MinusButton_Click);
			// 
			// DivisionButton
			// 
			this->DivisionButton->Location = System::Drawing::Point(186, 134);
			this->DivisionButton->Name = L"DivisionButton";
			this->DivisionButton->Size = System::Drawing::Size(33, 23);
			this->DivisionButton->TabIndex = 12;
			this->DivisionButton->Text = L"÷";
			this->DivisionButton->UseVisualStyleBackColor = true;
			this->DivisionButton->Click += gcnew System::EventHandler(this, &First_One::DivisionButton_Click);
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Location = System::Drawing::Point(97, 86);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(24, 13);
			this->xLabel->TabIndex = 13;
			this->xLabel->Text = L"x = ";
			this->xLabel->Click += gcnew System::EventHandler(this, &First_One::label3_Click);
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Location = System::Drawing::Point(97, 111);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(24, 13);
			this->yLabel->TabIndex = 14;
			this->yLabel->Text = L"y = ";
			// 
			// resLabel
			// 
			this->resLabel->AutoSize = true;
			this->resLabel->Location = System::Drawing::Point(118, 171);
			this->resLabel->Name = L"resLabel";
			this->resLabel->Size = System::Drawing::Size(46, 13);
			this->resLabel->TabIndex = 16;
			this->resLabel->Text = L"wynik = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(126, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Kalkulator";
			// 
			// PicLabel
			// 
			this->PicLabel->AutoSize = true;
			this->PicLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(238)));
			this->PicLabel->ForeColor = System::Drawing::Color::Olive;
			this->PicLabel->Location = System::Drawing::Point(437, 9);
			this->PicLabel->Name = L"PicLabel";
			this->PicLabel->Size = System::Drawing::Size(60, 15);
			this->PicLabel->TabIndex = 18;
			this->PicLabel->Text = L"Obrazek";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(99, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Zadanie3 - domowe";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(86, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Dodawanie wlasnych klas";
			// 
			// face
			// 
			this->face->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"face.Image")));
			this->face->Location = System::Drawing::Point(396, 32);
			this->face->Name = L"face";
			this->face->Size = System::Drawing::Size(153, 118);
			this->face->TabIndex = 21;
			this->face->TabStop = false;
			this->face->Click += gcnew System::EventHandler(this, &First_One::picBox_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(119, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Licznik";
			this->label10->Click += gcnew System::EventHandler(this, &First_One::label10_Click);
			// 
			// resLabel2
			// 
			this->resLabel2->AutoSize = true;
			this->resLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->resLabel2->ForeColor = System::Drawing::Color::Maroon;
			this->resLabel2->Location = System::Drawing::Point(161, 171);
			this->resLabel2->Name = L"resLabel2";
			this->resLabel2->Size = System::Drawing::Size(14, 13);
			this->resLabel2->TabIndex = 23;
			this->resLabel2->Text = L"0";
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 10);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(326, 275);
			this->tabControl1->TabIndex = 24;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(318, 249);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Zbiórka";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->resLabel2);
			this->tabPage2->Controls->Add(this->xTBox);
			this->tabPage2->Controls->Add(this->yTBox);
			this->tabPage2->Controls->Add(this->PlusButton);
			this->tabPage2->Controls->Add(this->TimesButton);
			this->tabPage2->Controls->Add(this->MinusButton);
			this->tabPage2->Controls->Add(this->DivisionButton);
			this->tabPage2->Controls->Add(this->resLabel);
			this->tabPage2->Controls->Add(this->xLabel);
			this->tabPage2->Controls->Add(this->yLabel);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(318, 249);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Kalkulator";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(318, 249);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Zad.dom.";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(318, 249);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"21.11";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// Prawo
			// 
			this->Prawo->Location = System::Drawing::Point(477, 183);
			this->Prawo->Name = L"Prawo";
			this->Prawo->Size = System::Drawing::Size(75, 23);
			this->Prawo->TabIndex = 26;
			this->Prawo->Text = L"Prawo";
			this->Prawo->UseVisualStyleBackColor = true;
			this->Prawo->Click += gcnew System::EventHandler(this, &First_One::Prawo_Click);
			// 
			// Lewo
			// 
			this->Lewo->Location = System::Drawing::Point(396, 183);
			this->Lewo->Name = L"Lewo";
			this->Lewo->Size = System::Drawing::Size(75, 23);
			this->Lewo->TabIndex = 27;
			this->Lewo->Text = L"Lewo";
			this->Lewo->UseVisualStyleBackColor = true;
			this->Lewo->Click += gcnew System::EventHandler(this, &First_One::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &First_One::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &First_One::timer2_Tick);
			// 
			// First_One
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(618, 290);
			this->Controls->Add(this->Lewo);
			this->Controls->Add(this->Prawo);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->face);
			this->Controls->Add(this->PicLabel);
			this->MaximizeBox = false;
			this->Name = L"First_One";
			this->Text = L"First_One";
			this->Load += gcnew System::EventHandler(this, &First_One::First_One_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->face))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->button2->Text = L"OK";
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->button1->Text = L"NOT OK";
		}

		private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
		private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			label1->Text = textBox1->Text;
		}
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int n = 0;
			n = System::Convert::ToInt32(label2->Text);
			n++;
			label2->Text = System::Convert::ToString(n);
		}
		
				 // plansza 
		private: System::Void First_One_Load(System::Object^  sender, System::EventArgs^  e)
		{

		}
		private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {}
		private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {}
		private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
		private: System::Void picBox_Click(System::Object^  sender, System::EventArgs^  e) {}

		private: System::Void PlusButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			double a = 0;
			double b = 0;
			double wynik = 0;
			a = System::Convert::ToDouble(xTBox->Text);
			b = System::Convert::ToDouble(yTBox->Text);
			wynik = a + b;
			resLabel2->Text = System::Convert::ToString(wynik);
		}

		private: System::Void MinusButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			double a = 0;
			double b = 0;
			double wynik = 0;
			a = System::Convert::ToDouble(xTBox->Text);
			b = System::Convert::ToDouble(yTBox->Text);
			wynik = a - b;
			resLabel2->Text = System::Convert::ToString(wynik);
		}
		private: System::Void TimesButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			double a = 0;
			double b = 0;
			double wynik = 0;
			a = System::Convert::ToDouble(xTBox->Text);
			b = System::Convert::ToDouble(yTBox->Text);
			wynik = a * b;
			resLabel2->Text = System::Convert::ToString(wynik);
		}
		private: System::Void DivisionButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			double a = 0;
			double b = 0;
			double wynik = 0;
			a = System::Convert::ToDouble(xTBox->Text);
			b = System::Convert::ToDouble(yTBox->Text);
			wynik = a / b;
			resLabel2->Text = System::Convert::ToString(wynik);
		}

		private: System::Void Prawo_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//int x = face->Location.X;
			//int y = face->Location.Y;
			//y -= 10;

			//face->Location = System::Drawing::Point(x, y);
			if (timer2->Enabled)
				timer2->Enabled = false;
			else
				timer2->Enabled = true;
		}
				 // lewo
		//private: system::void button5_click(system::object^  sender, system::eventargs^  e)
		//{
		//	int x = face->location.x;
		//	int y = face->location.y;
		//	x -= 10;

		//	face->location = system::drawing::point(x, y);
		//}
				 // lewo
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//timer1->Enabled = false;
			
			if (timer1->Enabled)
				timer1->Enabled = false;
			else 
				timer1->Enabled = true;

		}
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
		{
			int x = face->Location.X;
			int y = face->Location.Y;
			x -= 10;
			face->Location = System::Drawing::Point(x, y);
		}
		private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e)
		{
			int x = face->Location.X;
			int y = face->Location.Y;
			x += 10;
			face->Location = System::Drawing::Point(x, y);
		}
};
}
