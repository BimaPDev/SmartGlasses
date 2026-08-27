/* FUN_2c603048 @ 0x2c603048 */

void FUN_2c603048(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 3) >> 1 != param_2) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd | (byte)((param_2 & 1) << 1);
    if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (iVar3 = **(int **)(param_1 + 0xc), iVar3 != 0))
    {
      uVar1 = FUN_2c602bd8();
      iVar2 = FUN_2c602340(iVar3,0xe,uVar1);
      if (iVar2 == 1) {
        FUN_2c607df0(iVar3);
        return;
      }
    }
  }
  return;
}

