/* FUN_100f7554 @ 0x100f7554 */

undefined4 FUN_100f7554(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_1[3] != param_2)) {
    FUN_100a5b78(DAT_100f76cc | (DAT_100f76bc - DAT_100f76b8) * 0x20 & 0xff00U,DAT_100f76c8,
                 DAT_100f76d0,param_1,param_2);
    return 0;
  }
  if (param_3 == 0) {
    param_3 = 0x20;
  }
  iVar5 = param_1[2];
  if (param_3 == *(int *)(iVar5 + 0x40)) {
    iVar4 = *(int *)(iVar5 + 0x44);
    if (iVar4 != 0) goto LAB_100f758c;
  }
  else {
    iVar4 = FUN_100f9cd4(*(undefined4 *)*param_1,param_3);
    if (iVar4 != 0) {
      *(int *)(iVar5 + 0x40) = param_3;
      *(int *)(iVar5 + 0x44) = iVar4;
      goto LAB_100f758c;
    }
  }
  iVar5 = param_1[0xb];
  if (iVar5 != 0) {
    iVar1 = param_1[2];
    if (iVar5 == *(int *)(iVar1 + 0x40)) {
      iVar4 = *(int *)(iVar1 + 0x44);
      if (iVar4 == 0) goto LAB_100f75d2;
    }
    else {
      iVar4 = FUN_100f9cd4(*(undefined4 *)*param_1);
      if (iVar4 == 0) goto LAB_100f75d2;
      *(int *)(iVar1 + 0x40) = iVar5;
      *(int *)(iVar1 + 0x44) = iVar4;
    }
LAB_100f758c:
    iVar5 = FUN_100f625c(param_2,iVar4);
    if (iVar5 < 0) {
      uVar2 = (DAT_100f76bc - DAT_100f76b8) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_100f76dc | uVar2,DAT_100f76e4,DAT_100f76e0,iVar4);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x14);
      iVar5 = *(int *)(param_2 + 0x38) * iVar5;
      iVar1 = iVar3 + iVar5;
      if (iVar1 != 0) {
        if (*(short *)(iVar1 + 4) == 0) {
          FUN_100a5b78(DAT_100f76d4 | (DAT_100f76bc - DAT_100f76b8) * 0x20 & 0xff00U,DAT_100f76c8,
                       DAT_100f76d8);
        }
        else if (*(ushort *)(iVar1 + 6) != 0) {
          fVar7 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar1 + 6),
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar6 = (float)VectorUnsignedToFloat
                                   ((uint)*(ushort *)(param_1 + 5),(byte)(in_fpscr >> 0x16) & 3);
          *param_4 = fVar6 / fVar7;
        }
        return *(undefined4 *)(iVar3 + iVar5);
      }
      uVar2 = (DAT_100f76bc - DAT_100f76b8) * 0x20 & 0xff00;
    }
    FUN_100a5b78(DAT_100f76e8 | uVar2,DAT_100f76c8,DAT_100f76ec,iVar4);
    return 0;
  }
LAB_100f75d2:
  FUN_100a5b78(DAT_100f76c0 | (DAT_100f76bc - DAT_100f76b8) * 0x20 & 0xff00U,DAT_100f76c8,
               DAT_100f76c4,param_3);
  return 0;
}

