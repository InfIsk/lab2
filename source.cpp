#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("file.txt");
	
	string line;//�����������
	stringstream ss;	//��������� �����
	while(getline(in, line)){//��������� �� �����������
		string tmp = ss.str();//��������� ���������
		ss.str(string());//�������
		ss << line << '\n' << tmp;//������� � �����
	}
	cout << ss.str();
	in.close();//��������� ����										   
	system("pause>>void");

}