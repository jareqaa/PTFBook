#pragma once

namespace PTFBook {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для AboutBox
    /// </summary>
    public ref class AboutBox : public System::Windows::Forms::Form
    {
    public:
        AboutBox(void)
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
            this->label1->Text = L"Данное приложение позволяет хранить номера телефонов абонентов.\r\nВ нем есть возмо"
                L"жность добавить запись, изменить запись, найти запись, удалить запись,\r\nсохранит"
                L"ь книгу в файл, считать книгу из файла.";
            // 
            // AboutBox
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(505, 345);
            this->Controls->Add(this->label1);
            this->Name = L"AboutBox";
            this->Text = L"Справка";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    };
}