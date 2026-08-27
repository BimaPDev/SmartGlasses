/* FUN_2c57360c @ 0x2c57360c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c57360c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uStack_18;
  int iStack_14;
  
  piVar1 = param_1 + 2;
  iStack_14 = *_LAB_2c573688;
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 4);
  *param_1 = (int)piVar1;
  puVar4 = *(undefined1 **)(iVar2 + 0x1c);
  uVar3 = *(uint *)(iVar2 + 0x20);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c57368c);
  }
  uStack_18 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar4;
      goto LAB_2c573640;
    }
    if (uVar3 == 0) goto LAB_2c573640;
  }
  else {
    piVar1 = (int *)FUN_2c573300(&uStack_18,0);
    *param_1 = (int)piVar1;
    param_1[2] = uStack_18;
  }
  FUN_2c674668(piVar1,puVar4,uVar3);
  piVar1 = (int *)*param_1;
LAB_2c573640:
  param_1[1] = uStack_18;
  *(undefined1 *)((int)piVar1 + uStack_18) = 0;
  if (*_LAB_2c573688 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

