class Solution {
public:
    void sortColors(vector<int>& nums) {
      int cred=0, cwhite=0, cblue=0;
        
      for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
              cred+=1;
          }
          else if(nums[i]==1){
              cwhite+=1;
          }
          else if(nums[i]==2){
              cblue+=1;
          }
      } 
        
    for(int i=0;i<cred;i++){
        nums[i]=0;
    }
        
    for(int j=cred;j<(cred+cwhite);j++){ 
        nums[j]=1;
    }
    for(int k=(cwhite+cred);k<(cred+cwhite+cblue);k++){
       nums[k]=2;
    }
        
    }
};
