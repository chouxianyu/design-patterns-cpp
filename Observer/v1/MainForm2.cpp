#include <string>
#include <iostream>
using std::string;
using std::cout;

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

class ProgressBar{
public:
	void setValue(float value){
		// ...
	}
};

class FileSplitter{
public:
	FileSplitter(string filePath, int number){
		// ...
	}

	void split(){
		// ...
	}

	void addIProgress(IProgress* p){
		// ...
	}

	void removeIProgress(IProgress* p){
		// ...
	}
};

class IProgress{

};


// 
class MainForm : public Form, public IProgress
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;

	ProgressBar* progressBar;

public:
	void Button1_Click(){

		string filePath = txtFilePath->getText();
		int number = atoi(txtFileNumber->getText().c_str());

		ConsoleNotifier cn;

		FileSplitter splitter(filePath, number);

		splitter.addIProgress(this); //订阅通知
		splitter.addIProgress(&cn); //订阅通知

		splitter.split();

		splitter.removeIProgress(this);

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};

class ConsoleNotifier : public IProgress {
public:
	virtual void DoProgress(float value){
		cout << ".";
	}
};

