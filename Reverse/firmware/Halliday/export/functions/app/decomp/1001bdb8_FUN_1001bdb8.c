/* FUN_1001bdb8 @ 0x1001bdb8 */

void FUN_1001bdb8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r3;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_r10;
  uint unaff_r11;
  undefined1 local_64;
  undefined1 auStack_63 [21];
  undefined1 auStack_4e [26];
  int local_34;
  
  piVar7 = DAT_1001bf20;
  piVar1 = DAT_1001bf18;
  local_34 = *DAT_1001bf10;
  uVar5 = (DAT_1001bf14 - DAT_1001bf1c) * 0x20 & 0xff00;
  if ((*DAT_1001bf18 == 0) && (*DAT_1001bf20 == 0)) {
    FUN_100a5b78(DAT_1001bf24 | uVar5,PTR_s_FindPhoneStr_1001bf2c,PTR_s_no_pbbook_1001bf28);
  }
  else {
    iVar3 = *DAT_1001bf20 * 0x30 + *DAT_1001bf18;
    local_64 = FUN_1011ea10(param_1);
    uVar2 = FUN_1013d3f0(auStack_63,param_1,0x2f);
    FUN_100a5b78(uVar5 | 0x28c0032,PTR_s_FindPhoneStr_1001bf2c,PTR_s_pbIn____s___s_1001bf30,
                 auStack_4e,uVar2);
    FUN_100a5b78(DAT_1001bf34 | uVar5,PTR_s_FindPhoneStr_1001bf2c,DAT_1001bf38,iVar3 + -0x4a,
                 iVar3 + -0x5f);
    iVar3 = FUN_1001bbe0(iVar3 + -0x60,&local_64);
    if (-1 < iVar3) {
      param_1 = 0;
      iVar6 = 0;
      unaff_r10 = 0;
      iVar3 = 0;
      piVar7 = (int *)(*piVar7 + -2);
      unaff_r11 = uVar5 | 0x29c0032;
      goto LAB_1001be6a;
    }
  }
LAB_1001bdf8:
  uVar2 = 0;
  do {
    if (*DAT_1001bf10 == local_34) {
      return;
    }
    FUN_1013cdc0(uVar2);
    iVar4 = extraout_r3;
    do {
      iVar6 = (unaff_r10 + (int)piVar7) / 2;
      FUN_100a5b78(unaff_r11,PTR_s_FindPhoneStr_1001bf2c);
      iVar3 = FUN_1001bbe0(iVar6 * 0x30 + iVar4,&local_64);
      param_1 = param_1 + 1;
      if (iVar3 == 1) {
        piVar7 = (int *)(iVar6 + -1);
      }
      else {
        if (iVar3 != -1) break;
        unaff_r10 = iVar6 + 1;
      }
LAB_1001be6a:
      iVar4 = *piVar1;
    } while (unaff_r10 <= (int)piVar7);
    if (iVar3 != 0) break;
    piVar7 = (int *)(iVar6 * 0x30 + *piVar1 + 0x16);
    FUN_100a5b78(DAT_1001bf40 | uVar5,PTR_s_FindPhoneStr_1001bf2c,DAT_1001bf3c,param_1,iVar6,0,
                 piVar7);
    FUN_1011e9f0(param_2,piVar7);
    uVar2 = 1;
  } while( true );
  FUN_100a5b78(DAT_1001bf44 | uVar5,PTR_s_FindPhoneStr_1001bf2c,DAT_1001bf48,param_1,iVar3);
  goto LAB_1001bdf8;
}

