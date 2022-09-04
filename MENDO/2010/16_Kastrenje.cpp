#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin >> n;
   
  vector<string> words;
   
  for (int i=0; i<n; i++)
  {
      string word;
      cin >> word;
       
      words.push_back(word);
  }
   
  for (int i=0; i<words.size(); i++)
  {
      //brute force each length
          int foundPrefix = 0;      
       
      for (int len=1; len<=words[i].size() && !foundPrefix; len++)
      {
           string check = words[i].substr(0, len);
            
           int ok = 1;
           for (int j=0; j<words.size(); j++)
              if (i!=j && words[j].find(check) == 0)
              {
                  //not a solution, because
                  //check is prefix of words[j]                                    
                  ok = 0; break; 
              }
               
          if (ok == 1)
          {
             //result for words[i]
             cout << check << endl;
             foundPrefix = 1;
          }                     
      }      
  }
   
  return 0;
}