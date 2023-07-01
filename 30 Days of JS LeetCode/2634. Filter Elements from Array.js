/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    res = [];

    arr.forEach((ele, index) => {
        if (fn(ele, index)) res.push(ele);
    });

    return res;
};
