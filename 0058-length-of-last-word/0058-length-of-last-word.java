class Solution {
    public int lengthOfLastWord(String s) {
        String[] st=s.split(" ");
        String i = st[st.length-1];
        int l=i.length();
        return l;
    }
}