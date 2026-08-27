/* FUN_1405b0a8 @ 0x1405b0a8 */

void FUN_1405b0a8(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = *DAT_1405b0e8;
  iVar1 = FUN_1405b26c(param_1,param_2,param_4,0x1c,DAT_1405b0ec,&local_10);
  if (iVar1 == 0) {
    *(undefined2 *)(local_10 + 0x18) = param_3;
  }
  if (*DAT_1405b0e8 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

