#include <iostream>
#include <vector>
#include <algorithm>
#include "count.h"

#define MAX_SIZE_PTRARRAY 512
#define MAX_NUM_PTR 512
#define MAX_NUM_INTVAR 512

using namespace std;

int main()
{
  vector<int **> ptrArray(MAX_SIZE_PTRARRAY, 0);
  vector<int *> intPtr(MAX_NUM_PTR, 0);
  vector<int> intVar(MAX_NUM_INTVAR, 0);

  intVar[0] = 7;
  intVar[1] = 6;
  intVar[2] = 2;
  intVar[3] = 9;
  ptrArray[0] = &intPtr[0];
  ptrArray[1] = &intPtr[1];
  ptrArray[2] = &intPtr[2];
  ptrArray[3] = &intPtr[3];
  ptrArray[4] = NULL;
  intPtr[0] = &intVar[0];
  intPtr[1] = &intVar[1];
  intPtr[2] = &intVar[2];
  intPtr[3] = &intVar[3];

  count(ptrArray);

  return EXIT_SUCCESS;
}
