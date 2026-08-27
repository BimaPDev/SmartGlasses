/* FUN_1402f3f4 @ 0x1402f3f4 */

undefined4 FUN_1402f3f4(uint param_1,ushort *param_2,ushort *param_3)

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
  
  pbVar3 = DAT_1402f580;
  local_1c = *DAT_1402f57c;
  uVar6 = (uint)*DAT_1402f580;
  if (uVar6 - 1 < 2) {
    if ((param_1 == 1) || (param_1 == 4)) {
LAB_1402f41e:
      if (param_3 != (ushort *)0x0) {
        *param_3 = 0;
      }
      if (param_2 != (ushort *)0x0) {
        *param_2 = 0;
      }
      goto LAB_1402f42a;
    }
    if (param_1 < 7) goto LAB_1402f446;
    if (param_1 != 10) goto LAB_1402f41e;
LAB_1402f4c4:
    uVar6 = 0x115;
LAB_1402f456:
    FUN_1402e1fc(uVar6,&local_1e);
    if (param_3 != (ushort *)0x0) {
      iVar4 = DAT_1402f584 + param_1 * 0x12;
      *param_3 = (ushort)((int)(uint)(*(ushort *)(iVar4 + 0xe) & local_1e) >>
                         (*(ushort *)(iVar4 + 0x10) & 0xff));
    }
    if (param_2 != (ushort *)0x0) {
      iVar4 = DAT_1402f584 + param_1 * 0x12;
      *param_2 = (ushort)((int)(uint)(*(ushort *)(iVar4 + 10) & local_1e) >>
                         (*(ushort *)(iVar4 + 0xc) & 0xff));
    }
    if (param_1 == 6) {
      pcVar2 = DAT_1402f594;
      if (param_3 != (ushort *)0x0) {
        uVar1 = UnsignedSaturate((uint)*param_3 - (int)*DAT_1402f590,6);
        UnsignedDoesSaturate((uint)*param_3 - (int)*DAT_1402f590,6);
        *param_3 = (ushort)uVar1;
        pcVar2 = DAT_1402f594;
      }
    }
    else {
      if (param_1 != 10) goto LAB_1402f42a;
      pcVar2 = DAT_1402f58c;
      if (param_3 != (ushort *)0x0) {
        uVar1 = UnsignedSaturate((uint)*param_3 - (int)*DAT_1402f588,6);
        UnsignedDoesSaturate((uint)*param_3 - (int)*DAT_1402f588,6);
        *param_3 = (ushort)uVar1;
        pcVar2 = DAT_1402f58c;
      }
    }
    if (param_2 == (ushort *)0x0) goto LAB_1402f42a;
    uVar1 = UnsignedSaturate((uint)*param_2 - (int)*pcVar2,6);
    UnsignedDoesSaturate((uint)*param_2 - (int)*pcVar2,6);
    uVar5 = (ushort)uVar1;
  }
  else {
    if (uVar6 == 0) {
      if (param_1 == 10) goto LAB_1402f41e;
LAB_1402f446:
      if (param_1 - 7 < 2) {
        uVar6 = param_1 + 8 & 0xff;
      }
      else if (param_1 == 9) {
        uVar6 = 0x43;
      }
      else {
        if (param_1 == 10) goto LAB_1402f4c4;
        uVar6 = param_1 + 7;
      }
      goto LAB_1402f456;
    }
    if (uVar6 != 3) goto LAB_1402f446;
    if (param_1 == 10) goto LAB_1402f41e;
    if (param_1 == 2) {
      FUN_1402e1fc(0xbb,&local_1e);
      uVar6 = (uint)local_1e;
      FUN_1402e1fc(9,&local_1e);
      uVar5 = (ushort)((uVar6 << 0x11) >> 0x1f) | (ushort)(((local_1e & 0x3ff) >> 5) << 1);
      *param_3 = uVar5;
    }
    else {
      if (param_1 != 5) goto LAB_1402f446;
      FUN_1402e1fc(0xbc,&local_1e);
      uVar6 = (uint)local_1e;
      FUN_1402e1fc(0xc,&local_1e);
      if ((*pbVar3 == 0) || (*pbVar3 == 3)) {
        iVar4 = 4;
        uVar7 = local_1e & 0xf0;
      }
      else {
        uVar7 = local_1e & 0x3e0;
        iVar4 = 5;
      }
      uVar5 = (ushort)((uVar6 << 0x11) >> 0x1e) | (ushort)(((int)uVar7 >> iVar4) << 2);
      *param_3 = uVar5;
    }
  }
  *param_2 = uVar5;
LAB_1402f42a:
  if (*DAT_1402f57c != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return 0;
}

