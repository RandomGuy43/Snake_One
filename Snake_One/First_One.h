#pragma once

#include <iostream>
#include <conio.h>

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

#pragma region Form
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

	private: System::Windows::Forms::Timer^  Timer_lewo;
	private: System::Windows::Forms::Timer^  Timer_prawo;
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
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
#pragma endregion Klasa formy

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(First_One::typeid));
			this->Timer_lewo = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer_prawo = (gcnew System::Windows::Forms::Timer(this->components));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->BeginInit();
			this->SuspendLayout();
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(465, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(465, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(478, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
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
			this->Score->Location = System::Drawing::Point(15, 13);
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
			this->Result->Location = System::Drawing::Point(60, 13);
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
			// First_One
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(600, 299);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Apple);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Segment2);
			this->Controls->Add(this->Segment1);
			this->Controls->Add(this->Head);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Background);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"First_One";
			this->Text = L"Snake";
			this->Load += gcnew System::EventHandler(this, &First_One::First_One_Load);

			// do sterowania klawiszami
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &First_One::First_One_KeyDown);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion Zawartosc formy

		//
		// TODO: Losowanie położenia jabłka, gdy zostanie ono dotknięte odpowiednią stroną głowy węża
		//
		// TODO: Akcja przy dotknięciu głową węża o krawędź ściany (czy potrzebny osobny png ze ścianą?)
		//
		// TODO: Akcja przy dotknięciu głową węża o któryś z segmentów
		//

#pragma region Movement Keys
					//
					// sterowanie za pomoca klawiszy
					// TODO: Sterowanie wszystkimi segmentami węża (połączenie ich w jedną całość)	
					//
		private : void First_One_KeyDown(System::Object^, System::Windows::Forms::KeyEventArgs^ e)
		{
			int x = Head->Location.X;
			int y = Head->Location.Y;

						// ruch manualny

			//if (e->KeyCode == Keys::Right) x += 10;
			//else if (e->KeyCode == Keys::Left) x -= 10;
			//else if (e->KeyCode == Keys::Up) y -= 10;
			//else if (e->KeyCode == Keys::Down) y += 10;
			//
			//Head->Location = System::Drawing::Point(x,y);

			if (e->KeyCode == Keys::Right)
			{
				Timer_lewo->Enabled = false;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = true;
			}
			else if (e->KeyCode == Keys::Left)
			{
				Timer_lewo->Enabled = true;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = false;
			}
			else if (e->KeyCode == Keys::Up)
			{
				Timer_lewo->Enabled = false;
				Timer_gora->Enabled = true;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = false;
			}
			else if (e->KeyCode == Keys::Down)
			{
				Timer_lewo->Enabled = false;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = true;
				Timer_prawo->Enabled = false;
			}
						// pauzowanie, docelowo zabronione - możliwe jedynie wyjście z poziomu?
			else if (e->KeyCode == Keys::Space)
			{
				Timer_lewo->Enabled = false;
				Timer_gora->Enabled = false;
				Timer_dol->Enabled = false;
				Timer_prawo->Enabled = false;
			}
		}
#pragma endregion Sterowanie strzalkami		

				 // plansza jako pole do gry
		private: System::Void First_One_Load(System::Object^  sender, System::EventArgs^  e)
		{
			// TODO: Na start wyświetlanie ekranu startowego, potem przechodzenie na pierwszy poziom.
			// Po każdym poziomie informacja o przejściu na nowy i odliczanie do startu poziomu.
			// Docelowo trzy poziomy z różną szybkością poruszania się węża i dodatkowymi przeszkodami?
		}

#pragma region Timery
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
#pragma endregion Timery kierunkowe
};
}
