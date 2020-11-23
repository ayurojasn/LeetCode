class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int count=0;
        
        for(int i=0; i<S.size();i++){
            int tamJ=J.size();
            for(int j=0;j<tamJ;j++){
                if(S[i]==J[j]){
                    count++;
                    tamJ=0; //stop the search in Jewels
                }
            }
        }
        
     return count;
    }
};
