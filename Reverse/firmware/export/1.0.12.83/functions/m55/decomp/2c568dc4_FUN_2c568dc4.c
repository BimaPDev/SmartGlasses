/* FUN_2c568dc4 @ 0x2c568dc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c568dc4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c568df8;
  iVar2 = (int)param_1 + *(int *)(*param_1 + -0x50);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x50)) = _LAB_2c568df4;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  if (*(int *)(iVar2 + 0x10) != iVar2 + 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar2);
}

