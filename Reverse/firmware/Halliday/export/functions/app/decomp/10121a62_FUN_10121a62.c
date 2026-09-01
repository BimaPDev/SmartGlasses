/* FUN_10121a62 @ 0x10121a62 */

void FUN_10121a62(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0x3f;
  iVar2 = *(int *)(param_1 + 0xc);
  do {
    sVar1 = *(short *)(iVar2 + 0x1db6 + iVar3 * 4);
    if (*(ushort *)(iVar2 + 0x1db4 + iVar3 * 4) == param_3) {
      iVar4 = iVar3;
      if (sVar1 != 0) {
        *(short *)(iVar2 + (iVar3 + 0x76c) * 4 + 6) = sVar1 + 1;
        return;
      }
    }
    else if (sVar1 == 0) {
      iVar4 = iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x40);
  iVar2 = iVar2 + iVar4 * 4;
  *(short *)(iVar2 + 0x1db4) = (short)param_3;
  *(undefined2 *)(iVar2 + 0x1db6) = 1;
  return;
}

