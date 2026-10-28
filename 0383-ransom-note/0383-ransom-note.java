class Solution {
    public boolean canConstruct(String rN, String m) {
        int[] freq=new int[26];
        for(int i=0;i<m.length();i++) {
            char c=m.charAt(i);
            freq[c-'a']++;
        }
        for(int i=0;i<rN.length();i++){
            char c = rN.charAt(i);
            freq[c-'a']--;
            if(freq[c-'a']<0)
            return false;
        }
        return true;
    }
}