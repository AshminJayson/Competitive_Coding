function join(arr1: any[], arr2: any[]): any[] {
    function partition(arr, low, high) {
        let pivot = arr[high];

        let i = low - 1;
        for (let j = low; j < high; j++) {
            if (arr[j].id < pivot.id) {
                i++;
                let temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        let temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    function quicksort(arr, low, high) {
        if (low < high) {
            let p = partition(arr, low, high);
            quicksort(arr, low, p - 1);
            quicksort(arr, p + 1, high);
        }
    }

    arr1.sort((a, b) => a.id - b.id);
    arr2.sort((a, b) => a.id - b.id);

    let i = 0;
    let j = 0;
    let arr3: any = [];

    while (i < arr1.length && j < arr2.length) {
        if (arr1[i].id == arr2[j].id) {
            let ob = arr1[i];
            Object.keys(arr2[j]).forEach((key) => {
                ob[key] = arr2[j][key];
            });

            arr3.push(ob);
            i++;
            j++;
        } else if (arr1[i].id < arr2[j].id) {
            arr3.push(arr1[i]);
            i++;
        } else {
            arr3.push(arr2[j]);
            j++;
        }
    }

    if (i < arr1.length) {
        arr3.push(...arr1.slice(i));
    }

    if (j < arr2.length) {
        arr3.push(...arr2.slice(j));
    }

    return arr3;
}
