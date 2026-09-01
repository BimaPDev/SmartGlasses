/* FUN_1011c88e @ 0x1011c88e */

void FUN_1011c88e(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (char)iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
  }
  return;
}

