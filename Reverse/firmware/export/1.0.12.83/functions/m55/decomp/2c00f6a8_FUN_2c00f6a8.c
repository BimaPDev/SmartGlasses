/* FUN_2c00f6a8 @ 0x2c00f6a8 */

undefined4 FUN_2c00f6a8(uint param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort local_1e;
  int local_1c;
  
  pbVar3 = DAT_2c00f838;
  uVar6 = (uint)*DAT_2c00f838;
  local_1c = *DAT_2c00f83c;
  if (uVar6 - 1 < 2) {
    if (((param_1 != 1) && (param_1 != 4)) && ((param_1 < 7 || (param_1 == 10)))) goto LAB_2c00f6d6;
  }
  else if ((uVar6 != 3 && uVar6 != 0) || (param_1 != 10)) {
    if (uVar6 == 3) {
      if (param_1 == 2) {
        FUN_2c008e4c(0xbb,&local_1e);
        uVar6 = (uint)local_1e;
        FUN_2c008e4c(9,&local_1e);
        uVar5 = (ushort)((uVar6 << 0x11) >> 0x1f) | (ushort)(((local_1e & 0x3ff) >> 5) << 1);
        *param_3 = uVar5;
      }
      else {
        if (param_1 != 5) goto LAB_2c00f6d6;
        FUN_2c008e4c(0xbc,&local_1e);
        uVar6 = (uint)local_1e;
        FUN_2c008e4c(0xc,&local_1e);
        if ((*pbVar3 == 0) || (*pbVar3 == 3)) {
          uVar7 = local_1e & 0xf0;
          iVar4 = 4;
        }
        else {
          uVar7 = local_1e & 0x3e0;
          iVar4 = 5;
        }
        uVar5 = (ushort)((uVar6 & 0x7fff) >> 0xd) | (ushort)(((int)uVar7 >> iVar4) << 2);
        *param_3 = uVar5;
      }
    }
    else {
LAB_2c00f6d6:
      if (param_1 - 7 < 2) {
        uVar6 = param_1 + 8 & 0xff;
      }
      else if (param_1 == 9) {
        uVar6 = 0x43;
      }
      else if (param_1 == 10) {
        uVar6 = 0x115;
      }
      else {
        uVar6 = param_1 + 7;
      }
      FUN_2c008e4c(uVar6,&local_1e);
      if (param_3 != (ushort *)0x0) {
        iVar4 = DAT_2c00f840 + param_1 * 0x12;
        *param_3 = (ushort)((int)(uint)(*(ushort *)(iVar4 + 0xe) & local_1e) >>
                           (*(ushort *)(iVar4 + 0x10) & 0xff));
      }
      if (param_2 != (ushort *)0x0) {
        iVar4 = DAT_2c00f840 + param_1 * 0x12;
        *param_2 = (ushort)((int)(uint)(*(ushort *)(iVar4 + 10) & local_1e) >>
                           (*(ushort *)(iVar4 + 0xc) & 0xff));
      }
      if (param_1 == 6) {
        pcVar2 = DAT_2c00f848;
        if (param_3 != (ushort *)0x0) {
          uVar1 = UnsignedSaturate((uint)*param_3 - (int)*DAT_2c00f844,6);
          UnsignedDoesSaturate((uint)*param_3 - (int)*DAT_2c00f844,6);
          *param_3 = (ushort)uVar1;
          pcVar2 = DAT_2c00f848;
        }
      }
      else {
        if (param_1 != 10) goto LAB_2c00f72e;
        pcVar2 = DAT_2c00f850;
        if (param_3 != (ushort *)0x0) {
          uVar1 = UnsignedSaturate((uint)*param_3 - (int)*DAT_2c00f84c,6);
          UnsignedDoesSaturate((uint)*param_3 - (int)*DAT_2c00f84c,6);
          *param_3 = (ushort)uVar1;
          pcVar2 = DAT_2c00f850;
        }
      }
      if (param_2 == (ushort *)0x0) goto LAB_2c00f72e;
      uVar1 = UnsignedSaturate((uint)*param_2 - (int)*pcVar2,6);
      UnsignedDoesSaturate((uint)*param_2 - (int)*pcVar2,6);
      uVar5 = (ushort)uVar1;
    }
    *param_2 = uVar5;
    goto LAB_2c00f72e;
  }
  if (param_3 != (ushort *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (ushort *)0x0) {
    *param_2 = 0;
  }
LAB_2c00f72e:
  if (*DAT_2c00f83c == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

