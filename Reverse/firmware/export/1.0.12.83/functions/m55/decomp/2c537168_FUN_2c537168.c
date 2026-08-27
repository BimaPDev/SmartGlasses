/* FUN_2c537168 @ 0x2c537168 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c537168(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = *(int **)(param_2 + 4);
  piVar3[0x19] = 0;
  (**(code **)(*piVar3 + 8))(piVar3,param_3);
  iVar1 = FUN_2c53c04c(piVar3);
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  uVar2 = FUN_2c5e2e4c(_LAB_2c5372ec);
  FUN_2c53cff4(piVar3,uVar2);
  uVar2 = FUN_2c5e2e4c(_DAT_2c5372f0);
  FUN_2c53cf24(piVar3,uVar2);
  iVar1 = FUN_2c53c064(piVar3);
  if (iVar1 == 0) {
    FUN_2c53c700(piVar3);
  }
  piVar3[0x10] = 0;
  piVar3[0x12] = 0;
  piVar3[0x13] = 0;
  if (piVar3[0x14] == 0) {
    iVar1 = FUN_2c62bdd8(_LAB_2c537318,1000,piVar3);
    piVar3[0x14] = iVar1;
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
    FUN_2c62be4c(piVar3[0x14]);
  }
  if ((char)piVar3[0x1a] == '\0') {
    param_1 = param_1 + 0xcc;
    iVar1 = FUN_2c530d48(param_1);
    if (iVar1 == 0) {
      iVar1 = func_0x2c530d4c(param_1);
    }
    else {
      iVar1 = FUN_2c530d48(param_1);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_2c530d48(param_1);
      pcVar4 = *(char **)(*(int *)(iVar1 + 8) + 0x1c);
      iVar1 = FUN_2c530d48(param_1);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        uVar2 = FUN_2c5dc51c(pcVar4,1);
        FUN_2c53c868(piVar3);
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(4,uVar2);
      }
      FUN_2c53c868(piVar3,*(int *)(iVar1 + 8) + 5);
    }
    FUN_2c53c8a4(piVar3,_LAB_2c5372f4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_2c53d3f4(piVar3,_LAB_2c5372f4);
  iVar1 = registry_lookup(0x6129);
  if (piVar3[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53d468,0x41b,DAT_2c53d464,DAT_2c53d460);
  }
  if (iVar1 != 0) {
    FUN_2c638730();
    return;
  }
  FUN_2c638730(piVar3[0x18],DAT_2c53d45c);
  return;
}

