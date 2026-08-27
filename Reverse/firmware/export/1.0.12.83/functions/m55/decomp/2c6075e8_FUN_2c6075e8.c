/* FUN_2c6075e8 @ 0x2c6075e8 */

void FUN_2c6075e8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_2c6041fc();
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(**(int **)(param_1 + 8) + iVar4 * 4);
      if ((param_4 == 0) || (iVar2 = FUN_2c606b94(iVar3,0x40000), iVar2 == 0)) {
        *(short *)(iVar3 + 0x14) = *(short *)(iVar3 + 0x14) + (short)param_2;
        *(short *)(iVar3 + 0x16) = *(short *)(iVar3 + 0x16) + (short)param_3;
        *(short *)(iVar3 + 0x18) = *(short *)(iVar3 + 0x18) + (short)param_2;
        *(short *)(iVar3 + 0x1a) = *(short *)(iVar3 + 0x1a) + (short)param_3;
        FUN_2c6075e8(iVar3,param_2,param_3,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

