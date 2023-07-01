type MultiDimensionalArray = (number | MultiDimensionalArray)[];

var flat = function (
    arr: MultiDimensionalArray,
    n: number
): MultiDimensionalArray {
    while (n > 0) {
        n--;
        let i = 0;
        while (i < arr.length) {
            if (Array.isArray(arr[i])) {
                let len = (arr[i] as any).length;
                let temp = arr[i];
                arr.splice(i, 1);
                arr.splice(i, 0, ...(temp as any));

                i += len;
                continue;
            }

            i++;
        }
    }

    return arr;
};
