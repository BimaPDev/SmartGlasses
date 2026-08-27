/* FUN_2c580298 @ 0x2c580298 */

int * FUN_2c580298(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint local_18;
  int local_14;
  
  piVar1 = param_1 + 2;
  local_14 = *DAT_2c580314;
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 4);
  *param_1 = (int)piVar1;
  puVar4 = *(undefined1 **)(iVar2 + 0x20);
  uVar3 = *(uint *)(iVar2 + 0x24);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c580318);
  }
  local_18 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar4;
      goto LAB_2c5802cc;
    }
    if (uVar3 == 0) goto LAB_2c5802cc;
  }
  else {
    piVar1 = (int *)FUN_2c57fec8(&local_18,0);
    *param_1 = (int)piVar1;
    param_1[2] = local_18;
  }
  FUN_2c674668(piVar1,puVar4,uVar3);
  piVar1 = (int *)*param_1;
LAB_2c5802cc:
  param_1[1] = local_18;
  *(undefined1 *)((int)piVar1 + local_18) = 0;
  if (*DAT_2c580314 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

