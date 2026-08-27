/* FUN_2c568d64 @ 0x2c568d64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c568d64(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c568d90;
  iVar2 = (int)param_1 + *(int *)(*param_1 + -0x50);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x50)) = _LAB_2c568d8c;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  if (*(int *)(iVar2 + 0x10) != iVar2 + 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar2;
}

