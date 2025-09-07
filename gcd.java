public class gcd {
    static int ans(int a, int b){
        if(a==b){
            return a;
        }
        else if(a==0){
            return b;
        }
        else if(b==0){
            return a;
        }
        else if(a>b){
            return (ans(a%b,b));
        }
        else{
            return (ans(a,b%a));
        }
    }

    public static void main(String[] args){
        int a=10;
        int b=2;
        System.out.println(ans(a,b));
    }
}
