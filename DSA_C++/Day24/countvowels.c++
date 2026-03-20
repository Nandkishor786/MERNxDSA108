#include<bits/stdc++.h>
using namespace std;

//Frequency / Counting Problems
bool isVowel(char c){
  c= tolower(c);
  return(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u');
}
 int countVowel(string s){
  int l =0;
  int r =s.length()-1;
  int count =0;
  while(l<=r){
    if(isVowel(s[l]) && l==r)count++;
    else{
     if(isVowel(s[l]))count++;
     if(isVowel(s[r]))count++;
    }
    l++;
    r--;
  }
  return count;
 }
 void countVowelandConsonant(string s){
   int vowels =0;
   int consonants =0;
   for(char c:s){
    if(isalpha(c)){
      if(isVowel(c))vowels++;
      else consonants++;
    }
   }
   cout<<"consonants counts is "<<consonants<<endl;
     cout<<"vowel counts is "<<vowels<<endl;
    }

 int FrequencyofChar(string s){
  unordered_map<char,int>freq;
  for(int c:s){
    freq[c]++;
  }
  for(auto it:freq){
    cout<<it.first <<"->"<< it.second<<" ";
  }
 }

void mostFrequentChar(string s){
  unordered_map<char,int>freq;
  int maxcount =0;
  char mostfreqchar ;
  for(char c:s){
    freq[c]++;
    if(freq[c]>maxcount){
      maxcount =freq[c];
     mostfreqchar =c;
    }
  }
cout<<"most frequent char is "<<mostfreqchar<<endl;
cout<<"freq of char is "<<maxcount<<endl;
}

//String Manipulation
string removeSpaceAndSpecialChar(string s){
    string newstring ="";
    for(char c:s){
      if(isalpha(c)){
        newstring +=c;
      }
    }
    return newstring;
}

string tolower(string s){
  for(char &c:s){
      c= tolower(c);
  }
  return s;
 }

 string toUpper(string s){
  for(char &c:s){
    c= toupper(c);
  }
  return s;
 }

int main(){
   string s;
   cout<<"enter the string ";
   getline(cin,s);
   int count = countVowel(s);
   cout<<"vowelscounts "<<count<<endl;
   countVowelandConsonant(s);
   cout<<"frequency of characters "<<endl;
   FrequencyofChar(s);
   cout<<"mostFrequentChar"<<endl;
   mostFrequentChar(s);
   cout<<"removeSpaceAndSpecialChar"<<endl;
   cout<<removeSpaceAndSpecialChar(s)<<endl;
   cout<<"lowercase form  is "<<tolower(s)<<endl;
   cout<<"Uppercase : "<<toUpper(s)<<endl;
  return 0;
}