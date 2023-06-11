import java.util.*;
import java.util.Arrays;
class chef{
    public static void main(String[] args){
        
        Scanner in = new Scanner(System.in);
        
        int t = in.nextInt();
        
        int arr[] = new int[t];
        
        for(int i = 0; i < t; i++){
            
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        
        for(int i = 0; i < t; i++){
            System.out.println(arr[i]);
        }
        
    }
}
