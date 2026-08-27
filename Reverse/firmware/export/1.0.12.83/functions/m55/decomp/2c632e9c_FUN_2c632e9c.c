/* FUN_2c632e9c @ 0x2c632e9c */

void FUN_2c632e9c(int param_1)

{
  int iVar1;
  int local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  int local_20;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_2c632f14;
  iVar1 = FUN_2c6033b4(param_1,0x70000,100,0);
  if (iVar1 == 0) {
    FUN_2c62e838(param_1,DAT_2c632f18);
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
  }
  else {
    FUN_2c62e7b4(&local_58);
    local_54 = DAT_2c632f18;
    local_30 = 0;
    local_3c = DAT_2c632f1c;
    local_18 = 0xffff;
    local_38 = 1;
    uStack_34 = 1;
    local_58 = param_1;
    local_2c = iVar1;
    local_20 = iVar1;
    FUN_2c62e8ec(&local_58);
  }
  if (*DAT_2c632f14 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

