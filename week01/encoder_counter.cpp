// 第 1 周第 1 课练习：EncoderCounter（RAII）
// 任务：把下面的 TODO 补全，禁止拷贝，提供工厂函数
#include <memory>
#include <cstdint>

// —— 假装这些底层函数已存在 ——
void timer_init_encoder(int pin);
void timer_deinit();
int32_t timer_get_count();
void timer_reset_count();

class EncoderCounter {
public:
    explicit EncoderCounter(int pin) {
        // TODO 1: 初始化定时器（记得把 pin 保存到成员变量）
    }

    ~EncoderCounter() {
        // TODO 2: 释放定时器
    }

    // TODO 3: 禁止拷贝和赋值（= delete）

    int32_t read() const {
        // TODO 4: 返回计数值
    }

    void reset() {
        // TODO 5: 清零
    }

private:
    int pin_;
};

std::unique_ptr<EncoderCounter> create_encoder(int pin) {
    // TODO 6: 返回一个 EncoderCounter 实例
}
