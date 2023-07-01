class ArrayWrapper {
    nms: number[] = [];
    constructor(nums: number[]) {
        this.nms = nums;
    }

    valueOf() {
        return this.nms.reduce((a, b) => a + b, 0);
    }

    toString() {
        return "[" + this.nms.toString() + "]";
    }
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */
