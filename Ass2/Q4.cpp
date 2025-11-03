#include <iostream>
#include <string>
using namespace std;

//a
string concat(string s1,string s2) {
    string ans="";
    for (int i=0;i<s1.size()+s2.size();i++) {
        if(i<s1.size()) ans+=s1[i];
        else ans+=s2[i-s1.size()];
    }
    return ans;
}

//b
string reverse(string s) {
    int low=0;
    int high=s.size()-1;
    while (low<high) {
        char temp=s[low];
        s[low++]=s[high];
        s[high--]=temp;
    }
    return s;
}

//c
bool vowel(char c){
if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
    return true;
}
return false;
};
string RemoveVowels(string s) {
    string ans="";
    for (int i=0;i<s.size();i++) {
        if (!vowel(s[i])) ans+=s[i];
    }
    return ans;
}

//d
void BubbleSortString(string &s) {
    int n=s.size();
    for (int i=0;i<n-1;i++) {
        bool check=true;
        for (int j=0;j<n-1-i;j++) {
            if ((int)s[j]>(int)s[j+1]) {
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                check=false;
            }
        }
        if (check) return;
    }
    return;
}


//e
void uppercase_lowercase(string &s){
    int n='A'-'a';
    for(int i=0;i<s.size();i++){
        if('A'<=s[i] && s[i]<='Z'){
            s[i]-=n;
        }
    }
}

int main(){

    return 0;
}