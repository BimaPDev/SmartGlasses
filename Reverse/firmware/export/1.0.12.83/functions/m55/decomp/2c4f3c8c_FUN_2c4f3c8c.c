/* FUN_2c4f3c8c @ 0x2c4f3c8c */

void FUN_2c4f3c8c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c4f3ce0;
  iVar1 = FUN_2c4f23d8(param_1,param_3,param_1 + 0x48,0);
  if (iVar1 == 0) {
    local_18 = param_3 + 0x18;
    local_1c = DAT_2c4f3ce4 | (*(byte *)(param_3 + 0x17) + 0x600) * 0x100000;
    FUN_2c4f384c(param_1,param_2,&local_1c,1);
  }
  if (*DAT_2c4f3ce0 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

