/* FUN_100a8428 @ 0x100a8428 */

undefined4 FUN_100a8428(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a84c0,0x242,DAT_100a84bc,DAT_100a84b8);
  }
  uVar2 = (DAT_100a84c8 - DAT_100a84c4) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0x2440031,DAT_100a84d0,DAT_100a84cc,param_1);
  FUN_100a7a0c();
  iVar1 = FUN_100a7d20(param_1);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_1006446c();
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_100a0a70();
      FUN_100a0b00(*(undefined4 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_1012f4f2();
    }
    FUN_1012d1f4(param_1);
    FUN_100a7a24();
    FUN_100a5b78(DAT_100a84d8 | uVar2,DAT_100a84d0,DAT_100a84dc,param_1);
    uVar3 = 0;
  }
  else {
    FUN_100a5b78(uVar2 | 0x2480011,DAT_100a84d0,DAT_100a84d4);
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}

