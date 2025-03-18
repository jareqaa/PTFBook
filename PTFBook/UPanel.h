#pragma once
#include "UControl.h"
#include "AboutBox.h"
#include <msclr/marshal_cppstd.h>

namespace PTFBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UPanel
	/// </summary>
	public ref class UPanel : public System::Windows::Forms::Form
	{
	public:
		UPanel(void)
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
		~UPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int ind = 0;
	private: TControl* ctl = new TControl;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ спарвкаToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->спарвкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 369);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UPanel::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 353);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ФИО";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(312, 369);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(270, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &UPanel::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(309, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер телефона";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(606, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 4;
			this->button1->Text = L"добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(687, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"найти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(794, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UPanel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(794, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(794, 126);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UPanel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(794, 155);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"изменить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &UPanel::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 27);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(750, 290);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UPanel::listBox1_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->спарвкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(908, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &UPanel::выходToolStripMenuItem_Click);
			// 
			// спарвкаToolStripMenuItem
			// 
			this->спарвкаToolStripMenuItem->Name = L"спарвкаToolStripMenuItem";
			this->спарвкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->спарвкаToolStripMenuItem->Text = L"Спарвка";
			this->спарвкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &UPanel::спарвкаToolStripMenuItem_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(794, 97);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"загрузить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &UPanel::button7_Click);
			// 
			// UPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(908, 439);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UPanel";
			this->Text = L"Телефонная книга";
			this->Load += gcnew System::EventHandler(this, &UPanel::UPanel_Load);
			this->Click += gcnew System::EventHandler(this, &UPanel::UPanel_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// кнопка выход
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   // обновление отображаемого списка записей в телефонной книге
	private: System::Void updateListBox() {
		listBox1->Items->Clear();
		textBox1->Text = "";
		textBox2->Text = "";

		ind = 0;

		for (int i = 0; i < ctl->count(); i++)
		{
			listBox1->Items->Add(gcnew System::String(ctl->getStr(i).c_str()));
		}
	}

		   // обработка нажатия на кнопку справка
	private: System::Void спарвкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AboutBox^ aboutBox = gcnew AboutBox();
		aboutBox->Show();	// открытие формы справки
	}

		   // добавление абонента в телефонную книгу
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// получение данных об абоненте
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string phone_number = msclr::interop::marshal_as<std::string>(textBox2->Text);

		// добавление записи
		try
		{
			ctl->add(TAbonent(name, phone_number));
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}

		updateListBox();
	}

		   // очитска телефонной книги
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ctl->clear();
		updateListBox();
	}

		   // удаление элемента
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ctl->deleteRec(listBox1->SelectedIndex);
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}

		updateListBox();
	}

		   // сохранение телефонной книги в файл
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ctl->saveToFile();
			textBox1->Text = "";
			textBox2->Text = "";
			MessageBox::Show("Data has been saved", "Success", MessageBoxButtons::OK);
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}
	}

		   // изменение записи
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// получение данных об абоненте
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string phone_number = msclr::interop::marshal_as<std::string>(textBox2->Text);

		try
		{
			ctl->deleteRec(listBox1->SelectedIndex);
			ctl->add(TAbonent(name, phone_number));
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}

		updateListBox();
	}

		   // поиск записи
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string phone_number = msclr::interop::marshal_as<std::string>(textBox2->Text);

		// проверяем не был ли достигнут конец списка записей
		if (ind >= listBox1->Items->Count && ind != 0)
		{
			MessageBox::Show("Error! End of list...\n", "Error!", MessageBoxButtons::OK);
			ind = 0;
			listBox1->SelectedIndex = -1;
			return;
		}

		// првоерка на пустой ввод
		if (name.empty() && phone_number.empty())
		{
			MessageBox::Show("Error! Wrong input...\n", "Error!", MessageBoxButtons::OK);
			ind = 0;
			return;
		}

		try
		{
			// поиск по номеру телефона и имени
			if (!name.empty() && !phone_number.empty())
			{
				int index = ctl->find(TAbonent(name, phone_number));
				if (listBox1->Items->Count == 1)
				{
					ind = 2;
				}
				else
				{
					ind = listBox1->Items->Count - 1;
				}
				listBox1->SelectedIndex = index;
			}
			// поиск только по номеру телефона
			else if (name.empty() && !phone_number.empty())
			{
				int a = ind;
				int index = ctl->find(phone_number, a);
				ind = index + 1;
				listBox1->SelectedIndex = index;
			}
			// поиск только по имени
			else
			{
				int a = ind;
				int index = ctl->find(name, a);
				ind = index + 1;
				listBox1->SelectedIndex = index;
			}
		}
		catch (std::string& err)
		{
			if (ind == 0)
			{
				MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
				listBox1->SelectedIndex = -1;
				textBox1->Text = "";
				textBox2->Text = "";
			}
			else
			{
				MessageBox::Show("Error! End of list...\n", "Error!", MessageBoxButtons::OK);
				ind = 0;
				listBox1->SelectedIndex = -1;
			}
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ind = 0;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ind = 0;
	}

		   // загрузка формы
	private: System::Void UPanel_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ctl->readFromFile();
			updateListBox();
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}
	}

		   // изменение выделения записи
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedIndex < 0)
		{
			textBox1->Text = "";
			textBox2->Text = "";
			return;
		}
		if (ind == 0)
		{
			TAbonent rec = ctl->get(listBox1->SelectedIndex);
			textBox1->Text = gcnew String(rec.get().name.c_str());
			textBox2->Text = gcnew String(rec.get().phone_number.c_str());
		}
	}
	private: System::Void UPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		ind = 0;
		listBox1->SelectedIndex = -1;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ctl->readFromFile();
			updateListBox();
			MessageBox::Show("Data has been loaded", "Success", MessageBoxButtons::OK);
		}
		catch (std::string& err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error!", MessageBoxButtons::OK);
		}
	}
	};
}
