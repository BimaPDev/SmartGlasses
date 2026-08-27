/* FUN_2c5c6cc4 @ 0x2c5c6cc4 */

void FUN_2c5c6cc4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x492) = 0;
    FUN_2c59594c();
  }
  else {
    *(undefined1 *)(param_1 + 0x492) = 1;
    FUN_2c5c55d8();
    uVar1 = FUN_2c5c5b3c();
    iVar2 = FUN_2c66b624(uVar1,DAT_2c5c6d44);
    if (((iVar2 != 0) && (iVar2 = FUN_2c66b624(uVar1,DAT_2c5c6d48), iVar2 != 0)) &&
       (iVar2 = FUN_2c66b624(uVar1,DAT_2c5c6d4c), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5c6d54,0x1bc,DAT_2c5c6d58,DAT_2c5c6d50);
    }
    FUN_2c5958dc();
  }
  if ((param_2 != 0) && (*(char *)(param_1 + 0x268) != '\0')) {
    FUN_2c5d51e4(param_1 + 8,0,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  }
  FUN_2c5d3990(param_1 + 0x150,param_2,param_3,param_4);
  return;
}

