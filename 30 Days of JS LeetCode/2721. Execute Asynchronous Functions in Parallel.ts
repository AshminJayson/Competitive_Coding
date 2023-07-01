async function promiseAll<T>(functions: (() => Promise<T>)[]): Promise<T[]> {
    let res: any = [];
    res.length == functions.length;
    let rescount = 0;
    return new Promise((resolve, reject) =>
        functions.forEach((fn, i) => {
            fn()
                .then((val) => {
                    res[i] = val;
                    rescount++;
                    if (rescount == functions.length) resolve(res);
                })
                .catch((err) => {
                    reject(err);
                });
        })
    );
}

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */
