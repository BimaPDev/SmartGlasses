/* FUN_100ef6b0 @ 0x100ef6b0 */

undefined4 FUN_100ef6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar2 = DAT_100ef770;
  FUN_1011dbf4(DAT_100ef774,0xffffffff,param_3,param_4,param_4);
  if (*piVar2 == 0) {
    FUN_100a5b78((DAT_100ef77c - DAT_100ef778) * 0x20 & 0xff00U | 0x24c0021,DAT_100ef784,
                 DAT_100ef780);
    FUN_100ef27c();
    uVar3 = 0x78;
  }
  else {
    FUN_10138c00(1,0);
    FUN_10138c52();
    if ((-1 < *(char *)((int)piVar2 + 0xb)) && (*(code **)(*piVar2 + 0x28) != (code *)0x0)) {
      (**(code **)(*piVar2 + 0x28))(2);
    }
    sVar1 = *(short *)((int)piVar2 + 0xe);
    if ((sVar1 != 0) && (*(int *)(*piVar2 + 0x20) != 0)) {
      if (*DAT_100ef788 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10117c88(DAT_100ef794,0x25f,DAT_100ef790,DAT_100ef78c);
      }
      *DAT_100ef788 = *(int *)(*piVar2 + 0x20);
      *DAT_100ef798 = sVar1;
    }
    uVar4 = 0;
    do {
      FUN_100eeef4(uVar4 & 0xff);
      uVar4 = (uint)(char)((char)uVar4 + '\x01');
    } while ((int)uVar4 < (int)(*(byte *)(*piVar2 + 2) + 2));
    FUN_10138c00(2,0);
    FUN_1011ea48(DAT_100ef770,0,0x10);
    FUN_100a5b78(DAT_100ef79c | (DAT_100ef77c - DAT_100ef778) * 0x20 & 0xff00U,DAT_100ef784,
                 DAT_100ef7a0);
    FUN_100ef27c();
    uVar3 = 0;
  }
  return uVar3;
}

