class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        int ssize=s.length();
        int tsize=t.length();
        if(ssize!=tsize){
            return false;
        }
        for(int i=0;i<ssize;i++){
            int ch=(int)s[i];
            int index=ch-'a';
            arr[index]++;
        }

        for(int i=0;i<tsize;i++){
            int ch=(int)t[i];
            int index=ch-'a';
            arr[index]--;
        }

        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};