/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */

var reduce = function (nums, fn, init) {
    res = init;
    if (nums.length == 0) return res;

    nums.forEach((ele) => {
        res = fn(res, ele);
    });

    return res;
};
