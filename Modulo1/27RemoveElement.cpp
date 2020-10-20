class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
   
    int *start, *ende, cont=0, copia;
    copia = nums.size();
               
    if(nums.empty())
        return 0;
        
    ende = &nums[nums.size()-1];
 
  
    for(int i=0; i<copia; i++)
    {
        if(nums[i]==val)
        {
            start = &nums[i];
            int temp = *start;
            
            while(*ende==val && ende > start){
                ende--;
                cont++;
                copia--;
            }
         
            *start = *ende;
            *ende= temp;
            ende--;
            cont++;
            copia--;
           /* cout<<"Impresión con swap"<<endl;
            for(int i=0; i<nums.size(); i++)
            {
                cout<<nums[i];
            }
            cout<<endl;*/
        }
    }
    
    return (nums.size()-cont);
    
    }
};
