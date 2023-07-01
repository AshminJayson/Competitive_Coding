/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
    const res = [];
    arr.forEach((ele, index) => {
        res.push(fn(ele, index));
    });
    return res;
};
