import java.util.Scanner;


class basicbinarysearch {
    public int search(int[] nums, int target) {
        int low = 0;
        int high = nums.length -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
    public static void main (String[] args ){
        Scanner sc = new Scanner(System.in);
        int[] arr = {1, 3, 5, 7, 9, 11};
        System.out.print("Enter target: ");
        int target = sc.nextInt();

        basicbinarysearch bbs = new basicbinarysearch();
        int result = bbs.search(arr, target);

        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found!");
        }
    }
}