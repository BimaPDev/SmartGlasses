/* FUN_2c670968 @ 0x2c670968 */

void FUN_2c670968(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c6706e0(param_1,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c670990,0x140,0,DAT_2c67098c);
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}

