/* FUN_1011e166 @ 0x1011e166 */

void FUN_1011e166(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1011df0c();
  if (iVar1 != param_3) {
    *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) | 1;
  }
  return;
}

