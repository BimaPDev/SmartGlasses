/* FUN_10026ff8 @ 0x10026ff8 */

/* WARNING: Removing unreachable block (ram,0x100418b2) */

undefined4 FUN_10026ff8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_10027078;
  uVar1 = FUN_100a5b78((DAT_10027070 - DAT_10027074) * 0x20 & 0xff00U | 0x2240031,DAT_10027080,
                       DAT_1002707c,param_1,param_1,iVar3,param_3);
  if (param_1 == 0x81) {
    if (*DAT_10027078 == iVar3) goto LAB_10027048;
  }
  else if (param_1 == 0x84) {
    if (*DAT_10027078 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x1002706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)**(undefined4 **)(DAT_10027084 + 0x30))();
      return uVar1;
    }
  }
  else if (*DAT_10027078 == iVar3) {
    return uVar1;
  }
  FUN_1013cdc0();
LAB_10027048:
  iVar3 = DAT_100418ec;
  iVar4 = *DAT_100418e8;
  uVar1 = (**(code **)(DAT_100418ec + 8))();
  FUN_100a5b78(DAT_100418f8 | (DAT_100418f0 - DAT_100418f4) * 0x20 & 0xff00U,DAT_10041900,
               DAT_100418fc,param_1,uVar1);
  if (param_1 == 0x84) {
    iVar2 = FUN_100410c0();
    if (iVar2 == 0) {
      (**(code **)(iVar3 + 4))();
    }
  }
  else if (param_1 != 0x88) goto LAB_100418d4;
  while (*DAT_100418e8 != iVar4) {
    FUN_1013cdc0();
LAB_100418d4:
    iVar3 = FUN_1002f010();
    if (iVar3 != 0) {
      FUN_100417d4(iVar3,param_1);
    }
  }
  return 0;
}

