#pragma once

namespace PTFBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AboutBox
	/// </summary>
	public ref class AboutBox : public System::Windows::Forms::Form
	{
	public:
		AboutBox(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AboutBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������ ���������� ��������� ������� ������ ��������� ���������.\r\n� ��� ���� �����"
				L"������ �������� ������, �������� ������, ����� ������, ������� ������,\r\n��������"
				L"� ����� � ����, ������� ����� �� �����.";
			// 
			// AboutBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 345);
			this->Controls->Add(this->label1);
			this->Name = L"AboutBox";
			this->Text = L"�������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
