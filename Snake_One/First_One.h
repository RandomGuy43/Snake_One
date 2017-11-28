#pragma once

#include <iostream>
#include <conio.h>
#include <string.h>
//#include "waz.h"

namespace SnakeOne 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;


	waz w;
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
	private: System::Windows::Forms::Timer^  Timer_left;
	private: System::Windows::Forms::Timer^  Timer_right;
	private: System::Windows::Forms::PictureBox^  Background;

	private: System::Windows::Forms::PictureBox^  Head;
	private: System::Windows::Forms::PictureBox^  Segment1;
	private: System::Windows::Forms::PictureBox^  Tail;





	private: System::Windows::Forms::Timer^  Timer_up;
	private: System::Windows::Forms::Timer^  Timer_down;
	private: System::Windows::Forms::PictureBox^  StatusBarPic;
	private: System::Windows::Forms::PictureBox^  Apple;




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
			this->Timer_left = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer_right = (gcnew System::Windows::Forms::Timer(this->components));
			this->Background = (gcnew System::Windows::Forms::PictureBox());
			this->Head = (gcnew System::Windows::Forms::PictureBox());
			this->Segment1 = (gcnew System::Windows::Forms::PictureBox());
			this->Tail = (gcnew System::Windows::Forms::PictureBox());
			this->Timer_up = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer_down = (gcnew System::Windows::Forms::Timer(this->components));
			this->StatusBarPic = (gcnew System::Windows::Forms::PictureBox());
			this->Apple = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tail))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatusBarPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->BeginInit();
			this->SuspendLayout();
			// 
			// Timer_left
			// 
			this->Timer_left->Interval = 200;
			this->Timer_left->Tick += gcnew System::EventHandler(this, &First_One::Timer_left_Tick);
			// 
			// Timer_right
			// 
			this->Timer_right->Interval = 200;
			this->Timer_right->Tick += gcnew System::EventHandler(this, &First_One::Timer_right_Tick);
			// 
			// Background
			// 
			this->Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Background.Image")));
			this->Background->Location = System::Drawing::Point(-1, 0);
			this->Background->Margin = System::Windows::Forms::Padding(0);
			this->Background->Name = L"Background";
			this->Background->Size = System::Drawing::Size(999, 615);
			this->Background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Background->TabIndex = 21;
			this->Background->TabStop = false;
			this->Background->Click += gcnew System::EventHandler(this, &First_One::Background_Click);
			// 
			// Head
			// 
			this->Head->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Head.BackgroundImage")));
			this->Head->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Head.Image")));
			this->Head->Location = System::Drawing::Point(463, 185);
			this->Head->Margin = System::Windows::Forms::Padding(0);
			this->Head->Name = L"Head";
			this->Head->Size = System::Drawing::Size(30, 30);
			this->Head->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Head->TabIndex = 31;
			this->Head->TabStop = false;
			// 
			// Segment1
			// 
			this->Segment1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment1.BackgroundImage")));
			this->Segment1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Segment1.Image")));
			this->Segment1->Location = System::Drawing::Point(503, 185);
			this->Segment1->Margin = System::Windows::Forms::Padding(0);
			this->Segment1->Name = L"Segment1";
			this->Segment1->Size = System::Drawing::Size(39, 30);
			this->Segment1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Segment1->TabIndex = 32;
			this->Segment1->TabStop = false;
			// 
			// Tail
			// 
			this->Tail->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tail.BackgroundImage")));
			this->Tail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tail.Image")));
			this->Tail->Location = System::Drawing::Point(555, 185);
			this->Tail->Margin = System::Windows::Forms::Padding(0);
			this->Tail->Name = L"Tail";
			this->Tail->Size = System::Drawing::Size(34, 30);
			this->Tail->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Tail->TabIndex = 33;
			this->Tail->TabStop = false;
			// 
			// Timer_up
			// 
			this->Timer_up->Interval = 200;
			this->Timer_up->Tick += gcnew System::EventHandler(this, &First_One::Timer_up_Tick);
			// 
			// Timer_down
			// 
			this->Timer_down->Interval = 200;
			this->Timer_down->Tick += gcnew System::EventHandler(this, &First_One::Timer_down_Tick);
			// 
			// StatusBarPic
			// 
			this->StatusBarPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StatusBarPic.Image")));
			this->StatusBarPic->Location = System::Drawing::Point(0, 615);
			this->StatusBarPic->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->StatusBarPic->Name = L"StatusBarPic";
			this->StatusBarPic->Size = System::Drawing::Size(1000, 62);
			this->StatusBarPic->TabIndex = 39;
			this->StatusBarPic->TabStop = false;
			// 
			// Apple
			// 
			this->Apple->BackColor = System::Drawing::Color::Transparent;
			this->Apple->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Apple.BackgroundImage")));
			this->Apple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Apple.Image")));
			this->Apple->Location = System::Drawing::Point(311, 256);
			this->Apple->Margin = System::Windows::Forms::Padding(0);
			this->Apple->Name = L"Apple";
			this->Apple->Size = System::Drawing::Size(30, 35);
			this->Apple->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Apple->TabIndex = 35;
			this->Apple->TabStop = false;
			// 
			// First_One
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1000, 678);
			this->Controls->Add(this->StatusBarPic);
			this->Controls->Add(this->Apple);
			this->Controls->Add(this->Tail);
			this->Controls->Add(this->Segment1);
			this->Controls->Add(this->Head);
			this->Controls->Add(this->Background);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"First_One";
			this->Text = L"SnakeOne";
			this->Load += gcnew System::EventHandler(this, &First_One::First_One_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &First_One::First_One_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Head))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Segment1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tail))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatusBarPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apple))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion Zawartosc formy

