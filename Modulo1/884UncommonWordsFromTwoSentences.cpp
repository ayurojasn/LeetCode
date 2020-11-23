class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        stringstream sA(A);
        stringstream sB(B);
        string word; 
        unordered_map<string,int> my_map;
        vector<string> result;
        
        while(sA>>word){
            my_map[word]++;
        }
         while(sB>>word){
            my_map[word]++;
        }
        
         for(auto i:my_map){
             if(i.second==1){
                 result.push_back(i.first);
             }
         }
        
        return result;
    }
};
