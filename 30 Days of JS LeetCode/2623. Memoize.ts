type Fn = (...params: any) => any;

function memoize(fn: Fn): Fn {
    const memo = new Map<string, number>([]);
    return function (...args) {
        // console.log(memo)
        if (memo.has([...args].toString()))
            return memo.get([...args].toString());
        else {
            let res = fn(...args);
            memo.set([...args].toString(), res);
            return res;
        }
    };
}

/**
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1
 */
