public class fixedpoint{

    public static int fixpoint(int arr[]){
        int l=0;
        int r = arr.length-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid] == mid) return mid;
            else if(arr[mid]>mid) {
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        int[] arr = {1,0,2,7,8,9};
        System.out.println(fixpoint(arr));
    }
}