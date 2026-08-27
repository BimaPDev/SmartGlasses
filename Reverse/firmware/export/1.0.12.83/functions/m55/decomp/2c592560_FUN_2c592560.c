/* FUN_2c592560 @ 0x2c592560 */

void FUN_2c592560(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint local_38;
  uint *local_34;
  uint local_30;
  uint local_2c [4];
  int local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  local_1c = *DAT_2c5925f0;
  puVar2 = (undefined1 *)*param_2;
  uVar1 = param_2[1];
  local_34 = local_2c;
  if ((puVar2 + uVar1 != (undefined1 *)0x0) && (puVar2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5925f4,param_2,param_3,0);
  }
  local_38 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,*puVar2);
      goto LAB_2c592592;
    }
    if (uVar1 == 0) goto LAB_2c592592;
  }
  else {
    local_34 = (uint *)FUN_2c591d68(&local_38,0);
    local_2c[0] = local_38;
  }
  FUN_2c674668(local_34,puVar2,uVar1);
LAB_2c592592:
  *(undefined1 *)((int)local_34 + local_38) = 0;
  local_30 = local_38;
  FUN_2c58eb30(uVar3,&local_34);
  if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5925f0 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

