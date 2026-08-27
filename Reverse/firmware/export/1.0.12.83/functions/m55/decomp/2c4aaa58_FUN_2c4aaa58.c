/* FUN_2c4aaa58 @ 0x2c4aaa58 */

undefined4 FUN_2c4aaa58(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_16;
  int local_14;
  
  uVar3 = 0;
  local_14 = *DAT_2c4aaab4;
  iVar1 = (**(code **)(param_1 + 0x36c))();
  local_16 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(param_1 + 0x368))(uVar3);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x33c))(param_1,uVar3,&local_16);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < iVar1);
  }
  if (*DAT_2c4aaab4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

