class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size1=s1.length();
        int size2=s2.length();
        if(size1>size2)
        return false;
        vector<int> alpha1(26,0);
         vector<int> alpha2(26,0);
         int k=0;
        while(k<size1 && size1<=size2){
            int temp= s1[k]-'a';
            alpha1[temp]++;
            k++; 
        }
        int j=0;
        while(j<size1 && size1<=size2){
             int temp= s2[j]-'a';
            alpha2[temp]++;
            j++; 
        }
        if(alpha1==alpha2)
        return true;
        int i=size1;
        while(i<size2&& size1<=size2){
         int temp=s2[i]-'a';
         alpha2[temp]++;
         temp=s2[i-size1]-'a';
         alpha2[temp]--;
         if(alpha1==alpha2)
         return true;
         i++;
        }
        return false;

    }
};
