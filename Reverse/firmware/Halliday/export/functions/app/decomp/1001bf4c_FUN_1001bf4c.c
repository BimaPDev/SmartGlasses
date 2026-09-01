/* FUN_1001bf4c @ 0x1001bf4c */

undefined4 FUN_1001bf4c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_r8;
  int unaff_r10;
  uint unaff_r11;
  undefined1 auStack_64 [21];
  undefined1 local_4f;
  undefined1 auStack_4e [26];
  int local_34;
  
  piVar7 = DAT_1001c0b8;
  piVar1 = DAT_1001c0ac;
  local_34 = *DAT_1001c0a8;
  uVar5 = (DAT_1001c0b0 - DAT_1001c0b4) * 0x20 & 0xff00;
  if ((*DAT_1001c0ac == 0) && (*DAT_1001c0b8 == 0)) {
    FUN_100a5b78(uVar5 | 0x2c00031,DAT_1001c0c0,DAT_1001c0bc);
  }
  else {
    iVar2 = *DAT_1001c0b8 * 0x30 + *DAT_1001c0ac;
    local_4f = FUN_1011ea10(param_1);
    FUN_1013d3f0(auStack_4e,param_1,0x1a);
    FUN_100a5b78(DAT_1001c0c4 | uVar5,DAT_1001c0c0,DAT_1001c0c8,auStack_4e);
    FUN_100a5b78(DAT_1001c0cc | uVar5,DAT_1001c0c0,PTR_s_pbSrc____s___s_1001c0d0,iVar2 + -0x4a,
                 iVar2 + -0x5f);
    iVar2 = FUN_1001bbe0(iVar2 + -0x60,auStack_64);
    if (-1 < iVar2) {
      iVar3 = *piVar7;
      piVar7 = (int *)0x0;
      iVar6 = 0;
      unaff_r10 = 0;
      iVar2 = 0;
      unaff_r8 = iVar3 + -2;
      unaff_r11 = uVar5 | DAT_1001c0e4;
      goto LAB_1001bffe;
    }
  }
LAB_1001bf90:
  uVar4 = 0xffffffff;
  do {
    if (*DAT_1001c0a8 == local_34) {
      return uVar4;
    }
    FUN_1013cdc0();
    iVar3 = extraout_r3;
    do {
      iVar6 = (unaff_r10 + unaff_r8) / 2;
      FUN_100a5b78(unaff_r11,DAT_1001c0c0);
      iVar2 = FUN_1001bbe0(iVar6 * 0x30 + iVar3,auStack_64);
      piVar7 = (int *)((int)piVar7 + 1);
      if (iVar2 == 1) {
        unaff_r8 = iVar6 + -1;
      }
      else {
        if (iVar2 != -1) break;
        unaff_r10 = iVar6 + 1;
      }
LAB_1001bffe:
      iVar3 = *piVar1;
    } while (unaff_r10 <= unaff_r8);
    unaff_r8 = iVar6 * 0x30 + *piVar1;
    if (iVar2 != 0) break;
    unaff_r8 = unaff_r8 + 1;
    FUN_100a5b78(uVar5 | 0x2ec0034,DAT_1001c0c0,PTR_s_times__d_data__d_ret__d__s_1001c0d8,piVar7,
                 iVar6,0,unaff_r8);
    FUN_1011e9f0(param_2,unaff_r8);
    uVar4 = 0;
  } while( true );
  FUN_100a5b78(DAT_1001c0dc | uVar5,DAT_1001c0c0,DAT_1001c0e0,piVar7,iVar2);
  goto LAB_1001bf90;
}

