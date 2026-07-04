
//Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
  
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int j = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
            }
        }

        for (int i = 0; i <= j; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

// j points to the last unique element.
// Move i through the sorted array.
// If arr[i] is different from arr[j], it is a new unique value.
// Increase j and store that unique value at arr[j].
// Finally, print elements from index 0 to j.
