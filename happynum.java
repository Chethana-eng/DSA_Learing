public class happynum {

    static boolean happy(int n){
        if( n==1) return true;
        if(n==4) return false;
        return (happy(sumofdigits(n)));
    }
    static int sumofdigits(int n){
        int sum=0;
        while (n>0){
            sum += Math.pow(n%10, 2);
            n=n/10;
        }
        return sum;
    }
    public static void main(String[] args){
        int n=1;
        System.out.println(happy(n));
    }
}
