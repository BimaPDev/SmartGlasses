/* FUN_100534e0 @ 0x100534e0 */

void FUN_100534e0(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r3;
  uint unaff_r4;
  uint uVar4;
  undefined1 *unaff_r6;
  undefined1 *unaff_r11;
  undefined1 *puVar5;
  undefined1 *local_d8;
  undefined4 local_cc;
  undefined1 auStack_c8 [28];
  undefined4 local_ac;
  undefined1 auStack_a8 [124];
  int local_2c;
  
  local_2c = *DAT_1005360c;
  if (((param_1 == (undefined4 *)0x0) || (param_3 == 0)) || (param_5 == (uint *)0x0)) {
    uVar1 = 0xffffffea;
    goto LAB_100535be;
  }
  unaff_r4 = FUN_10118a1c(param_3,param_4,DAT_10053610,0);
  if (((int)unaff_r4 < 0) || (param_4 <= unaff_r4)) {
    uVar1 = 0xfffffff9;
    goto LAB_100535be;
  }
  param_2 = param_1 + (int)param_2 * 0x13;
  local_d8 = (undefined1 *)((int)param_2 + 10);
  unaff_r6 = (undefined1 *)((int)param_1 + 10);
LAB_1005352c:
  uVar4 = unaff_r4;
  if (unaff_r6 == local_d8) goto LAB_100535a0;
  param_2 = (undefined4 *)0x0;
  local_cc = 0;
  FUN_1011ea48(auStack_c8,0,0x1c);
  local_ac = 0;
  FUN_1011ea48(auStack_a8,0,0x7c);
  FUN_10053120(*(undefined4 *)(unaff_r6 + -10),&local_cc,0x20);
  param_1 = &local_ac;
  puVar5 = unaff_r6;
  do {
    uVar3 = (uint)*(ushort *)(unaff_r6 + -2);
    uVar4 = unaff_r4;
    unaff_r11 = puVar5;
    if (((uint)param_2 & 0xffff) < uVar3) goto LAB_100535cc;
    do {
      uVar1 = FUN_10053090(unaff_r6[-4]);
      param_2 = (undefined4 *)(param_3 + uVar4);
      unaff_r11 = (undefined1 *)(param_4 - uVar4);
      iVar2 = FUN_10118a1c(param_2,unaff_r11,DAT_10053614,&local_cc,uVar1,
                           *(undefined2 *)(unaff_r6 + -6),unaff_r6[-3],uVar3,param_1);
      if (-1 < iVar2) {
        unaff_r4 = iVar2 + uVar4;
        unaff_r6 = unaff_r6 + 0x4c;
        if (unaff_r4 < param_4) goto LAB_1005352c;
      }
LAB_100535a0:
      iVar2 = FUN_10118a1c(param_3 + uVar4,param_4 - uVar4,DAT_10053618);
      unaff_r4 = uVar4;
      if ((-1 < iVar2) && (iVar2 + uVar4 < param_4)) {
        unaff_r4 = iVar2 + uVar4;
      }
      uVar1 = 0;
      *param_5 = unaff_r4;
LAB_100535be:
      if (*DAT_1005360c == local_2c) {
        return;
      }
      FUN_1013cdc0(uVar1);
      uVar3 = extraout_r3;
LAB_100535cc:
      uVar4 = unaff_r4;
    } while (param_2 == (undefined4 *)&Reserved2);
    puVar5 = unaff_r11 + 1;
    FUN_10118a1c((int)param_1 + (int)param_2 * 2,(int)param_2 * -2 + 0x80,DAT_1005361c,*unaff_r11);
    param_2 = (undefined4 *)((int)param_2 + 1);
  } while( true );
}

