class Solution {
public:
    int compress(vector<char>& chars) {
        int index =0;
        int i=0,count=0;
        while(i<chars.size()){
            int j=i+1;
        while(j<chars.size()&& chars[i]==chars[j]){
         j++;
        }
        chars[index++]=chars[i];
        count=j-i;
        if(count>1){
            string arr =to_string(count);
            for(char i : arr){
            chars[index++]=i;
            }
            }
            i=j;
        } 
        return (index) ;  
    } 
};
