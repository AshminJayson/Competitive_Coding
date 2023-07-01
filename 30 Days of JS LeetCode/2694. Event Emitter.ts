type Callback = (...args: any[]) => any;
type Subscription = {
    unsubscribe: () => void;
};

class EventEmitter {
    listeners = {};

    subscribe(eventName: string, callback: Callback): Subscription {
        if (this.listeners[eventName]) {
            this.listeners[eventName].push(callback);
        } else {
            this.listeners[eventName] = [callback];
        }

        return {
            unsubscribe: () => {
                let arr = this.listeners[eventName];
                let pos = arr.findIndex(callback);
                arr.splice(pos, 1);
                this.listeners[eventName] = arr;
            },
        };
    }

    emit(eventName: string, args: any[] = []): any {
        if (this.listeners[eventName]) {
            return this.listeners[eventName].map((listener) =>
                listener(...args)
            );
        }

        return [];
    }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */
