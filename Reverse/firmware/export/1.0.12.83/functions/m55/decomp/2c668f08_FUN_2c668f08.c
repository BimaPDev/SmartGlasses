/* FUN_2c668f08 @ 0x2c668f08 */

void FUN_2c668f08(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *DAT_2c668f38;
  if (*(int *)(iVar1 + 0x3c) == 0) {
    param_3 = FUN_2c669578(0x24);
    *(int *)(iVar1 + 0x3c) = param_3;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c668484(DAT_2c668f40,0x39,0,DAT_2c668f3c);
    }
  }
  FUN_2c668f44(param_1,*(undefined4 *)(iVar1 + 0x3c),param_3,param_4);
  return;
}

