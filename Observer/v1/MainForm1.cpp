#include <string>
#include <iostream>
using std::string;

// 以下几个类的具体实现不重要
class Form{

};

class TextBox{
public:
	string getText(){
		// ...
		return "";
	}
};

class ProgressBar;

class FileSplitter{
public:
	FileSplitter(string filePath, int number, ProgressBar* progressBar){
		// ...
	}

	void split(){
		// ...
	}
};



// 
class MainForm : public Form
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;
	ProgressBar* progressBar;

public:
	void Button1_Click(){

		string filePath = txtFilePath->getText();
		int number = atoi(txtFileNumber->getText().c_str());

		FileSplitter splitter(filePath, number, progressBar);

		splitter.split();

	}
};

