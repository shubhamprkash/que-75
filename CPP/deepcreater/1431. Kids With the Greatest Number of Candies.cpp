class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec)  //vector with the help of 
     {
          vector<bool> cc(c.size());// making a bool return type 
         int p=c[0];                    
        for(int i=0;i<c.size();i++)
        if(c[i]>p)                               
        p=c[i];

        for(int i=0;i<c.size();i++)             
        if((c[i]+ec)>=p)                           
        cc[i]=true;
        else
        cc[i]=false;

         return cc;
    }
   
};
