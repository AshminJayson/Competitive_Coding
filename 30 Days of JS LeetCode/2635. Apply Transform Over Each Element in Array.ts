/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
    const res: number[] = [];
    arr.forEach((ele: number, index: number) => {
        res.push(fn(ele, index));
    });
    return res;
};
