/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    let res: number[] = [];

    arr.forEach((ele: number, index: number) => {
        if (fn(ele, index)) res.push(ele);
    });

    return res;
};
