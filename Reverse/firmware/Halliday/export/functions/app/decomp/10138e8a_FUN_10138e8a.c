/* FUN_10138e8a @ 0x10138e8a */

void FUN_10138e8a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x1c + param_1;
  for (; param_1 != iVar1; param_1 = param_1 + 0x1c) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_10139058();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

