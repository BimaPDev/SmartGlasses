/* FUN_1407b1a0 @ 0x1407b1a0 */

undefined4 FUN_1407b1a0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  switch(param_1) {
  case 1:
    break;
  case 2:
    if (param_2 == 4) {
      return 0x1f;
    }
    if (param_2 < 5) {
      uVar1 = param_2 - 1;
      if (uVar1 < 2) {
        return 0x35;
      }
    }
    else if (param_2 == 8) {
      return 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1407b210,param_2,uVar1,param_4);
  default:
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1407b20c,param_1,uVar1,param_4);
  case 4:
  case 8:
    return 0x35;
  }
  if (param_2 == 4) {
    return 0x1d;
  }
  if (param_2 < 5) {
    uVar1 = param_2 - 1;
    if (uVar1 < 2) {
      return 0x33;
    }
  }
  else if (param_2 == 8) {
    return 0x1d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1407b210,param_2,uVar1,param_4);
}

