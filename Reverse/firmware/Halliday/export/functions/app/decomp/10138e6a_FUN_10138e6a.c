/* FUN_10138e6a @ 0x10138e6a */

void FUN_10138e6a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0xc + param_1;
  for (; param_1 != iVar1; param_1 = param_1 + 0xc) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_100eb908();
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}

