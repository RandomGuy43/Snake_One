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

	// klasa Obraz2 obiekt picture2
	//Obraz2 picture2;

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
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~First_One()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  Prawo;
	private: System::Windows::Forms::Button^  Lewo;
	private: System::Windows::Forms::Timer^  Timer_lewo;
	private: System::Windows::Forms::Timer^  Timer_prawo;


	private: System::Windows::Forms::Button^  Gora;
	private: System::Windows::Forms::Button^  Dol;
	private: System::Windows::Forms::PictureBox^  Background;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  Head;
	private: System::Windows::Forms::PictureBox^  Segment1;
	private: System::Windows::Forms::PictureBox^  Segment2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  Apple;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  Score;
	private: System::Windows::Forms::Label^  Result;
	private: System::Windows::Forms::Timer^  Timer_gora;
	private: System::Windows::Forms::Timer^  Timer_dol;
	private: System::Windows::Forms::Button^  Stop;


	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(First_One::typeid));
			this->Prawo = (gcnew System::Windows::Forms::Button());
			this->Timer_lewo = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer_prawo = (gcnew System::Windows::Forms::Timer(this->components));
			this->Lewo = (gcnew System::Windows::Forms::Button());
			this->Gora = (gcnew System::Windows::Forms::Button());
			this->Dol = (gcnew System::Windows::Forms::Button());
			this->Background = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Head = (gcnew System::Windows::Forms::PictureBox());
			this->Segment1 = (gcnew System::Windows::Forms::PictureBox());
			this->Segment2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Apple = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->Timer_gora = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer_dol = (gcnew System::Windows::Forms::Timer(this->components));
			this->Stop = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->BeginInit();
			this->SuspendLayout();
			// 
			// Prawo
			// 
			this->Prawo->Location = System::Drawing::Point(320, 228);
			this->Prawo->Name = L"Prawo";
			this->Prawo->Size = System::Drawing::Size(23, 23);
			this->Prawo->TabIndex = 26;
			this->Prawo->Text = L">";
			this->Prawo->UseVisualStyleBackColor = true;
			this->Prawo->Click += gcnew System::EventHandler(this, &First_One::Prawo_Click);
			// 
			// Timer_lewo
			// 
			this->Timer_lewo->Interval = 200;
			this->Timer_lewo->Tick += gcnew System::EventHandler(this, &First_One::Timer_lewo_Tick);
			// 
			// Timer_prawo
			// 
			this->Timer_prawo->Interval = 200;
			this->Timer_prawo->Tick += gcnew System::EventHandler(this, &First_One::Timer_prawo_Tick);
			// 
			// Lewo
			// 
			this->Lewo->Location = System::Drawing::Point(262, 228);
			this->Lewo->Name = L"Lewo";
			this->Lewo->Size = System::Drawing::Size(23, 23);
			this->Lewo->TabIndex = 27;
			this->Lewo->Text = L"<";
			this->Lewo->UseVisualStyleBackColor = true;
			this->Lewo->Click += gcnew System::EventHandler(this, &First_One::Lewo_Click);
			// 
			// Gora
			// 
			this->Gora->Location = System::Drawing::Point(291, 200);
			this->Gora->Name = L"Gora";
			this->Gora->Size = System::Drawing::Size(23, 23);
			this->Gora->TabIndex = 28;
			this->Gora->Text = L"ʌ";
			this->Gora->UseVisualStyleBackColor = true;
			this->Gora->Click += gcnew System::EventHandler(this, &First_One::Gora_Click);
			// 
			// Dol
			// 
			this->Dol->Location = System::Drawing::Point(291, 256);
			this->Dol->Name = L"Dol";
			this->Dol->Size = System::Drawing::Size(23, 23);
			this->Dol->TabIndex = 29;
			this->Dol->Text = L"v";
			this->Dol->UseVisualStyleBackColor = true;
			this->Dol->Click += gcnew System::EventHandler(this, &First_One::Dol_Click);
			// 
			// Background
			// 
			this->Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Background.Image")));
			this->Background->Location = System::Drawing::Point(0, 0);
			this->Background->Margin = System::Windows::Forms::Padding(0);
			this->Background->Name = L"Background";
			this->Background->Size = System::Drawing::Size(600, 300);
			this->Background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Background->TabIndex = 21;
			this->Background->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(490, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Wymiary: 600x300";
			// 
			// Head
			// 
			this->Head->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Head.BackgroundImage")));
			this->Head->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Head.Image")));
			this->Head->Location = System::Drawing::Point(281, 150);
			this->Head->Margin = System::Windows::Forms::Padding(0);
			this->Head->Name = L"Head";
			this->Head->Size = System::Drawing::Size(17, 17);
			this->Head->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Head->TabIndex = 31;
			this->Head->TabStop = false;
			// 
			// Segment1
			// 
			this->Segment1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment1.BackgroundImage")));
			this->Segment1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment1.Image")));
			this->Segment1->Location = System::Drawing::Point(298, 150);
			this->Segment1->Margin = System::Windows::Forms::Padding(0);
			this->Segment1->Name = L"Segment1";
			this->Segment1->Size = System::Drawing::Size(17, 17);
			this->Segment1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Segment1->TabIndex = 32;
			this->Segment1->TabStop = false;
			// 
			// Segment2
			// 
			this->Segment2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment2.BackgroundImage")));
			this->Segment2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment2.Image")));
			this->Segment2->Location = System::Drawing::Point(315, 150);
			this->Segment2->Margin = System::Windows::Forms::Padding(0);
			this->Segment2->Name = L"Segment2";
			this->Segment2->Size = System::Drawing::Size(17, 17);
			this->Segment2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Segment2->TabIndex = 33;
			this->Segment2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(493, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Segmenty: 20x20";
			// 
			// Apple
			// 
			this->Apple->BackColor = System::Drawing::Color::Transparent;
			this->Apple->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Apple.BackgroundImage")));
			this->Apple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Apple.Image")));
			this->Apple->Location = System::Drawing::Point(188, 62);
			this->Apple->Margin = System::Windows::Forms::Padding(0);
			this->Apple->Name = L"Apple";
			this->Apple->Size = System::Drawing::Size(20, 20);
			this->Apple->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Apple->TabIndex = 35;
			this->Apple->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(504, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Japco: 20x20";
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->BackColor = System::Drawing::Color::Transparent;
			this->Score->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(238)));
			this->Score->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Score.Image")));
			this->Score->Location = System::Drawing::Point(15, 15);
			this->Score->Margin = System::Windows::Forms::Padding(0);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(50, 23);
			this->Score->TabIndex = 37;
			this->Score->Text = L"Score:";
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->BackColor = System::Drawing::Color::Transparent;
			this->Result->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->Result->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Result.Image")));
			this->Result->Location = System::Drawing::Point(60, 15);
			this->Result->Margin = System::Windows::Forms::Padding(0);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(49, 23);
			this->Result->TabIndex = 38;
			this->Result->Text = L"Result";
			// 
			// Timer_gora
			// 
			this->Timer_gora->Interval = 200;
			this->Timer_gora->Tick += gcnew System::EventHandler(this, &First_One::Timer_gora_Tick);
			// 
			// Timer_dol
			// 
			this->Timer_dol->Interval = 200;
			this->Timer_dol->Tick += gcnew System::EventHandler(this, &First_One::Timer_dol_Tick);
			// 
			// Stop
			// 
			this->Stop->AutoSize = true;
			this->Stop->BackColor = System::Drawing::Color::Red;
			this->Stop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Stop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(238)));
			this->Stop->ForeColor = System::Drawing::Color::Transparent;
			this->Stop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Stop.Image")));
			this->Stop->Location = System::Drawing::Point(290, 228);
			this->Stop->Margin = System::Windows::Forms::Padding(0);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(25, 24);
			this->Stop->TabIndex = 39;
			this->Stop->Text = L"X";
			this->Stop->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Stop->UseVisualStyleBackColor = false;
			this->Stop->Click += gcnew System::EventHandler(this, &First_One::Stop_Click);
			// 
			// First_One
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(600, 299);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Apple);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Segment2);
			this->Controls->Add(this->Segment1);
			this->Controls->Add(this->Head);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Dol);
			this->Controls->Add(this->Gora);
			this->Controls->Add(this->Lewo);
			this->Controls->Add(this->Prawo);
			this->Controls->Add(this->Background);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"First_One";
			this->Text = L"Snake";
			this->Load += gcnew System::EventHandler(this, &First_One::First_One_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
				 // plansza jako pole do gry
		private: System::Void First_One_Load(System::Object^  sender, System::EventArgs^  e)
		{

		}

		private: System::Void Lewo_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			//if (Timer_lewo->Enabled)
			//	Timer_lewo->Enabled = false;
			//else
				Timer_lewo->Enabled = true;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = false;
		}
		private: System::Void Prawo_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//if (Timer_prawo->Enabled)
			//	Timer_prawo->Enabled = false;
			//else
				Timer_prawo->Enabled = true;
				Timer_lewo ->Enabled = false;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = false;
		}
		private: System::Void Gora_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			//if (Timer_gora->Enabled)
			//	Timer_gora->Enabled = false;
			//else
				Timer_gora->Enabled = true;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = false;
				Timer_lewo ->Enabled = false;
		}
		private: System::Void Dol_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			//if (Timer_dol->Enabled)
			//	Timer_dol->Enabled = false;
			//else
				Timer_dol->Enabled = true;
				Timer_gora->Enabled = false;
				Timer_prawo->Enabled = false;
				Timer_lewo->Enabled = false;
		}
		private: System::Void Timer_lewo_Tick(System::Object^  sender, System::EventArgs^  e)
		{
			int x = Head->Location.X;
			int y = Head->Location.Y;
			x -= 10;
			Head->Location = System::Drawing::Point(x, y);
		}
		private: System::Void Timer_prawo_Tick(System::Object^  sender, System::EventArgs^  e)
		{
			int x = Head->Location.X;
			int y = Head->Location.Y;
			x += 10;
			Head->Location = System::Drawing::Point(x, y);
		}
		private: System::Void Timer_gora_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			int x = Head->Location.X;
			int y = Head->Location.Y;
			y -= 10;
			Head->Location = System::Drawing::Point(x, y);
		}
		private: System::Void Timer_dol_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
			int x = Head->Location.X;
			int y = Head->Location.Y;
			y += 10;
			Head->Location = System::Drawing::Point(x, y);
		}
		private: System::Void Stop_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Timer_dol->Enabled = false;
			Timer_gora->Enabled = false;
			Timer_prawo->Enabled = false;
			Timer_lewo->Enabled = false;
		}
};
}
