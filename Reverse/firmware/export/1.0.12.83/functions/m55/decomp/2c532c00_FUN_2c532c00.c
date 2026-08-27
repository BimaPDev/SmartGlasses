/* FUN_2c532c00 @ 0x2c532c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c532c00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0xc) == iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c532e04,0x105,_LAB_2c532e00,_LAB_2c532dfc);
  }
  if (iVar2 == *(int *)(param_1 + 0x20)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + -4) + 500;
  }
  if (*(int **)(iVar2 + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0x10) + 0x1c))();
  }
  if (*(int **)(iVar2 + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0x14) + 0x1c))();
  }
  piVar3 = *(int **)(iVar2 + -0xc);
  FUN_2c5e8d5c(7,_LAB_2c532dd8,piVar3);
  FUN_2c5e8fb0(7,0,1);
  pcVar5 = *(code **)(*piVar3 + 8);
  uVar1 = func_0x2c5e8ccc();
  (*pcVar5)(piVar3,uVar1);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar1 = FUN_2c5e2e4c(_LAB_2c532ddc);
  FUN_2c53cff4(piVar3,uVar1);
  if (param_2 < 2) {
    if (-1 < param_2) {
      uVar1 = FUN_2c5e2e4c(_LAB_2c532df0);
      FUN_2c53cf24(piVar3,uVar1);
      iVar2 = FUN_2c530d48(param_1 + 0x2c);
      goto joined_r0x2c532d4a;
    }
  }
  else if (param_2 == 2) {
    uVar1 = FUN_2c5e2e4c(_LAB_2c532de0);
    FUN_2c53cf24(piVar3,uVar1);
  }
  iVar2 = FUN_2c530d48(param_1 + 0x2c);
joined_r0x2c532d4a:
  if (iVar2 == 0) {
    iVar2 = func_0x2c530d4c(param_1 + 0x2c);
  }
  else {
    iVar2 = FUN_2c530d48(param_1 + 0x2c);
  }
  if (iVar2 != 0) {
    iVar2 = FUN_2c530d48(param_1 + 0x2c);
    iVar4 = *(int *)(*(int *)(iVar2 + 8) + 0x1c);
    iVar2 = FUN_2c530d48(param_1 + 0x2c);
    if (iVar4 != 0) {
      uVar1 = FUN_2c5dc51c(iVar4,1);
      FUN_2c53c868(piVar3);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(4,uVar1);
    }
    FUN_2c53c868(piVar3,*(int *)(iVar2 + 8) + 5);
  }
  FUN_2c53c8a4(piVar3,_LAB_2c532de4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

