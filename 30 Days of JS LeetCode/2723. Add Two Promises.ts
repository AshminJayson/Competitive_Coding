// async function addTwoPromises(
//     promise1: Promise<number>,
//     promise2: Promise<number>
// ): Promise<number> {
//     return promise1.then((ele1) => {
//         return promise2.then((ele2) => {
//             return ele1 + ele2;
//         });
//     });
// }

// Alternate
async function addTwoPromises(
    promise1: Promise<number>,
    promise2: Promise<number>
): Promise<number> {
    const [value1, value2] = await Promise.all([promise1, promise2]);
    return value1 + value2;
}

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */
