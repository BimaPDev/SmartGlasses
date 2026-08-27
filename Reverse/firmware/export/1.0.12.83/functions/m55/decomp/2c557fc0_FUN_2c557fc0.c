/* FUN_2c557fc0 @ 0x2c557fc0 */

void FUN_2c557fc0(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_20;
  int local_1c;
  
  puVar2 = param_1 + 2;
  local_1c = *DAT_2c558038;
  *param_1 = puVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c55803c,0,param_3,0);
  }
  uVar1 = FUN_2c66c4ec(param_2);
  local_20 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_2c557ff0;
    }
    if (uVar1 == 0) goto LAB_2c557ff0;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c557f50(&local_20,0);
    *param_1 = puVar2;
    param_1[2] = local_20;
  }
  FUN_2c674668(puVar2,param_2,uVar1);
  puVar2 = (undefined4 *)*param_1;
LAB_2c557ff0:
  param_1[1] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  if (*DAT_2c558038 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

