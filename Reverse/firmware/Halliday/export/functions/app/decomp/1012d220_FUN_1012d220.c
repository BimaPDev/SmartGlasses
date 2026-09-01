/* FUN_1012d220 @ 0x1012d220 */

undefined4 FUN_1012d220(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  uVar1 = param_3;
  if ((param_3 != 0) && (uVar1 = param_3 - 1, (param_3 & uVar1) != 0)) {
    uVar1 = 0;
  }
  param_1[3] = uVar1;
  param_1[4] = param_2;
  if (param_2 + 0xd00d0000U < 0xc000) {
    uVar1 = param_2 + 0xd00d0000U >> 1;
  }
  else if (param_2 + 0xd0020000U < 0x78000) {
    uVar1 = (param_2 + 0xd0020000U >> 1) + 0x40000000;
  }
  else if (param_2 + 0xd00e8000U < 0x8000) {
    uVar1 = (param_2 + 0xd00e8000U >> 1) + 0x40100000;
  }
  else {
    uVar1 = 0;
  }
  param_1[5] = uVar1;
  return 0;
}

