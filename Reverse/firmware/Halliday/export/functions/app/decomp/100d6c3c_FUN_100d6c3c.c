/* FUN_100d6c3c @ 0x100d6c3c */

int FUN_100d6c3c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (2 < param_2) {
    param_2 = 3;
  }
  FUN_1011ea40(param_1,*DAT_100d6c6c,param_2 << 3,DAT_100d6c6c,param_4);
  iVar3 = 0;
  iVar2 = 0;
  while (iVar3 < (int)param_2) {
    iVar1 = iVar3 * 8;
    iVar3 = iVar3 + 1;
    if ((int)((uint)*(byte *)(param_1 + iVar1 + 6) << 0x1f) < 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

