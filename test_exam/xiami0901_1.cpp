// #include<iostream>
// #include<sstream>
// #include<string>
// #include<vector>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//分隔符函数
void split(const string& s, vector<int>& sv, const char flag = ' ')
{
    sv.clear();
    istringstream iss(s);
    string temp;
    
    while(getline(iss,temp,flag)){
        sv.push_back(stoi(temp));
    }
    return;
    
}
vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n) {
    vector<int> res;
    res = nums1;
     for (int i = 0; i != n; ++i) {
            res.push_back(nums2[i]);
    }
    sort(res.begin(), res.end());
        
    return res;

}
int main()
{
    string str1;
    string str2;
    string str3;
    cin >> str1 >> str2 >> str3;
    
    vector<int> line1;
    vector<int> line2;
    
    string strr1;
    string strr2;
    
    int mark = 0;
    for(int i = 0; i < str1.size(); i ++)
    {      
        if(str1[i] == ',')
            {
                mark = i;
                break;
            }
    }
    
    for(int i = 2; i < mark; i ++)
        strr1 += str1[i];
    
    for(int i = mark + 3; i < str1.size(); i ++)
        strr2 += str1[i];
        
    int mym = std::stoi(strr1);
    int myn = std::stoi(strr2);

    split(str2,line1,',');
    split(str3,line2,',');
    
    vector<int> res;
    
    res = merge(line1,mym,line2,myn);
    
    for(int i = 0; i < res.size(); i ++)
        cout << res[i] << ' ';
    
  
    return 0;
}