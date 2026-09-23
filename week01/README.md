# 第 1 周：C++ 类与 RAII（教案第 1 周）

> 目标：能用现代 C++ 写出工程级代码。本周从「写类 + RAII」开始，不再写孤立语法 demo。

## 本周任务清单
- [ ] 第 1 课：C++ 类与 RAII（完成 EncoderCounter 练习）
- [ ] 第 2 课：C++ 进阶与多线程（生产者-消费者 demo）
- [ ] 第 3 课：Linux 开发环境（CMake / gdb / shell）
- [ ] 第 4 课：项目整合 + 红灯自检

## 第 1 课要点速记
- 构造函数：创建对象时自动调用，负责「获取资源」
- 析构函数：销毁对象时自动调用，负责「释放资源」
- RAII = Resource Acquisition Is Initialization：资源生命周期绑定到对象生命周期
- 栈对象离开作用域必被析构（即使提前 return / 抛异常）

## const 指针纠错（来自 learning-12）
- `const int *p`：指向常量的指针，锁「值」，p 可改指向
- `int *const q`：常量指针，锁「指针」，q 不能改指向
- `const int *const r`：值和指针都锁死

## 代码规范（从本周起强制执行）
1. 缩进 4 空格，统一风格
2. 不用 using namespace std，统一写 std::
3. 编译产物不进仓库（见根目录 .gitignore）
