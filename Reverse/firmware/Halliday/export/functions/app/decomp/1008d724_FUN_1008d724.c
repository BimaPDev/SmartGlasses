/* FUN_1008d724 @ 0x1008d724 */

undefined4 FUN_1008d724(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_20;
  undefined1 auStack_1c [12];
  
  iVar1 = FUN_101277b8(param_2);
  if (iVar1 == 0) {
    if (0x10 < (byte)(((byte)*param_2 & 0x1f) - 4)) {
      return 0;
    }
    uVar2 = *param_2;
    *(ushort *)((int)param_3 + 2) =
         *(ushort *)((int)param_3 + 2) & 0x1f | *(ushort *)((int)param_2 + 2) & 0xffe0;
    uVar2 = DAT_1008d7e8 & uVar2;
    uVar3 = *param_3 & 0xffe003e0;
LAB_1008d762:
    uVar4 = 1;
    *param_3 = uVar3 | uVar2;
  }
  else {
    if (iVar1 == 1) {
      uVar4 = FUN_10094038(param_2);
      iVar1 = FUN_1011ea18(uVar4,DAT_1008d7ec);
      if (iVar1 == 0) {
        iVar1 = FUN_10093f0c(auStack_1c,param_2,2);
        if (iVar1 == 0) {
          iVar1 = FUN_10093c80(auStack_1c,param_3,4,&local_20);
          FUN_10093c38(auStack_1c);
          if ((iVar1 != 0) || (local_20 != 4)) {
            uVar4 = 0x129;
            uVar5 = DAT_1008d7f0;
            goto LAB_1008d7b2;
          }
        }
        if (((char)*param_3 + 0x1cU & 0x1f) < 0x11) {
          return 1;
        }
      }
    }
    else {
      if (iVar1 == 2) {
        uVar2 = *param_3 & 0x3e0;
        uVar3 = DAT_1008d7fc;
        goto LAB_1008d762;
      }
      uVar4 = 0x13a;
      uVar5 = DAT_1008d800;
LAB_1008d7b2:
      FUN_10094174(2,DAT_1008d7f8,uVar4,DAT_1008d7f4,uVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}

