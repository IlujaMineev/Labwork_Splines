#pragma once
#include "Spline.h"

namespace Splines {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  d_l;
	private: System::Windows::Forms::TextBox^  d_in;
	private: System::Windows::Forms::ComboBox^  cb1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  cb2;
	private: System::Windows::Forms::TextBox^  d2_in;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::TextBox^  d_in1;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  cb3;
	private: System::Windows::Forms::DataGridView^  Tab1;









	private: System::Windows::Forms::TextBox^  d_in2;












	private: System::Windows::Forms::TextBox^  dp_in;

	private: System::Windows::Forms::TextBox^  df_in;

	private: ZedGraph::ZedGraphControl^  zedGraphControl4;
	private: ZedGraph::ZedGraphControl^  zedGraphControl5;
	private: ZedGraph::ZedGraphControl^  zedGraphControl6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl7;

	private: System::Windows::Forms::TextBox^  dp_in2;







	private: ZedGraph::ZedGraphControl^  zedGraphControl8;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  bi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ci;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  di;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;



























	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->d_in1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cb3 = (gcnew System::Windows::Forms::ComboBox());
			this->Tab1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ci = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->di = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->d_in2 = (gcnew System::Windows::Forms::TextBox());
			this->dp_in = (gcnew System::Windows::Forms::TextBox());
			this->df_in = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl6 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl7 = (gcnew ZedGraph::ZedGraphControl());
			this->dp_in2 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl8 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl3->Location = System::Drawing::Point(6, 19);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl3->TabIndex = 0;
			// 
			// d_in1
			// 
			this->d_in1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->d_in1->Location = System::Drawing::Point(168, 57);
			this->d_in1->Name = L"d_in1";
			this->d_in1->Size = System::Drawing::Size(152, 20);
			this->d_in1->TabIndex = 1;
			this->d_in1->Text = L"100";
			this->d_in1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(168, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ïîñ÷èòàòü";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// cb3
			// 
			this->cb3->Cursor = System::Windows::Forms::Cursors::Default;
			this->cb3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->cb3->FormattingEnabled = true;
			this->cb3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Òåñòîâàÿ", L"Îñíîâíàÿ 1 (ÑÂÏ)", L"Îñíîâíàÿ 1 (ÅÃÓ)",
					L"Îñíîâíàÿ 2 (ÑÂÏ)", L"Îñíîâíàÿ 2 (ÅÃÓ)", L"Îñíîâíàÿ 3 (ÑÂÏ)", L"Îñíîâíàÿ 3 (ÅÃÓ)"
			});
			this->cb3->Location = System::Drawing::Point(6, 19);
			this->cb3->Name = L"cb3";
			this->cb3->Size = System::Drawing::Size(314, 21);
			this->cb3->TabIndex = 4;
			this->cb3->Text = L"Âûáåðèòå çàäà÷ó";
			// 
			// Tab1
			// 
			this->Tab1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Tab1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->Tab1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->Tab1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->i, this->xi_1, this->xi,
					this->ai, this->bi, this->ci, this->di
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Tab1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Tab1->Location = System::Drawing::Point(5, 234);
			this->Tab1->Name = L"Tab1";
			this->Tab1->RowHeadersVisible = false;
			this->Tab1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->Tab1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->Tab1->Size = System::Drawing::Size(327, 226);
			this->Tab1->TabIndex = 6;
			this->Tab1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 36;
			// 
			// xi_1
			// 
			this->xi_1->HeaderText = L"xi-1";
			this->xi_1->Name = L"xi_1";
			this->xi_1->Width = 48;
			// 
			// xi
			// 
			this->xi->HeaderText = L"xi";
			this->xi->Name = L"xi";
			this->xi->Width = 48;
			// 
			// ai
			// 
			this->ai->HeaderText = L"ai";
			this->ai->Name = L"ai";
			this->ai->Width = 48;
			// 
			// bi
			// 
			this->bi->HeaderText = L"bi";
			this->bi->Name = L"bi";
			this->bi->Width = 48;
			// 
			// ci
			// 
			this->ci->HeaderText = L"ci";
			this->ci->Name = L"ci";
			this->ci->Width = 48;
			// 
			// di
			// 
			this->di->HeaderText = L"di";
			this->di->Name = L"di";
			this->di->Width = 48;
			// 
			// d_in2
			// 
			this->d_in2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->d_in2->Location = System::Drawing::Point(168, 78);
			this->d_in2->Name = L"d_in2";
			this->d_in2->Size = System::Drawing::Size(152, 20);
			this->d_in2->TabIndex = 8;
			this->d_in2->Text = L"1000";
			this->d_in2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dp_in
			// 
			this->dp_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->dp_in->Location = System::Drawing::Point(168, 132);
			this->dp_in->Name = L"dp_in";
			this->dp_in->Size = System::Drawing::Size(152, 20);
			this->dp_in->TabIndex = 14;
			this->dp_in->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->dp_in->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// df_in
			// 
			this->df_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->df_in->Location = System::Drawing::Point(168, 111);
			this->df_in->Name = L"df_in";
			this->df_in->Size = System::Drawing::Size(152, 20);
			this->df_in->TabIndex = 15;
			this->df_in->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl4->Location = System::Drawing::Point(313, 19);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl4->TabIndex = 16;
			this->zedGraphControl4->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl4_Load);
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl5->Location = System::Drawing::Point(6, 19);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl5->TabIndex = 17;
			// 
			// zedGraphControl6
			// 
			this->zedGraphControl6->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl6->Location = System::Drawing::Point(620, 19);
			this->zedGraphControl6->Name = L"zedGraphControl6";
			this->zedGraphControl6->ScrollGrace = 0;
			this->zedGraphControl6->ScrollMaxX = 0;
			this->zedGraphControl6->ScrollMaxY = 0;
			this->zedGraphControl6->ScrollMaxY2 = 0;
			this->zedGraphControl6->ScrollMinX = 0;
			this->zedGraphControl6->ScrollMinY = 0;
			this->zedGraphControl6->ScrollMinY2 = 0;
			this->zedGraphControl6->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl6->TabIndex = 18;
			this->zedGraphControl6->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl6_Load);
			// 
			// zedGraphControl7
			// 
			this->zedGraphControl7->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl7->Location = System::Drawing::Point(313, 19);
			this->zedGraphControl7->Name = L"zedGraphControl7";
			this->zedGraphControl7->ScrollGrace = 0;
			this->zedGraphControl7->ScrollMaxX = 0;
			this->zedGraphControl7->ScrollMaxY = 0;
			this->zedGraphControl7->ScrollMaxY2 = 0;
			this->zedGraphControl7->ScrollMinX = 0;
			this->zedGraphControl7->ScrollMinY = 0;
			this->zedGraphControl7->ScrollMinY2 = 0;
			this->zedGraphControl7->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl7->TabIndex = 19;
			this->zedGraphControl7->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl7_Load);
			// 
			// dp_in2
			// 
			this->dp_in2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->dp_in2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->dp_in2->Location = System::Drawing::Point(168, 153);
			this->dp_in2->Name = L"dp_in2";
			this->dp_in2->ReadOnly = true;
			this->dp_in2->Size = System::Drawing::Size(152, 20);
			this->dp_in2->TabIndex = 21;
			this->dp_in2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// zedGraphControl8
			// 
			this->zedGraphControl8->BackColor = System::Drawing::Color::DarkOrchid;
			this->zedGraphControl8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zedGraphControl8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl8->Location = System::Drawing::Point(620, 19);
			this->zedGraphControl8->Name = L"zedGraphControl8";
			this->zedGraphControl8->ScrollGrace = 0;
			this->zedGraphControl8->ScrollMaxX = 0;
			this->zedGraphControl8->ScrollMaxY = 0;
			this->zedGraphControl8->ScrollMaxY2 = 0;
			this->zedGraphControl8->ScrollMinX = 0;
			this->zedGraphControl8->ScrollMinY = 0;
			this->zedGraphControl8->ScrollMinY2 = 0;
			this->zedGraphControl8->Size = System::Drawing::Size(301, 201);
			this->zedGraphControl8->TabIndex = 22;
			this->zedGraphControl8->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl8_Load);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->dp_in2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->d_in1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->cb3);
			this->groupBox1->Controls->Add(this->dp_in);
			this->groupBox1->Controls->Add(this->df_in);
			this->groupBox1->Controls->Add(this->d_in2);
			this->groupBox1->Location = System::Drawing::Point(6, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 226);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàðàìåòðû";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Ïîãðåøíîñòü II ïðîèçâîäíîé:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Ïîãðåøíîñòü I ïðîèçâîäíîé:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Ïîãðåøíîñòü ñïëàéíà:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Êîíòðîëüíàÿ ñåòêà:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Îñíîâíàÿ ñåòêà:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->zedGraphControl3);
			this->groupBox2->Controls->Add(this->zedGraphControl4);
			this->groupBox2->Controls->Add(this->zedGraphControl6);
			this->groupBox2->Location = System::Drawing::Point(338, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(927, 226);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ãðàôèêè";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->zedGraphControl5);
			this->groupBox3->Controls->Add(this->zedGraphControl7);
			this->groupBox3->Controls->Add(this->zedGraphControl8);
			this->groupBox3->Location = System::Drawing::Point(338, 234);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(927, 226);
			this->groupBox3->TabIndex = 25;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ãðàôèêè ïîãðåøíîñòåé";
			// 
			// MyForm
			// 
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1272, 466);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Tab1);
			this->Name = L"MyForm";
			this->Text = L"A";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void d2_in_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		int ToT;
		if (cb3->Text == L"Òåñòîâàÿ")
			ToT = 1;
		else if (cb3->Text == L"Îñíîâíàÿ 1 (ÅÃÓ)")
			ToT = 2;
		else if (cb3->Text == L"Îñíîâíàÿ 1 (ÑÂÏ)")
			ToT = 3;
		else if (cb3->Text == L"Îñíîâíàÿ 2 (ÅÃÓ)")
			ToT = 4;
		else if (cb3->Text == L"Îñíîâíàÿ 2 (ÑÂÏ)")
			ToT = 5;
		else if (cb3->Text == L"Îñíîâíàÿ 3 (ÅÃÓ)")
			ToT = 6;
		else if (cb3->Text == L"Îñíîâíàÿ 3 (ÑÂÏ)")
			ToT = 7;

		int flag = 0;
		int d = Convert::ToInt32(d_in1->Text);
		int d_add = Convert::ToInt32(d_in2->Text);

		if (d_add < d) { d_add = d; }

		if (ToT == 1) {

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(-1, 1, d);
			x_hs = LS(-1, 1, d_add);

			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
			
			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncT(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = Ipr(-1);
			dk[0] = 6.0;
			c[0] = IIpr(-1);
			c[d] = IIpr(1);

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// ïðîãîíêà
			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = 0.0;
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}

			//

			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}


			double* sol1 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((j < d_add + 1) && (x_hs[j] <= x[i]) ) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncT(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			//
			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncT(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncT(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncT(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);
			//

			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];


			LineItem^ curve = panel->AddCurve("Function", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("Spline", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->Size = 3;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Line->Width = 2;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;
			curve->Symbol->IsAntiAlias = true;
			curve->Line->GradientFill->Color = Color::Red;

			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;
			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->XAxis->Scale->Min = -1.5;
			panel->XAxis->Scale->Max = 1.5;
			panel->YAxis->Scale->Max = 2.5;
			panel->YAxis->Scale->Min = -0.5;
			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÐÅØÅÍÈÅ";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = -1.5;
			panel1->XAxis->Scale->Max = 1.5;
			panel1->YAxis->Scale->Max = 2.5;
			panel1->YAxis->Scale->Min = -0.5;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÐÅØÅÍÈÅ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

		}
		else if (ToT == 2) {
			//// 2nd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);


			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif

			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncI(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprI(2);
			dk[0] = IIIprI(2);
			c[0] = 0.0;
			c[d] = 0.0;

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = 0.0;
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}

			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}

			//sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);
			sol3[d_add] = 0.0;
			sol3[1] = 0.0;


			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncI(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprI(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprI(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncI(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncI(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncI(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprI(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprI(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprI(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprI(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprI(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprI(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 0.98;
			panel->YAxis->Scale->Min = 0.84;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 0.18;
			panel2->YAxis->Scale->Min = 0;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 0;
			panel3->YAxis->Scale->Min = -0.3;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}
		else if (ToT == 3) {
			//// 3rd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);



			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif



			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncI(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprI(2);
			dk[0] = IIIprI(2);
			c[0] = IIprI(2);
			c[d] = IIprI(4);

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = c[d];//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = IIprI(4);
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}


			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);

			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncI(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprI(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprI(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncI(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncI(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncI(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprI(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprI(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprI(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprI(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprI(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprI(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 0.98;
			panel->YAxis->Scale->Min = 0.84;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 0.18;
			panel2->YAxis->Scale->Min = 0;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 0;
			panel3->YAxis->Scale->Min = -0.3;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}

		else if (ToT == 4) {
			//// 2nd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);

			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif

			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncII(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprII(2);
			dk[0] = IIIprII(2);
			c[0] = 0.0;
			c[d] = 0.0;

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = 0.0;
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}

			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}

			//sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);
			sol3[d_add] = 0.0;
			sol3[1] = 0.0;


			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncII(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprII(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprII(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncII(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncII(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncII(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprII(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprII(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprII(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprII(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprII(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprII(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 2.5;
			panel->YAxis->Scale->Min = -0.5;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 15;
			panel2->YAxis->Scale->Min = -15;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 200;
			panel3->YAxis->Scale->Min = -150;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}

		else if (ToT == 5) {
			//// 2nd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);

			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif

			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncII(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprII(2);
			dk[0] = IIIprII(2);
			c[0] = IIprII(2);
			c[d] = IIprII(4);

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = IIprII(4);
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}

			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}

			sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);


			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncII(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprII(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprII(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncII(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncII(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncII(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprII(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprII(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprII(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprII(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprII(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprII(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 2.5;
			panel->YAxis->Scale->Min = -0.5;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 15;
			panel2->YAxis->Scale->Min = -15;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 200;
			panel3->YAxis->Scale->Min = -150;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}
		else if (ToT == 6) {
			//// 2nd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);

			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif

			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncIII(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprIII(2);
			dk[0] = IIIprIII(2);
			c[0] = 0.0;
			c[d] = 0.0;

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = 0.0;
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}

			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}

			//sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);
			sol3[d_add] = 0.0;
			sol3[1] = 0.0;


			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncIII(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprIII(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprIII(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncIII(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncIII(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncIII(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprIII(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprIII(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprIII(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprIII(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprIII(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprIII(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 2.5;
			panel->YAxis->Scale->Min = -0.5;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 15;
			panel2->YAxis->Scale->Min = -15;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 200;
			panel3->YAxis->Scale->Min = -150;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}

		else if (ToT == 7) {
			//// 2nd

			// a=2 b=4 f = sqrt(x^2 - 1) / x;	

			if (Tab1->RowCount > 1)
				while (Tab1->RowCount != 1)
					Tab1->Rows->RemoveAt(0);

			double* x = new double[d]; // net

			double* x_hs = new double[d_add]; //hs-net

			x = LS(2, 4, d);
			x_hs = LS(2, 4, d_add);

			GraphPane^ panel = zedGraphControl3->GraphPane;
			panel->CurveList->Clear();
			GraphPane^ panel1 = zedGraphControl5->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			GraphPane^ panel3 = zedGraphControl6->GraphPane;
			panel3->CurveList->Clear();
			GraphPane^ panel4 = zedGraphControl7->GraphPane;
			panel4->CurveList->Clear();
			GraphPane^ panel5 = zedGraphControl8->GraphPane;
			panel5->CurveList->Clear();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl7->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl8->Invalidate();

			PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // FuncT
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // spl
			PointPairList^ f3_list = gcnew ZedGraph::PointPairList(); // dif1

			PointPairList^ f4_list = gcnew ZedGraph::PointPairList(); // I
			PointPairList^ f5_list = gcnew ZedGraph::PointPairList(); // II

			PointPairList^ f6_list = gcnew ZedGraph::PointPairList(); // I spl
			PointPairList^ f7_list = gcnew ZedGraph::PointPairList(); // II spl

			PointPairList^ f8_list = gcnew ZedGraph::PointPairList(); // I spl dif
			PointPairList^ f9_list = gcnew ZedGraph::PointPairList(); // II spl dif

			double* f = new double[d]; // vals
			for (int i = 0; i < d + 1; i++) {
				f[i] = FuncIII(x[i]);
			}

			double* a = new double[d]; // 
			double* b = new double[d]; // 
			double* c = new double[d]; // 
			double* dk = new double[d]; //

			double h = x[1] - x[0];

			b[0] = IprIII(2);
			dk[0] = IIIprIII(2);
			c[0] = IIprIII(2);
			c[d] = IIprIII(4);

			double* averDiag = new double[d];
			double* bottomDiag = new double[d];
			double* topDiag = new double[d];
			double* rightSide = new double[d];

			bottomDiag[0] = 0;
			rightSide[0] = c[0];
			averDiag[0] = 1;
			topDiag[0] = 0;

			for (int i = 1; i < d; i++) {
				//	//îñíîâíàÿ äèàãîíàëü
				averDiag[i] = 4 * h;

				//	//íèæíÿÿ äèàãîíàëü
				bottomDiag[i] = h;

				//	//âåðõíÿÿ äèàãîíàëü
				topDiag[i] = h;
			}

			for (int i = 1; i < d; i++) {
				//ïðàâàÿ ÷àñòü
				rightSide[i] = 6 * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h);
			}

			topDiag[d] = 0;
			rightSide[d] = 0;//çàäàíèå íà÷àëüíîãî çíà÷åíèÿ
			averDiag[d] = 1;
			bottomDiag[d] = 0;

			// TMA

			double m;
			for (int i = 1; i < d; i++) {
				m = bottomDiag[i] / averDiag[i - 1];
				averDiag[i] = averDiag[i] - m * topDiag[i - 1];
				rightSide[i] = rightSide[i] - m * rightSide[i - 1];
			}
			c[d] = IIprIII(4);
			for (int i = d - 1; i >= 0; i--) {
				c[i] = (rightSide[i] - topDiag[i] * c[i + 1]) / averDiag[i];
			}


			//


			for (int i = 0; i < d + 1; i++) {
				a[i] = f[i];
			}

			for (int i = 0; i < d; i++) {
				dk[i + 1] = (c[i + 1] - c[i]) / h;
				b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * (h / 3) + c[i] * (h / 6.0);
			}

			double* sol1 = new double[d_add + 1];
			double* sol2 = new double[d_add + 1];
			double* sol3 = new double[d_add + 1];

			int j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol1[j] = SPL(a[i], b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol1[d_add] = SPL(a[d], b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol2[j] = IprSPL(b[i], c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}
			sol2[d_add] = IprSPL(b[d], c[d], dk[d], x_hs[d_add], x[d]);

			j = 0;

			for (int i = 1; i < d + 1; i++) {
				while ((x_hs[j] <= x[i]) && (j < d_add + 1)) {
					sol3[j] = IIprSPL(c[i], dk[i], x_hs[j], x[i]);
					j++;
				}
			}

			sol3[d_add] = IIprSPL(c[d], dk[d], x_hs[d_add], x[d]);


			for (int i = 0; i < d_add + 1; i++) {
				f1_list->Add(x_hs[i], FuncIII(x_hs[i]));
			}

			for (int i = 0; i < d_add + 1; i++) {
				f2_list->Add(x_hs[i], sol1[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f4_list->Add(x_hs[i], IprIII(x_hs[i]));
			}


			for (int i = 0; i < d_add + 1; i++) {
				f5_list->Add(x_hs[i], IIprIII(x_hs[i]));
			}
			for (int i = 0; i < d_add + 1; i++) { // ïðîâåðêà 

				f6_list->Add(x_hs[i], sol2[i]);
			}

			for (int i = 0; i < d_add + 1; i++) {
				f7_list->Add(x_hs[i], sol3[i]);
			}

			//
			for (int i = 0; i < d + 1; i++) {
				Tab1->Rows->Add();
				Tab1->Rows[i]->Cells[0]->Value = i;
				Tab1->Rows[i]->Cells[1]->Value = x[i - 1];
				Tab1->Rows[i]->Cells[2]->Value = x[i];
				Tab1->Rows[i]->Cells[3]->Value = a[i];
				Tab1->Rows[i]->Cells[4]->Value = b[i];
				Tab1->Rows[i]->Cells[5]->Value = c[i];
				Tab1->Rows[i]->Cells[6]->Value = dk[i];
			}

			Tab1->Rows[0]->Cells[0]->Value = 0;
			Tab1->Rows[0]->Cells[1]->Value = "-";
			Tab1->Rows[0]->Cells[2]->Value = x[0];
			Tab1->Rows[0]->Cells[3]->Value = a[0];
			Tab1->Rows[0]->Cells[4]->Value = b[0];
			Tab1->Rows[0]->Cells[5]->Value = c[0];
			Tab1->Rows[0]->Cells[6]->Value = dk[0];

			double dif = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol1[i] - FuncIII(x_hs[i])) > dif)
				{
					dif = fabs(sol1[i] - FuncIII(x_hs[i]));
				}
				f3_list->Add(x_hs[i], fabs(sol1[i] - FuncIII(x_hs[i])));
			}

			df_in->Text = Convert::ToString(dif);

			double dif1 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol2[i] - IprIII(x_hs[i])) > dif1)
				{
					dif1 = fabs(sol2[i] - IprIII(x_hs[i]));
				}
				f8_list->Add(x_hs[i], fabs(sol2[i] - IprIII(x_hs[i])));
			}

			dp_in->Text = Convert::ToString(dif1);

			double dif2 = 0.0;
			for (int i = 0; i < d_add + 1; i++) {
				if (fabs(sol3[i] - IIprIII(x_hs[i])) > dif2)
				{
					dif2 = fabs(sol3[i] - IIprIII(x_hs[i]));
				}
				f9_list->Add(x_hs[i], fabs(sol3[i] - IIprIII(x_hs[i])));
			}

			dp_in2->Text = Convert::ToString(dif2);

			LineItem^ curve = panel->AddCurve("v(x)", f1_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve1 = panel->AddCurve("u(x)", f2_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve2 = panel1->AddCurve("Difference", f3_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve3 = panel2->AddCurve("Ist", f4_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve4 = panel3->AddCurve("IInd", f5_list, Color::Firebrick, SymbolType::Circle);
			LineItem^ curve5 = panel2->AddCurve("Ist Spline", f6_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve6 = panel3->AddCurve("IInd Spline", f7_list, Color::DeepSkyBlue, SymbolType::Circle);
			LineItem^ curve7 = panel4->AddCurve("Difference", f8_list, Color::ForestGreen, SymbolType::Circle);
			LineItem^ curve8 = panel5->AddCurve("Difference", f9_list, Color::ForestGreen, SymbolType::Circle);


			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->Fill->Type = FillType::Solid;

			curve1->Line->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve1->Symbol->Size = 3;
			curve->Symbol->Size = 3;
			curve1->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Type = FillType::Solid;
			curve->Symbol->IsVisible = true;
			curve->Line->IsVisible = false;
			curve->Symbol->Fill->Color = Color::Firebrick;
			curve->Symbol->IsVisible = true;
			curve1->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve->Line->Width = 2;
			curve1->Line->Width = 2;
			curve1->Line->IsSmooth = true;
			curve1->Line->IsAntiAlias = true;
			curve->Line->IsSmooth = true;
			curve->Line->IsAntiAlias = true;

			curve->Symbol->IsAntiAlias = true;
			curve1->Line->IsAntiAlias = true;

			curve2->Line->GradientFill->Color = Color::ForestGreen;
			curve2->Line->IsVisible = true;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Size = 3;
			curve2->Symbol->IsVisible = true;
			curve2->Symbol->Fill->Type = FillType::Solid;
			curve2->Symbol->Fill->Color = Color::ForestGreen;
			curve2->Line->Width = 2;
			curve2->Line->IsSmooth = true;
			curve2->Line->IsAntiAlias = true;
			curve2->Line->IsAntiAlias = true;

			curve3->Line->GradientFill->Color = Color::Firebrick;
			curve3->Line->IsVisible = true;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Size = 3;
			curve3->Symbol->IsVisible = true;
			curve3->Symbol->Fill->Type = FillType::Solid;
			curve3->Symbol->Fill->Color = Color::Firebrick;
			curve3->Line->Width = 2;
			curve3->Line->IsSmooth = true;
			curve3->Line->IsAntiAlias = true;
			curve3->Line->IsAntiAlias = true;

			curve4->Line->GradientFill->Color = Color::Firebrick;
			curve4->Line->IsVisible = true;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Size = 3;
			curve4->Symbol->IsVisible = true;
			curve4->Symbol->Fill->Type = FillType::Solid;
			curve4->Symbol->Fill->Color = Color::Firebrick;
			curve4->Line->Width = 2;
			curve4->Line->IsSmooth = true;
			curve4->Line->IsAntiAlias = true;
			curve4->Line->IsAntiAlias = true;

			curve6->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve6->Line->IsVisible = true;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Size = 3;
			curve6->Symbol->IsVisible = true;
			curve6->Symbol->Fill->Type = FillType::Solid;
			curve6->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve6->Line->Width = 2;
			curve6->Line->IsSmooth = true;
			curve6->Line->IsAntiAlias = true;
			curve6->Line->IsAntiAlias = true;

			curve5->Line->GradientFill->Color = Color::DeepSkyBlue;
			curve5->Line->IsVisible = true;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Size = 3;
			curve5->Symbol->IsVisible = true;
			curve5->Symbol->Fill->Type = FillType::Solid;
			curve5->Symbol->Fill->Color = Color::DeepSkyBlue;
			curve5->Line->Width = 2;
			curve5->Line->IsSmooth = true;
			curve5->Line->IsAntiAlias = true;
			curve5->Line->IsAntiAlias = true;

			curve7->Line->GradientFill->Color = Color::ForestGreen;
			curve7->Line->IsVisible = true;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Size = 3;
			curve7->Symbol->IsVisible = true;
			curve7->Symbol->Fill->Type = FillType::Solid;
			curve7->Symbol->Fill->Color = Color::ForestGreen;
			curve7->Line->Width = 2;
			curve7->Line->IsSmooth = true;
			curve7->Line->IsAntiAlias = true;
			curve7->Line->IsAntiAlias = true;

			curve8->Line->GradientFill->Color = Color::ForestGreen;
			curve8->Line->IsVisible = true;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Size = 3;
			curve8->Symbol->IsVisible = true;
			curve8->Symbol->Fill->Type = FillType::Solid;
			curve8->Symbol->Fill->Color = Color::ForestGreen;
			curve8->Line->Width = 2;
			curve8->Line->IsSmooth = true;
			curve8->Line->IsAntiAlias = true;
			curve8->Line->IsAntiAlias = true;

			//
			panel->Fill->Type = FillType::Solid;
			panel->Chart->Fill->Type = FillType::Brush;
			panel->Chart->Fill->Color = Color::WhiteSmoke;
			panel->Fill->Color = Color::WhiteSmoke;
			//		  panel->XAxis->MajorGrid->IsVisible = true;
			//		  panel->YAxis->MajorGrid->IsVisible = true;
			//	      panel->XAxis->MinorGrid->IsVisible = true;
			//		  panel->YAxis->MinorGrid->IsVisible = true;

			panel->XAxis->MajorGrid->Color = Color::Coral;
			panel->YAxis->MajorGrid->Color = Color::Coral;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel->XAxis->MinorGrid->Color = Color::DeepSkyBlue;


			panel->XAxis->MajorGrid->DashOn = true;
			panel->YAxis->MajorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;
			panel->YAxis->MinorGrid->DashOn = true;

			curve->Line->GradientFill->Color = Color::Red;
			curve1->Line->GradientFill->Color = Color::DeepSkyBlue;

			panel->XAxis->Scale->Min = 1.5;
			panel->XAxis->Scale->Max = 4.5;
			panel->YAxis->Scale->Max = 2.5;
			panel->YAxis->Scale->Min = -0.5;

			panel->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel->XAxis->Title->FontSpec->IsItalic = true;
			panel->YAxis->Title->FontSpec->IsItalic = true;
			panel->Title->Text = "ÔÓÍÊÖÈß";
			panel->Title->FontSpec->IsItalic = true;
			panel->XAxis->Scale->FontSpec->IsItalic = true;
			panel->YAxis->Scale->FontSpec->IsItalic = true;

			panel1->Fill->Type = FillType::Solid;
			panel1->Chart->Fill->Type = FillType::Brush;
			panel1->Chart->Fill->Color = Color::WhiteSmoke;
			panel1->Fill->Color = Color::WhiteSmoke;
			panel1->XAxis->MajorGrid->Color = Color::Coral;
			panel1->YAxis->MajorGrid->Color = Color::Coral;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel1->XAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MajorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->YAxis->MinorGrid->DashOn = true;
			panel1->XAxis->Scale->Min = 1.5;
			panel1->XAxis->Scale->Max = 4.5;
			panel1->YAxis->Scale->Max = dif;
			panel1->YAxis->Scale->Min = 0;
			panel1->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel1->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel1->XAxis->Title->FontSpec->IsItalic = true;
			panel1->YAxis->Title->FontSpec->IsItalic = true;
			panel1->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÔÓÍÊÖÈÈ";
			panel1->Title->FontSpec->IsItalic = true;
			panel1->XAxis->Scale->FontSpec->IsItalic = true;
			panel1->YAxis->Scale->FontSpec->IsItalic = true;

			panel2->Fill->Type = FillType::Solid;
			panel2->Chart->Fill->Type = FillType::Brush;
			panel2->Chart->Fill->Color = Color::WhiteSmoke;
			panel2->Fill->Color = Color::WhiteSmoke;
			panel2->XAxis->MajorGrid->Color = Color::Coral;
			panel2->YAxis->MajorGrid->Color = Color::Coral;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel2->XAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MajorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->YAxis->MinorGrid->DashOn = true;
			panel2->XAxis->Scale->Min = 1.5;
			panel2->XAxis->Scale->Max = 4.5;
			panel2->YAxis->Scale->Max = 15;
			panel2->YAxis->Scale->Min = -15;
			panel2->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel2->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel2->XAxis->Title->FontSpec->IsItalic = true;
			panel2->YAxis->Title->FontSpec->IsItalic = true;
			panel2->Title->Text = "ÏÅÐÂÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel2->Title->FontSpec->IsItalic = true;
			panel2->XAxis->Scale->FontSpec->IsItalic = true;
			panel2->YAxis->Scale->FontSpec->IsItalic = true;

			panel3->Fill->Type = FillType::Solid;
			panel3->Chart->Fill->Type = FillType::Brush;
			panel3->Chart->Fill->Color = Color::WhiteSmoke;
			panel3->Fill->Color = Color::WhiteSmoke;
			panel3->XAxis->MajorGrid->Color = Color::Coral;
			panel3->YAxis->MajorGrid->Color = Color::Coral;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel3->XAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MajorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->YAxis->MinorGrid->DashOn = true;
			panel3->XAxis->Scale->Min = 1.5;
			panel3->XAxis->Scale->Max = 4.5;
			panel3->YAxis->Scale->Max = 200;
			panel3->YAxis->Scale->Min = -150;
			panel3->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel3->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel3->XAxis->Title->FontSpec->IsItalic = true;
			panel3->YAxis->Title->FontSpec->IsItalic = true;
			panel3->Title->Text = "ÂÒÎÐÀß ÏÐÎÈÇÂÎÄÍÀß";
			panel3->Title->FontSpec->IsItalic = true;
			panel3->XAxis->Scale->FontSpec->IsItalic = true;
			panel3->YAxis->Scale->FontSpec->IsItalic = true;

			panel4->Fill->Type = FillType::Solid;
			panel4->Chart->Fill->Type = FillType::Brush;
			panel4->Chart->Fill->Color = Color::WhiteSmoke;
			panel4->Fill->Color = Color::WhiteSmoke;
			panel4->XAxis->MajorGrid->Color = Color::Coral;
			panel4->YAxis->MajorGrid->Color = Color::Coral;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel4->XAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MajorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->YAxis->MinorGrid->DashOn = true;
			panel4->XAxis->Scale->Min = 1.5;
			panel4->XAxis->Scale->Max = 4.5;
			panel4->YAxis->Scale->Max = dif1;
			panel4->YAxis->Scale->Min = 0;
			panel4->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel4->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel4->XAxis->Title->FontSpec->IsItalic = true;
			panel4->YAxis->Title->FontSpec->IsItalic = true;
			panel4->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ";
			panel4->Title->FontSpec->IsItalic = true;
			panel4->XAxis->Scale->FontSpec->IsItalic = true;
			panel4->YAxis->Scale->FontSpec->IsItalic = true;

			panel5->Fill->Type = FillType::Solid;
			panel5->Chart->Fill->Type = FillType::Brush;
			panel5->Chart->Fill->Color = Color::WhiteSmoke;
			panel5->Fill->Color = Color::WhiteSmoke;
			panel5->XAxis->MajorGrid->Color = Color::Coral;
			panel5->YAxis->MajorGrid->Color = Color::Coral;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MinorGrid->Color = Color::DeepSkyBlue;
			panel5->XAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MajorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->YAxis->MinorGrid->DashOn = true;
			panel5->XAxis->Scale->Min = 1.5;
			panel5->XAxis->Scale->Max = 4.5;
			panel5->YAxis->Scale->Max = dif2;
			panel5->YAxis->Scale->Min = 0;
			panel5->XAxis->Title->Text = "ÑÅÒÊÀ";
			panel5->YAxis->Title->Text = "ÇÍÀ×ÅÍÈÅ";
			panel5->XAxis->Title->FontSpec->IsItalic = true;
			panel5->YAxis->Title->FontSpec->IsItalic = true;
			panel5->Title->Text = "ÏÎÃÐÅØÍÎÑÒÜ ÏÐÎÈÇÂÎÄÍÎÉ (II)";
			panel5->Title->FontSpec->IsItalic = true;
			panel5->XAxis->Scale->FontSpec->IsItalic = true;
			panel5->YAxis->Scale->FontSpec->IsItalic = true;

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();

			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			zedGraphControl6->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl7->AxisChange();
			zedGraphControl6->Invalidate();

			zedGraphControl8->AxisChange();
			zedGraphControl6->Invalidate();

		}


	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		//pictureBox1->
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void zedGraphControl4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void zedGraphControl6_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void zedGraphControl7_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void zedGraphControl8_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {	}
};
}

