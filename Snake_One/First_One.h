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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~First_One()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  face;
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
			this->face = (gcnew System::Windows::Forms::PictureBox());
			this->Prawo = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Lewo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->face))->BeginInit();
			this->SuspendLayout();
			// 
			// face
			// 
			this->face->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"face.Image")));
			this->face->Location = System::Drawing::Point(218, 12);
			this->face->Name = L"face";
			this->face->Size = System::Drawing::Size(138, 134);
			this->face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->face->TabIndex = 21;
			this->face->TabStop = false;
			this->face->Click += gcnew System::EventHandler(this, &First_One::picBox_Click);
			// 
			// Prawo
			// 
			this->Prawo->Location = System::Drawing::Point(304, 182);
			this->Prawo->Name = L"Prawo";
			this->Prawo->Size = System::Drawing::Size(75, 23);
			this->Prawo->TabIndex = 26;
			this->Prawo->Text = L"Prawo";
			this->Prawo->UseVisualStyleBackColor = true;
			this->Prawo->Click += gcnew System::EventHandler(this, &First_One::Prawo_Click);
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
			// Lewo
			// 
			this->Lewo->Location = System::Drawing::Point(218, 182);
			this->Lewo->Name = L"Lewo";
			this->Lewo->Size = System::Drawing::Size(75, 23);
			this->Lewo->TabIndex = 27;
			this->Lewo->Text = L"Lewo";
			this->Lewo->UseVisualStyleBackColor = true;
			this->Lewo->Click += gcnew System::EventHandler(this, &First_One::Lewo_Click);
			// 
			// First_One
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(596, 299);
			this->Controls->Add(this->Lewo);
			this->Controls->Add(this->Prawo);
			this->Controls->Add(this->face);
			this->MaximizeBox = false;
			this->Name = L"First_One";
			this->Text = L"First_One";
			this->Load += gcnew System::EventHandler(this, &First_One::First_One_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->face))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
				 // plansza jako pole do gry
		private: System::Void First_One_Load(System::Object^  sender, System::EventArgs^  e)
		{

		}

		private: System::Void Lewo_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (timer1->Enabled)
				timer1->Enabled = false;
			else
				timer1->Enabled = true;
		}
		private: System::Void Prawo_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (timer2->Enabled)
				timer2->Enabled = false;
			else
				timer2->Enabled = true;
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
