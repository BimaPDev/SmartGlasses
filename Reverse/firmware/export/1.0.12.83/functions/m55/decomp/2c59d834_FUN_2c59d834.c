/* FUN_2c59d834 @ 0x2c59d834 */

void FUN_2c59d834(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  int local_14;
  
  uVar1 = DAT_2c59d890;
  local_14 = *DAT_2c59d888;
  local_18 = 0;
  local_20 = 0;
  uStack_1c = 0;
  FUN_2c66b4b8(&local_20,DAT_2c59d88c,param_2,0);
  uVar2 = FUN_2c66c4ec(&local_20);
  FUN_2c5dc53c(0xc,2,uVar2,&local_20,uVar1,0);
  FUN_2c5dc5e0();
  if (*DAT_2c59d888 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

