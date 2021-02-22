#include<iostream>  
#include<fstream>    // file I/O  
#include<map>        // map  
#include<string>     // string  
#include<algorithm>  // sort  
using namespace std;
/*
*map��C++�еĹ�������
*     ���ؼ�������
*     �ؼ��ֲ����ظ�
*/
map<string, string> word;

/* �Զ���ȽϺ������������� */
bool myfunction(char i, char j)
{
	return i < j;
}

/*
*��ÿ����������
*������ַ�����Ϊ�ؼ��֣�ԭ������Ϊֵ
*����map��
*/
void sign_sort(const char* dic)
{
	// �ļ���  
	ifstream in(dic);
	if (!in)
	{
		cout << "Couldn't open file: " + string(dic) << endl;
		return;
	}

	string aword;
	string asign;
	while (in >> aword)
	{
		asign = aword;
		sort(asign.begin(), asign.end(), myfunction);
		// ����ʶ�����ڣ�����һ����mapԪ�أ������ڣ�����ֵ����  
		word[asign] += aword + " ";
	}
	in.close();
}

/*
*д������ļ�
*/
void write_file(const char* file)
{
	ofstream out(file);
	if (!out)
	{
		cout << "Couldn't create file: " + string(file) << endl;
		return;
	}

	map<string, string>::iterator begin = word.begin();
	map<string, string>::iterator end = word.end();
	while (begin != end)
	{
		out << begin->second << "\n";
		++begin;
	}
	out.close();
}

int main()
{
	string dic = "words.txt";
	string outfile = "outs.txt";

	/*
	cout << "Please input dictionary name: ";
	cin >> dic;
	cout << "Please input output filename: ";
	cin >> outfile;
	*/
	sign_sort(dic.c_str());
	write_file(outfile.c_str());

	return 0;
}