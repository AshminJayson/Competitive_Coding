class TimeLimitedCache {
    cache = new Map<number, number>([]);
    inaccessibleKeys = new Set<number>([]);
    timers = new Map<number, any>();

    constructor() {}

    set(key: number, value: number, duration: number): boolean {
        function reset(timers, cache, inaccessibleKeys, key, value, duration) {
            if (timers.has(key)) {
                clearTimeout(timers.get(key));
                timers.delete(key);
            }

            cache.set(key, value);
            const timerId = setTimeout(() => {
                inaccessibleKeys.add(key);
            }, duration);

            timers.set(key, timerId);
        }

        if (this.cache.has(key)) {
            if (this.inaccessibleKeys.has(key)) {
                this.inaccessibleKeys.delete(key);
                reset(
                    this.timers,
                    this.cache,
                    this.inaccessibleKeys,
                    key,
                    value,
                    duration
                );
                return false;
            }

            reset(
                this.timers,
                this.cache,
                this.inaccessibleKeys,
                key,
                value,
                duration
            );

            return true;
        }

        reset(
            this.timers,
            this.cache,
            this.inaccessibleKeys,
            key,
            value,
            duration
        );
        return false;
    }

    get(key: number): number {
        if (this.cache.has(key) && !this.inaccessibleKeys.has(key)) {
            console.log("yeaa");
            return this.cache.get(key)!;
        }

        return -1;
    }

    count(): number {
        return this.cache.size - this.inaccessibleKeys.size;
    }
}

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */
