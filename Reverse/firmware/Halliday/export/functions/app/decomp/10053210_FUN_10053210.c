/* FUN_10053210 @ 0x10053210 */

void FUN_10053210(int param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  uint unaff_r5;
  uint uVar6;
  undefined1 *unaff_r6;
  undefined1 *unaff_r11;
  undefined1 *puVar7;
  undefined1 *local_dc;
  undefined4 local_cc;
  undefined1 auStack_c8 [28];
  undefined4 local_ac;
  undefined1 auStack_a8 [124];
  int local_2c;
  
  local_2c = *DAT_10053334;
  if (((param_1 == 0) || (param_3 == 0)) || (param_5 == (uint *)0x0)) {
    uVar2 = 0xffffffea;
    goto LAB_100532e4;
  }
  unaff_r5 = FUN_10118a1c(param_3,param_4,DAT_10053338,0);
  if (((int)unaff_r5 < 0) || (param_4 <= unaff_r5)) {
    uVar2 = 0xfffffff9;
    goto LAB_100532e4;
  }
  param_2 = param_2 * 0x4c + param_1;
  unaff_r6 = (undefined1 *)(param_1 + 10);
  local_dc = (undefined1 *)(param_2 + 10);
  param_1 = DAT_10053340;
LAB_10053260:
  uVar6 = unaff_r5;
  if (unaff_r6 == local_dc) goto LAB_100532de;
  param_2 = 0;
  local_cc = 0;
  FUN_1011ea48(auStack_c8,0,0x1c);
  local_ac = 0;
  FUN_1011ea48(auStack_a8,0,0x7c);
  FUN_10053120(*(undefined4 *)(unaff_r6 + -10),&local_cc,0x20);
  puVar7 = unaff_r6;
  do {
    uVar5 = (uint)*(ushort *)(unaff_r6 + -2);
    uVar6 = unaff_r5;
    unaff_r11 = puVar7;
    if ((param_2 & 0xffff) < uVar5) goto LAB_100532f2;
    do {
      uVar1 = unaff_r6[-4];
      uVar2 = FUN_10053090(uVar1);
      uVar3 = FUN_100530d8(uVar1,*(undefined2 *)(unaff_r6 + -6));
      unaff_r11 = (undefined1 *)(param_3 + uVar6);
      param_2 = param_4 - uVar6;
      iVar4 = FUN_10118a1c(unaff_r11,param_2,DAT_1005333c,&local_cc,uVar2,uVar3,unaff_r6[-3],uVar5,
                           &local_ac);
      if (-1 < iVar4) {
        unaff_r5 = iVar4 + uVar6;
        unaff_r6 = unaff_r6 + 0x4c;
        if (unaff_r5 < param_4) goto LAB_10053260;
      }
LAB_100532de:
      unaff_r5 = uVar6;
      uVar2 = 0;
      *param_5 = unaff_r5;
LAB_100532e4:
      if (*DAT_10053334 == local_2c) {
        return;
      }
      FUN_1013cdc0(uVar2);
      uVar5 = extraout_r3;
LAB_100532f2:
      uVar6 = unaff_r5;
    } while (param_2 == 0x20);
    puVar7 = unaff_r11 + 1;
    FUN_10118a1c(auStack_a8 + param_2 * 2 + -4,param_2 * -2 + 0x80,param_1,*unaff_r11);
    param_2 = param_2 + 1;
  } while( true );
}

