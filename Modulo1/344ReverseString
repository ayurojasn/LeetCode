class Solution {
public:
    void reverseString(vector<char>& s) {
        
     if(s.size()!=0){
       char *start, *ende;
        
       start = &s[0];
       ende = &s[s.size() -1];

       while( ende > start ){
           
        char temp = *start;
        *start = *ende;
        *ende = temp;
        start++;
        ende--;
           
       }

       for(int i=0;i<s.size();i++){
        cout<<s[i];
        }
     }

    }
};
