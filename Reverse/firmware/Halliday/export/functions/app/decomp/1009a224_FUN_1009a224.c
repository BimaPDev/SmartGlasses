/* FUN_1009a224 @ 0x1009a224 */

undefined4 FUN_1009a224(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_20;
  undefined1 auStack_1c [12];
  
  iVar1 = FUN_101277b8(param_2);
  if (iVar1 == 0) {
    if (0x15 < ((byte)*param_2 & 0x1f)) {
      uVar3 = *param_2;
      *(ushort *)((int)param_3 + 2) =
           *(ushort *)((int)param_3 + 2) & 0x1f | *(ushort *)((int)param_2 + 2) & 0xffe0;
      *param_3 = *param_3 & 0xffe003e0 | DAT_1009a2c4 & uVar3;
      return 1;
    }
    return 0;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_10094038(param_2);
    iVar1 = FUN_1011ea18(uVar2,DAT_1009a2c8);
    if (iVar1 == 0) {
      iVar1 = FUN_10093f0c(auStack_1c,param_2,2);
      if (iVar1 == 0) {
        iVar1 = FUN_10093c80(auStack_1c,param_3,4,&local_20);
        FUN_10093c38(auStack_1c);
        if ((iVar1 != 0) || (local_20 != 4)) {
          FUN_10094174(2,DAT_1009a2d4,0x8f,DAT_1009a2d0,DAT_1009a2cc);
          return 0;
        }
      }
      if (0x15 < ((byte)*param_3 & 0x1f)) {
        return 1;
      }
    }
  }
  return 0;
}

