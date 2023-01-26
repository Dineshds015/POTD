// 345. Reverse Vowels of a String

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vl;
        string s1="";
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
                vl.push_back(s[i]);
        }
        reverse(vl.begin(),vl.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
            {
                s1+=vl[j++];
            }
            else
            {
                s1+=s[i];
            }
        }
        return s1;
    }
};
