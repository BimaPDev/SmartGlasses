/* FUN_1003feb0 @ 0x1003feb0 */

int FUN_1003feb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r5;
  
  iVar4 = *DAT_1003ffa0;
  iVar1 = FUN_1001238c();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(DAT_1003ffb4 + 0x30))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(DAT_1003ffbc + 0x28))();
      if (iVar1 == 0) {
        unaff_r5 = (**(code **)(DAT_1003ffc4 + 8))();
        if ((unaff_r5 - 0x54U & 0xffff) < 0x1c) {
          if (-1 < (int)((DAT_1003ffcc >> (unaff_r5 - 0x54U & 0xff)) << 0x1f)) goto LAB_1003ff38;
          goto LAB_1003ff60;
        }
        if (unaff_r5 == 0x4e) goto LAB_1003ff8e;
        goto LAB_1003ff38;
      }
      uVar2 = (DAT_1003ffa4 - DAT_1003ffa8) * 0x20 & 0xff00U | 0x240000;
      uVar3 = DAT_1003ffc0;
    }
    else {
      uVar2 = (DAT_1003ffa4 - DAT_1003ffa8) * 0x20 & 0xff00U | 0x1e0000;
      uVar3 = DAT_1003ffb8;
    }
  }
  else {
    uVar2 = (DAT_1003ffa4 - DAT_1003ffa8) * 0x20 & 0xff00U | 0x190000;
    uVar3 = DAT_1003ffac;
  }
  do {
    FUN_100a5b78(uVar2 | 0x31,DAT_1003ffb0,uVar3,DAT_1003ffa8,param_1,iVar4,param_3);
    do {
      while( true ) {
        if (*DAT_1003ffa0 == iVar4) {
          return iVar1;
        }
        FUN_1013cdc0();
LAB_1003ff8e:
        iVar1 = FUN_1004bed4();
        if (iVar1 == 0) break;
LAB_1003ff60:
        FUN_100a5b78((DAT_1003ffa4 - DAT_1003ffa8) * 0x20 & 0xff00U | 0x2d0031,DAT_1003ffb0,
                     DAT_1003ffd0,unaff_r5);
        iVar1 = 1;
      }
LAB_1003ff38:
      iVar1 = FUN_1004b7d8();
    } while (iVar1 == 0);
    uVar2 = (DAT_1003ffa4 - DAT_1003ffa8) * 0x20 & 0xff00U | 0x330000;
    uVar3 = DAT_1003ffc8;
  } while( true );
}

