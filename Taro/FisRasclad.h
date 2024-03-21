#pragma once
#include "Rasclads.h"

namespace Taro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Сводка для FisRasclad
	/// </summary>
	public ref class FisRasclad : public System::Windows::Forms::Form
	{
	public:
		FisRasclad(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FisRasclad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Rasclad;
	protected:
	private: System::Windows::Forms::Button^ Karts;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FisRasclad::typeid));
			this->Rasclad = (gcnew System::Windows::Forms::Button());
			this->Karts = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Rasclad
			// 
			this->Rasclad->BackColor = System::Drawing::Color::Transparent;
			this->Rasclad->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Rasclad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Rasclad->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Rasclad->Location = System::Drawing::Point(154, 158);
			this->Rasclad->Name = L"Rasclad";
			this->Rasclad->Size = System::Drawing::Size(219, 82);
			this->Rasclad->TabIndex = 1;
			this->Rasclad->Text = L"Расклады";
			this->Rasclad->UseVisualStyleBackColor = false;
			this->Rasclad->Click += gcnew System::EventHandler(this, &FisRasclad::Rasclad_Click);
			// 
			// Karts
			// 
			this->Karts->BackColor = System::Drawing::Color::Transparent;
			this->Karts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Karts->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Karts->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Karts->ForeColor = System::Drawing::SystemColors::Control;
			this->Karts->Location = System::Drawing::Point(466, 302);
			this->Karts->Name = L"Karts";
			this->Karts->Size = System::Drawing::Size(219, 82);
			this->Karts->TabIndex = 2;
			this->Karts->Text = L"Карты";
			this->Karts->UseVisualStyleBackColor = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьсяToolStripMenuItem,
					this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(813, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяToolStripMenuItem
			// 
			this->вернутьсяToolStripMenuItem->Name = L"вернутьсяToolStripMenuItem";
			this->вернутьсяToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->вернутьсяToolStripMenuItem->Text = L"Вернуться";
			this->вернутьсяToolStripMenuItem->Click += gcnew System::EventHandler(this, &FisRasclad::вернутьсяToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// FisRasclad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(813, 514);
			this->Controls->Add(this->Karts);
			this->Controls->Add(this->Rasclad);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FisRasclad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FisRasclad";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FisRasclad::FisRasclad_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FisRasclad::FisRasclad_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FisRasclad_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void FisRasclad_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
	{
		
	}
	private: System::Void вернутьсяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Owner->Show();
		this->Close();
	}
private: System::Void Rasclad_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Rasclads^ Rs = gcnew Rasclads();
	Rs->Owner = this;
	Rs->Show();
	this->Hide();
}
};

	
}
