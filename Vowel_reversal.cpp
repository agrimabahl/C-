//Given s = "leetcode", return "leotcede".
//Given s = "hello", return "holle".
class Solution {
public:
    string reverseVowels(string s) {
        string vow;
        for(auto i:s)
        {
          if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
            vow.push_back(i);}
        int sizee=vow.size();int c=0;
        for (int i=0;i<s.size();i++)
          { if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
              {s[i]=vow[sizee-1-c];
              c++;
              }
          }
        return s;
      }
};
