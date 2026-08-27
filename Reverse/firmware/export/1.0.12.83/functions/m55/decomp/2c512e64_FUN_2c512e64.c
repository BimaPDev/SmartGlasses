/* FUN_2c512e64 @ 0x2c512e64 */

void FUN_2c512e64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *DAT_2c5130c8;
  iVar1 = FUN_2c48e3b8(param_2,param_2,param_3,0);
  if (iVar1 == 0) {
    if (*DAT_2c5130c8 == iVar4) {
      return;
    }
  }
  else {
    iVar2 = FUN_2c48e424(iVar1,DAT_2c5130cc);
    if (iVar2 != 0) {
      FUN_2c518808(*(undefined4 *)(iVar2 + 0x14));
      uVar3 = FUN_2c5187ec();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5130d8,0x7d,DAT_2c5130d0,DAT_2c5130d4,DAT_2c5130d0,uVar3);
    }
    if (*DAT_2c5130c8 == iVar4) {
      FUN_2c48dea0(iVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

