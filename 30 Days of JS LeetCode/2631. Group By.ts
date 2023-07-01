declare global {
    interface Array<T> {
        groupBy(fn: (item: T) => string): Record<string, T[]>;
    }
}

Array.prototype.groupBy = function (fn) {
    const ob = {};

    this.forEach((ele) => {
        let key = fn(ele);
        if (key in ob) {
            ob[key].push(ele);
        } else {
            ob[key] = [ele];
        }
    });

    return ob;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */
