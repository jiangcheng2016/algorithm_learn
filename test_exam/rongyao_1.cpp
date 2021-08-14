/*
请根据输入字符串中字母的“高中低”以及先后顺序对其进行重组，优先按“高中低”分为三组，然后再对每一组内的字母按照自然顺序进行排序；
	属于“高”的字母：bdfyhkl
	属于“高”的字母：aceimnorstuvwxz
	属于“高”的字母：gjpqy

	输入描述：
	输入一串只包含小写字母的字符串，如： abcdefghijklmnopqrstuvwxyz;
	输入字符串中可以包含重复字母；
	
	输出描述：
	输出三行字符串，分别表示高、中、低三组；
	输出字符串不需要去掉重复的字母；
	
	样例：
	输入：
	cvjjap
	
	输出：
	null
	acv
	jjp
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

void print(string s) {

	cout << s << endl;

}

vector<string> trans(string s) {
	map<char, int> myMap;
	myMap['b'] = 1;
	myMap['d'] = 1;
	myMap['f'] = 1;
	myMap['h'] = 1;
	myMap['k'] = 1;
	myMap['l'] = 1;

	myMap['a'] = 2;
	myMap['c'] = 2;
	myMap['e'] = 2;
	myMap['i'] = 2;
	myMap['m'] = 2;
	myMap['n'] = 2;
	myMap['o'] = 2;
	myMap['r'] = 2;
	myMap['s'] = 2;
	myMap['t'] = 2;
	myMap['u'] = 2;
	myMap['v'] = 2;
	myMap['w'] = 2;
	myMap['x'] = 2;
	myMap['z'] = 2;

	myMap['g'] = 3;
	myMap['j'] = 3;
	myMap['p'] = 3;
	myMap['q'] = 3;
	myMap['y'] = 3;
	string s1, s2, s3;

	for (int i = 0; i < s.size(); i++) {
			if (1 == myMap[s[i]])
				s1 += s[i];
			if (2 == myMap[s[i]])
				s2 += s[i];
			if (3 == myMap[s[i]])
				s3 += s[i];
	}
	vector<string> res;
	if (s1.size() == 0) res.push_back("null");
	else res.push_back(s1);
	if (s2.size() == 0) res.push_back("null");
	else res.push_back(s2);
	if (s3.size() == 0) res.push_back("null");
	else res.push_back(s3);

	return res;
}

int main() {

	string str;
	cin >> str;

	if (str.size() == 0) {
		cout << "null" << endl;
		cout << "null" << endl;
		cout << "null" << endl;
		return 0;
	}

	vector<string> ans = trans(str);
	string str1;
	vector<char> ss;
	vector<string> anss;
	
	for(int i = 0; i < ans.size(); i ++)
	{
	   if(ans[i] == "null"){
	       anss.push_back("null");
	       continue;
	   }
	   for(char aa:ans[i])
	        ss.push_back(aa);
	   sort(ss.begin(), ss.end());
	   for(int i = 0; i < ss.size(); i ++)
	   {
	       str1 = str1 + ss[i];
	   }
	   anss.push_back(str1);
	   str1 = "";
	   ss.resize(0);
	        
	  
	}

	for_each(anss.begin(), anss.end(), print);

	return 0;
}









