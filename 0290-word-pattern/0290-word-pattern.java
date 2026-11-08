class Solution {
    public boolean wordPattern(String p, String s) {
        String[] words=s.split(" ");
        if(p.length()!=words.length)
           return false;
           HashMap<Character,String> hm1=new HashMap<>();
        HashMap<String,Character> hm2 = new HashMap<>();
        for(int i=0;i<p.length();i++) {
            char ch = p.charAt(i);
            String word = words[i];
            if(hm1.containsKey(ch)){
                if(!hm1.get(ch).equals(word)){
                    return false;
                }
            } 
            if(hm2.containsKey(word)){
                if(hm2.get(word)!=ch) {
                    return false;
                }
            }
            hm1.put(ch,word);
            hm2.put(word,ch);
        }
         return true;
    }
}