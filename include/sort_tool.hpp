#ifndef SORT_TOOL_HPP
#define SORT_TOOL_HPP
#include <iostream>
class sort_tool {
public:
  void Sort_Num(int *num, int len);

private:
  void Travese(int *num, int len);
};

#endif