package onlits2003.util;

public class Sort {
    private int size;
    private int[] arr = new int[size];

    public void selectionSort(int arr[], int size) {
        for(int i=0; i<size-1; i++) {
            for(int j=i+1; j<size; j++) {
                if(arr[i] > arr[j])
                {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
    }

    void bubbleSort(int arr[], int size) {

    }
}
