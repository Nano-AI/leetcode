class Solution {
    public boolean validMountainArray(int[] arr) {
        int i = 0;
        if (arr.length < 3) return false;
        int size = arr.length;
        while (i < size - 1 && arr[i] < arr[i + 1])
            i++;
        if (i == size - 1 || arr[i] == arr[i + 1] || arr[size - 2] < arr[size - 1] || i == 0) {
            System.out.println('1');
            return false;   
        }
        while (i < size - 1 && arr[i] > arr[i + 1])
            i++;
        if (i != size - 1 || (i != size - 1 && arr[i] < arr[i + 1])) {
            System.out.println(size);
            return false;
        }
        return true;
    }
}