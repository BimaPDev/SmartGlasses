/* FUN_10053344 @ 0x10053344 */

void FUN_10053344(int param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint unaff_r4;
  uint uVar6;
  uint unaff_r6;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined4 local_4c;
  undefined1 auStack_48 [28];
  int local_2c;
  
  local_2c = *DAT_100534a4;
  if (((param_1 == 0) || (param_3 == 0)) || (param_5 == (uint *)0x0)) {
    uVar3 = 0xffffffea;
    goto LAB_100533fa;
  }
  unaff_r6 = (DAT_100534ac - DAT_100534a8) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100534b0 | unaff_r6,DAT_100534b8,DAT_100534b4,DAT_100534bc,0x14b);
  unaff_r4 = FUN_10118a1c(param_3,param_4,DAT_100534c0);
  if (((int)unaff_r4 < 0) || (param_4 <= unaff_r4)) {
    uVar3 = 0xfffffff9;
    goto LAB_100533fa;
  }
  FUN_100a5b78(DAT_100534c4 | unaff_r6,DAT_100534b8,DAT_100534c8,DAT_100534bc,0x153,param_2);
  unaff_r9 = 0;
  param_1 = param_1 + 10;
  unaff_r6 = unaff_r6 | 0x16e0033;
  do {
    unaff_r11 = param_4 - unaff_r4;
    unaff_r10 = param_3 + unaff_r4;
    uVar6 = unaff_r4;
    if (param_2 != unaff_r9) goto LAB_10053408;
    do {
      do {
        iVar2 = FUN_10118a1c(unaff_r10,unaff_r11,DAT_100534cc);
        unaff_r4 = uVar6;
        if ((-1 < iVar2) && (iVar2 + uVar6 < param_4)) {
          unaff_r4 = iVar2 + uVar6;
        }
        uVar3 = 0;
        *param_5 = unaff_r4;
LAB_100533fa:
        if (*DAT_100534a4 == local_2c) {
          return;
        }
        FUN_1013cdc0(uVar3);
        uVar6 = unaff_r4;
LAB_10053408:
        local_4c = 0;
        FUN_1011ea48(auStack_48,0,0x1c);
        FUN_10053120(*(undefined4 *)(param_1 + -10),&local_4c,0x20);
        uVar1 = *(undefined1 *)(param_1 + -4);
        uVar4 = FUN_10053090(uVar1);
        uVar5 = FUN_100530d8(uVar1,*(undefined2 *)(param_1 + -6));
        uVar3 = DAT_100534d4;
        if (param_2 + -1 <= unaff_r9) {
          uVar3 = DAT_100534d0;
        }
        iVar2 = FUN_10118a1c(unaff_r10,unaff_r11,DAT_100534d8,&local_4c,uVar4,uVar5,param_1,uVar3);
        uVar3 = FUN_100530d8(*(undefined1 *)(param_1 + -4),*(undefined2 *)(param_1 + -6));
        FUN_100a5b78(unaff_r6,DAT_100534b8,DAT_100534dc,unaff_r9,unaff_r10,uVar3);
      } while (iVar2 < 0);
      unaff_r4 = iVar2 + uVar6;
      unaff_r9 = unaff_r9 + 1;
      param_1 = param_1 + 0x4c;
    } while (param_4 <= unaff_r4);
  } while( true );
}

