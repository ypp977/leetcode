/*
 * @lc app=leetcode.cn id=1114 lang=cpp
 *
 * [1114] 按序打印
 */

// @lc code=start
#include <semaphore.h>

class Foo {
protected:
    sem_t first_sem;
    sem_t second_sem;

public:
    Foo() {
        sem_init(&first_sem, 0, 0);
        sem_init(&second_sem, 0, 0);
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        sem_post(&first_sem);
    }

    void second(function<void()> printSecond) {
        sem_wait(&first_sem);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        sem_post(&second_sem);
    }

    void third(function<void()> printThird) {
        sem_wait(&second_sem);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
// @lc code=end

