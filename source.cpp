#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("file.txt");
	
	string line;//предложение
	stringstream ss;	//строковый поток
	while(getline(in, line)){//считываем по предложению
		string tmp = ss.str();//временное хранилище
		ss.str(string());//очищаем
		ss << line << '\n' << tmp;//заносим в поток
	}
	cout << ss.str();
	in.close();//закрываем файл										   
	system("pause>>void");

}