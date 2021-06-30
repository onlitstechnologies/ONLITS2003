package onlits2003.selectionsortusingpackage;
import onlits2003.util.Sort;

public class SelectionSortUsingPackage {
    public static void main(String[] args) {
        int[] arr = {23, 7, 99, 150, 15};
        Sort s = new Sort();
        s.selectionSort(arr, arr.length);
        for(int i = 0; i<arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
