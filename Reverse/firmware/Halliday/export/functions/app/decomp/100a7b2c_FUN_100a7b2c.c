/* FUN_100a7b2c @ 0x100a7b2c */

undefined4 FUN_100a7b2c(uint param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar2 = DAT_100a7cdc;
  if (*DAT_100a7cdc == 0) {
    return 0xfffffffd;
  }
  iVar4 = FUN_100a735c();
  if ((int)param_2 < iVar4) {
    uVar7 = 0;
  }
  else {
    param_2 = FUN_100a735c();
    uVar7 = 2;
  }
  if ((param_1 == 0xb) && (0xf < (int)param_2)) {
    uVar7 = 2;
    param_2 = 0x10;
  }
  else if ((int)param_2 < 1) {
    uVar7 = 1;
    param_2 = 0;
  }
  FUN_1011dbf4(*piVar2,0xffffffff);
  pbVar8 = *(byte **)(*piVar2 + 0x14);
  uVar6 = (DAT_100a7ce0 - DAT_100a7ce4) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100a7ce8 | uVar6,DAT_100a7cf0,DAT_100a7cec,*pbVar8,param_1,param_2,param_3);
  if ((*pbVar8 == param_1) || (param_1 == 1)) {
    FUN_100a87e4(pbVar8,param_2);
  }
  FUN_10113e2c(*piVar2);
  uVar3 = DAT_100a7cfc;
  uVar5 = DAT_100a7cf4;
  uVar1 = (undefined1)param_2;
  if (param_1 == 5) {
    *(undefined1 *)(*piVar2 + 0x2d) = uVar1;
LAB_100a7bba:
    FUN_100a790c(uVar5);
  }
  else if (param_1 - 1 < 2) {
    *(undefined1 *)(*piVar2 + 0x2c) = uVar1;
    FUN_100a790c(uVar3);
    if (param_1 == 1) {
LAB_100a7c02:
      uVar5 = DAT_100a7d00;
      *(undefined1 *)(*piVar2 + 0x2e) = uVar1;
      FUN_100a790c(uVar5);
      goto LAB_100a7c10;
    }
  }
  else {
    if (param_1 == 6) goto LAB_100a7c02;
LAB_100a7c10:
    uVar5 = DAT_100a7d04;
    if ((param_1 == 0xb) || (param_1 == 1)) {
      *(undefined1 *)(*piVar2 + 0x33) = uVar1;
      goto LAB_100a7bba;
    }
  }
  uVar5 = DAT_100a7cf8;
  if ((param_1 & 0xfffffffd) == 1) {
    *(undefined1 *)(*piVar2 + 0x34) = uVar1;
    FUN_100a790c(uVar5);
LAB_100a7bd4:
    if (param_1 == 1) goto LAB_100a7c2e;
    bVar9 = param_1 == 0xe;
LAB_100a7cc8:
    if (bVar9) goto LAB_100a7c40;
  }
  else {
    if (param_1 != 0x16) goto LAB_100a7bd4;
LAB_100a7c2e:
    uVar5 = DAT_100a7d08;
    *(undefined1 *)(*piVar2 + 0x2f) = uVar1;
    FUN_100a790c(uVar5);
    if (param_1 != 0xe) {
      bVar9 = param_1 == 1;
      goto LAB_100a7cc8;
    }
LAB_100a7c40:
    uVar5 = DAT_100a7d0c;
    *(undefined1 *)(*piVar2 + 0x30) = uVar1;
    FUN_100a790c(uVar5);
  }
  uVar5 = DAT_100a7d10;
  if ((param_1 == 0x15) || (param_1 == 1)) {
    *(undefined1 *)(*piVar2 + 0x31) = uVar1;
    FUN_100a790c(uVar5);
    if (param_1 != 0xf) {
      bVar9 = param_1 == 1;
      goto LAB_100a7cce;
    }
  }
  else {
    bVar9 = param_1 == 0xf;
LAB_100a7cce:
    if (!bVar9) goto LAB_100a7c76;
  }
  uVar5 = DAT_100a7d14;
  *(undefined1 *)(*piVar2 + 0x32) = uVar1;
  FUN_100a790c(uVar5);
LAB_100a7c76:
  if (param_1 != 5) {
    iVar4 = *piVar2;
    *(undefined1 *)(iVar4 + 0x2a) = uVar1;
    if ((int)param_2 < (int)(uint)*(byte *)(iVar4 + 0x36)) {
      param_2 = (uint)*(byte *)(iVar4 + 0x36);
    }
    if ((int)(uint)*(byte *)(iVar4 + 0x35) <= (int)param_2) {
      param_2 = (uint)*(byte *)(iVar4 + 0x35);
    }
    iVar4 = FUN_100a7370();
    uVar5 = DAT_100a7d18;
    if (iVar4 == 0) {
      *(char *)(*piVar2 + 0x2b) = (char)param_2;
      FUN_100a790c(uVar5);
    }
  }
  FUN_100a5b78(uVar6 | 0x1980033,DAT_100a7cf0,DAT_100a7d1c,param_2,param_1,uVar7);
  return uVar7;
}

