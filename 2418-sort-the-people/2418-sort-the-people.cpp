class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
          int temp;
        for(int i=0;i<n-1;i++){
           
            for(int j=i+1;j<n;j++){
                if(heights[i]<heights[j]){
                   
                    temp=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp;
                    
                
               string temp2=names[i];
               names[i]=names[j];
               names[j]=temp2;}
             
            }
          
        }
        
     return names;

}
};