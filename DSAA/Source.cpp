#include<iostream>  
#include<fstream>    // file I/O  
#include<map>        // map  
#include<string>     // string  
#include<algorithm>  // sort  
using namespace std;
/*
*map是C++中的关联容器
*     按关键字有序
*     关键字不可重复
*/
map<string, string> word;

/* 自定义比较函数（用于排序） */
bool myfunction(char i, char j)
{
	return i < j;
}

/*
*对每个单词排序
*排序后字符串作为关键字，原单词作为值
*存入map中
*/
void sign_sort(const char* dic)
{
	// 文件流  
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
		// 若标识不存在，创建一个新map元素，若存在，加在值后面  
		word[asign] += aword + " ";
	}
	in.close();
}

/*
*写入输出文件
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