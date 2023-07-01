/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val: string): object {
    return {
        toBe(ip: string) {
            if (ip === val) return true;
            else throw "Not Equal";
        },

        notToBe(ip: string) {
            if (ip !== val) return true;
            else throw "Equal";
        },
    };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
