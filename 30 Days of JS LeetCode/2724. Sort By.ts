function sortBy(arr: any[], fn: Function): any[] {
    function partition(arr, low, high) {
        let pivot = fn(arr[high]);
        let i = low - 1;

        for (let j = low; j < high; j++) {
            if (fn(arr[j]) < pivot) {
                i++;
                let temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        let temp = arr[high];
        arr[high] = arr[i + 1];
        arr[i + 1] = temp;

        return i + 1;
    }

    function quicksort(arr, low, high) {
        if (low < high) {
            let p = partition(arr, low, high);
            quicksort(arr, low, p - 1);
            quicksort(arr, p + 1, high);
        }
    }

    quicksort(arr, 0, arr.length - 1);
    return arr;
}
