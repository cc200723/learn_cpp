// filename: time.cpp
#include "Time.h"
int main(int argc, char const *argv[]) {
  Time t(23,59,58);
  int _ = 65;
  while (_--) {
    t.tick();
    t.print_standard();
    std::cout << '\n';
  }

  return 0;
}
 /*

## 9.7 增强的Time类
- [] 修改Time函数，使他包含一个tick成员函数。该函数存放在Time对象中的时间增加1秒。Time对象应该始终保持可靠状态。
- [] 编写一个程序，在循环中测试tick函数，每次循环过程中以标准格式打印时间，以显示tick是否正常

程序应该保证以下情况：
1. 递增到下一分钟
2. 递增到下一小时
3. 递增到下一小时（11:59:59 PM 到 12:00:00 AM)、

之前的标准时间有问题，也修复了（课本上是12: 0: 5 但是从来没有这样的测试）
Finished in 4 ms
11:59:59 PM
12:00:00 AM
12:00:01 AM
12:00:02 AM
12:00:03 AM
12:00:04 AM
12:00:05 AM
12:00:06 AM
12:00:07 AM
12:00:08 AM
12:00:09 AM
12:00:10 AM
12:00:11 AM
12:00:12 AM
12:00:13 AM
12:00:14 AM
12:00:15 AM
12:00:16 AM
12:00:17 AM
12:00:18 AM
12:00:19 AM
12:00:20 AM
12:00:21 AM
12:00:22 AM
12:00:23 AM
12:00:24 AM
12:00:25 AM
12:00:26 AM
12:00:27 AM
12:00:28 AM
12:00:29 AM
12:00:30 AM
12:00:31 AM
12:00:32 AM
12:00:33 AM
12:00:34 AM
12:00:35 AM
12:00:36 AM
12:00:37 AM
12:00:38 AM
12:00:39 AM
12:00:40 AM
12:00:41 AM
12:00:42 AM
12:00:43 AM
12:00:44 AM
12:00:45 AM
12:00:46 AM
12:00:47 AM
12:00:48 AM
12:00:49 AM
12:00:50 AM
12:00:51 AM
12:00:52 AM
12:00:53 AM
12:00:54 AM
12:00:55 AM
12:00:56 AM
12:00:57 AM
12:00:58 AM
12:00:59 AM
12:01:00 AM
12:01:01 AM
12:01:02 AM
12:01:03 AM
 */
