import java.util.Scanner;

class reverseString{
    private void helper(char[] s, int left, int right){
        if(left>=right) return;
        while(left<right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    
    
    public void rString(char[] s){
        helper(s,0,(s.length-1));
    }
    
    
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        String[] s=sc.nextLine().split(" "); 
        for(int i = 0; i < s.length; i++){
            char [] data = s[i].toCharArray(); 
            new reverseString().rString(data); 
            System.out.println(data); 
            sc.close();
        }
    }
}