#pragma region Movement Keys

	//	// nie działa
	//private: void First_One_Head_Position(System::Object^  sender, System::EventArgs^  e)
	//{
	//	StatusBar->Panels[0]->Text = System::Convert::ToString(Head->Location.X);
	//}

	private: void First_One_KeyDown(System::Object^, System::Windows::Forms::KeyEventArgs^ e)
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

		if (e->KeyCode==Keys::Right)
		{
			Timer_left->Enabled = false;
			Timer_up->Enabled = false;
			Timer_down->Enabled = false;
			Timer_right->Enabled = true;
		}
		else if (e->KeyCode==Keys::Left)
		{
			Timer_left->Enabled = true;
			Timer_up->Enabled = false;
			Timer_down->Enabled = false;
			Timer_right->Enabled = false;
		}
		else if (e->KeyCode==Keys::Up)
		{
			Timer_left->Enabled = false;
			Timer_up->Enabled = true;
			Timer_down->Enabled = false;
			Timer_right->Enabled = false;
		}
		else if (e->KeyCode==Keys::Down)
		{
			Timer_left->Enabled = false;
			Timer_up->Enabled = false;
			Timer_down->Enabled = true;
			Timer_right->Enabled = false;
		}
		// pauzowanie, docelowo zabronione - możliwe jedynie wyjście z poziomu?
		else if (e->KeyCode==Keys::Space)
		{
			Timer_left->Enabled = false;
			Timer_up->Enabled = false;
			Timer_down->Enabled = false;
			Timer_right->Enabled = false;
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
	private: System::Void Timer_left_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int x = Head->Location.X;
		int y = Head->Location.Y;
		x -= 10;
		Head->Location = System::Drawing::Point(x, y);
	}
	private: System::Void Timer_right_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int x = Head->Location.X;
		int y = Head->Location.Y;
		x += 10;
		Head->Location = System::Drawing::Point(x, y);
	}
	private: System::Void Timer_up_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int x = Head->Location.X;
		int y = Head->Location.Y;
		y -= 10;
		Head->Location = System::Drawing::Point(x, y);
	}
	private: System::Void Timer_down_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int x = Head->Location.X;
		int y = Head->Location.Y;
		y += 10;
		Head->Location = System::Drawing::Point(x, y);
	}
#pragma endregion Timery kierunkowe
private: System::Void Background_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
