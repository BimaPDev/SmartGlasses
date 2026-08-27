/* FUN_2c5ddb1c @ 0x2c5ddb1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ddb1c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_14 [2];
  
  aiStack_14[0] = param_2;
  iVar1 = FUN_2c5dd26c(param_1,param_3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ddb78,0xeb,_LAB_2c5ddb74,_LAB_2c5ddb70,param_3);
  }
  *(int *)(aiStack_14[0] + 8) = param_1;
  *(undefined4 *)(aiStack_14[0] + 0xc) = param_3;
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 8)) {
    *piVar2 = aiStack_14[0];
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return 1;
  }
  FUN_2c5dda50(param_1,piVar2,aiStack_14);
  return 1;
}

