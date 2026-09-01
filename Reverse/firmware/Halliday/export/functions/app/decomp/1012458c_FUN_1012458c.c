/* FUN_1012458c @ 0x1012458c */

void FUN_1012458c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  undefined4 uVar4;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 3) >> 1 != param_2)) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd | (byte)((param_2 & 1) << 1);
    iVar1 = FUN_1012455a();
    if (iVar1 != 0) {
      uVar4 = **(undefined4 **)(extraout_r3 + 0xc);
      uVar2 = FUN_101243ba(extraout_r3);
      iVar3 = FUN_10086f50(uVar4,0xe,uVar2);
      if (iVar3 == 1) {
        FUN_10125af4(iVar1);
        return;
      }
    }
  }
  return;
}

