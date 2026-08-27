/* FUN_2c5922c4 @ 0x2c5922c4 */

void FUN_2c5922c4(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  local_24 = *DAT_2c5923c0;
  local_54 = local_4c;
  if (param_2 == (undefined1 *)0x0) goto LAB_2c59230e;
  uVar1 = FUN_2c66c4ec(param_2,param_2,param_3,0);
  local_58 = uVar1;
  if (uVar1 < 0x10) {
    puVar2 = local_4c;
    if (uVar1 == 1) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*param_2);
    }
    else if (uVar1 != 0) goto LAB_2c592388;
  }
  else {
    local_54 = (uint *)FUN_2c591d68(&local_58,0);
    local_4c[0] = local_58;
    puVar2 = local_54;
LAB_2c592388:
    FUN_2c674668(puVar2,param_2,uVar1);
    puVar2 = local_54;
  }
  *(undefined1 *)((int)puVar2 + local_58) = 0;
  local_50 = local_58;
  local_3c = local_34;
  if (param_3 == (undefined1 *)0x0) {
LAB_2c59230e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5923c4);
  }
  uVar1 = FUN_2c66c4ec(param_3);
  local_58 = uVar1;
  if (uVar1 < 0x10) {
    puVar2 = local_34;
    if (uVar1 == 1) {
      local_34[0] = CONCAT31(local_34[0]._1_3_,*param_3);
      goto LAB_2c592338;
    }
    if (uVar1 == 0) goto LAB_2c592338;
  }
  else {
    local_3c = (uint *)FUN_2c591d68(&local_58,0);
    local_34[0] = local_58;
    puVar2 = local_3c;
  }
  FUN_2c674668(puVar2,param_3,uVar1);
  puVar2 = local_3c;
LAB_2c592338:
  *(undefined1 *)((int)puVar2 + local_58) = 0;
  local_38 = local_58;
  FUN_2c58df70(uVar3,&local_54,&local_3c);
  if (local_3c != local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_54 == local_4c) {
    if (*DAT_2c5923c0 != local_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

