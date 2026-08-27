/* FUN_2c550298 @ 0x2c550298 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c550298(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uStack_18;
  int iStack_14;
  
  piVar1 = param_1 + 2;
  iStack_14 = *_LAB_2c55030c;
  *param_1 = (int)piVar1;
  puVar3 = *(undefined1 **)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c550310,param_2,param_3,0);
  }
  uStack_18 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar3;
      goto LAB_2c5502c6;
    }
    if (uVar2 == 0) goto LAB_2c5502c6;
  }
  else {
    piVar1 = (int *)FUN_2c54f538(&uStack_18,0);
    *param_1 = (int)piVar1;
    param_1[2] = uStack_18;
  }
  FUN_2c674668(piVar1,puVar3,uVar2);
  piVar1 = (int *)*param_1;
LAB_2c5502c6:
  param_1[1] = uStack_18;
  *(undefined1 *)((int)piVar1 + uStack_18) = 0;
  if (*_LAB_2c55030c != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

