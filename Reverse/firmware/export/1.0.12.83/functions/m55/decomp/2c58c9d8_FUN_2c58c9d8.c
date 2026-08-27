/* FUN_2c58c9d8 @ 0x2c58c9d8 */

int * FUN_2c58c9d8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *local_3c;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  local_24 = *DAT_2c58cabc;
  iVar2 = (**(code **)*param_2)(param_2);
  if (iVar2 == 0) {
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (int)(param_1 + 2);
    goto LAB_2c58ca46;
  }
  puVar3 = (undefined1 *)FUN_2c48e3e8();
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c58cac0);
  }
  uVar4 = FUN_2c66c4ec();
  piVar1 = DAT_2c58cac4;
  if (uVar4 < 0x10) {
    local_3c = &local_34;
    if (uVar4 == 1) {
      local_34 = CONCAT31(local_34._1_3_,*puVar3);
    }
    else if (uVar4 != 0) goto LAB_2c58ca76;
  }
  else {
    if (*DAT_2c58cac4 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    local_3c = (uint *)FUN_2c47245c(0,uVar4 + 1);
    local_34 = uVar4;
LAB_2c58ca76:
    FUN_2c674668(local_3c,puVar3,uVar4);
  }
  *(undefined1 *)((int)local_3c + uVar4) = 0;
  FUN_2c48e87c(puVar3);
  FUN_2c48dea0(iVar2);
  *param_1 = (int)(param_1 + 2);
  if (local_3c == &local_34) {
    param_1[2] = local_34;
    param_1[3] = iStack_30;
    param_1[4] = iStack_2c;
    param_1[5] = iStack_28;
  }
  else {
    *param_1 = (int)local_3c;
    param_1[2] = local_34;
  }
  param_1[1] = uVar4;
LAB_2c58ca46:
  if (*DAT_2c58cabc != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

