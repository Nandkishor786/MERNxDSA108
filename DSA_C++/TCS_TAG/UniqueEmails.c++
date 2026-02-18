 #include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;


 int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;

        for (string email : emails) {
            string local = "";
            string domain = "";
            int i = 0;

            // process local name
            while (email[i] != '@') {
                if (email[i] == '+') {
                    // skip till '@'
                    while (email[i] != '@') i++;
                    break;
                }
                if (email[i] != '.') {
                    local += email[i];
                }
                i++;
            }

            // process domain
            domain = email.substr(i);  // includes '@'

            st.insert(local + domain);
        }

        return st.size();
    }
    

int main() {
     
   vector<string>emails = {
 "a@leetcode.com","b@leetcode.com","c@leetcode.com"
};
   int num =numUniqueEmails(emails);

 
   cout<<num<<" "<<endl;


    return 0;
}

 

 
 
 
 
 