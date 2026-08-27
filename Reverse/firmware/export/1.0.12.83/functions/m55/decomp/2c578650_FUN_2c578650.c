/* FUN_2c578650 @ 0x2c578650 */

void FUN_2c578650(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c5786c4;
  if ((param_3 != 0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5786c8,0,param_3,0);
  }
  uVar2 = param_3 - (int)param_2;
  local_18 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      puVar1 = (undefined1 *)*param_1;
      goto LAB_2c57867e;
    }
    if (uVar2 == 0) goto LAB_2c57867e;
  }
  else {
    puVar1 = (undefined1 *)FUN_2c578574(&local_18,0);
    *param_1 = puVar1;
    param_1[2] = local_18;
  }
  FUN_2c674668(puVar1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_1;
LAB_2c57867e:
  param_1[1] = local_18;
  puVar1[local_18] = 0;
  if (*DAT_2c5786c4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

