type Obj = Record<any, any>;

function compactObject(obj: Obj): Obj {
    function recur(as) {
        if (Array.isArray(as)) {
            let res: any = [];
            as.map((ele) => {
                let sub = recur(ele);
                if (Boolean(sub)) res.push(sub);
            });
            return res;
        }

        if (typeof as === "object" && as !== null) {
            let res = {};
            Object.keys(as).forEach((key) => {
                let sub = recur(as[key]);
                if (Boolean(sub)) res[key] = sub;
            });
            return res;
        }

        if (Boolean(as)) return as;
        return undefined;
    }

    return recur(obj);
}
