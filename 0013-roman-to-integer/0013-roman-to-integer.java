class Solution {
    public int romanToInt(String s) {
        Map<Character,Integer> mp= new HashMap<>();
        mp.put('I',1);
        mp.put('V',5);
        mp.put('X',10);   
        mp.put('L',50);
        mp.put('C',100);
        mp.put('D',500);
        mp.put('M',1000);
        
        int ans= mp.get(s.charAt(s.length()-1));
        
        for(int i=s.length()-2; i>=0; i--){
            if(mp.get(s.charAt(i))< mp.get(s.charAt(i+1))){
                ans-= mp.get(s.charAt(i));
            }
            else
                ans+=mp.get(s.charAt(i));
        }
         return ans;
    }     
}