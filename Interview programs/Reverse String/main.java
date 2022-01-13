import java.util.ArrayList;
import java.util.Scanner;
import java.util.Arrays;

public class ArrayReverse {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        ArrayList<Integer> arrayList=new ArrayList<>();
        /*int i = 0, j = array.length - 1;
        while (i < j) {
            array[i]=array[i]+array[j]-(array[j]=array[i]);
            i++;
            j--;
        }
        System.out.println(Arrays.toString(array));
    }
}*/
        for(int i=n-1;i>=0;i--){
            arrayList.add(array[i]);
        }
        for(int i=0;i<n;i++)
        System.out.print(arrayList.get(i)+" ");
    }
}
