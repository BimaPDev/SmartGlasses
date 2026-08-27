/* FUN_2c639338 @ 0x2c639338 */

void FUN_2c639338(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int local_14;
  
  if (*(int *)(param_1 + 0x24) != param_2) {
    if (*(int *)(param_1 + 0x2c) <= param_2) {
      param_2 = *(int *)(param_1 + 0x2c);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x30)) {
      iVar1 = *(int *)(param_1 + 0x30);
    }
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    if (*(int *)(param_1 + 0x24) != param_2) {
      if (param_3 == 0) {
        *(int *)(param_1 + 0x24) = param_2;
        FUN_2c607df0();
        return;
      }
      local_14 = *DAT_2c6392a4;
      if (*(int *)(param_1 + 0x48) == -1) {
        iVar1 = *(int *)(param_1 + 0x24);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x40) = iVar1;
      *(int *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x24) = param_2;
      FUN_2c62e838(param_1 + 0x3c,0);
      FUN_2c62e7b4(&local_58);
      local_54 = DAT_2c6392a8;
      local_38 = 0;
      local_34 = 0;
      uStack_30 = 0x100;
      local_4c = DAT_2c6392ac;
      local_58 = param_1 + 0x3c;
      local_2c = FUN_2c6033b4(param_1,0,100);
      if (*(int *)(param_1 + 0x4c) != 0) {
        local_3c = *(int *)(param_1 + 0x4c);
      }
      FUN_2c62e8ec(&local_58);
      if (*DAT_2c6392a4 != local_14) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
  }
  return;
}

