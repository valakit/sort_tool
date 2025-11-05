#include "sort_tool.hpp"

/**
    @brief 遍历数组
    @param num 数组
    @param len 数组长度
    @return
*/
void sort_tool::Travese(int *num, int len) {
  for (int i = 0; i < len; i++)
    std::cout << *(num + i) << std::endl;
}

/**
    @brief 排序数组
    @param num 数组
    @param len 数组长度
    @return
*/

void sort_tool::Sort_Num(int *num, int len) // 小到大
{
  int temp, temp2;

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i; j++) {
      temp = num[len - i - 1];
      if (num[j] > temp) {
        num[len - i - 1] = num[j];
        num[j] = temp;
      }
    }
  }
  Travese(num, len);

  return;
}