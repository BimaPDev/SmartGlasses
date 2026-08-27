/* FUN_2c5cd87c @ 0x2c5cd87c */

int * FUN_2c5cd87c(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint local_18;
  int local_14;
  
  piVar1 = param_1 + 2;
  local_14 = *DAT_2c5cd8f0;
  *param_1 = (int)piVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x14);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5cd8f4,param_2,param_3,0);
  }
  local_18 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar3;
      goto LAB_2c5cd8aa;
    }
    if (uVar2 == 0) goto LAB_2c5cd8aa;
  }
  else {
    piVar1 = (int *)FUN_2c5cd62c(&local_18,0);
    *param_1 = (int)piVar1;
    param_1[2] = local_18;
  }
  FUN_2c674668(piVar1,puVar3,uVar2);
  piVar1 = (int *)*param_1;
LAB_2c5cd8aa:
  param_1[1] = local_18;
  *(undefined1 *)((int)piVar1 + local_18) = 0;
  if (*DAT_2c5cd8f0 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

