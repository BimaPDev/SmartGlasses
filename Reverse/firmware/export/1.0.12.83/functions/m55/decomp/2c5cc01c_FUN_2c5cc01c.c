/* FUN_2c5cc01c @ 0x2c5cc01c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cc01c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 extraout_s1;
  int iVar8;
  
  FUN_2c48e424(param_2,_LAB_2c5cc104);
  pcVar2 = (char *)FUN_2c48de10();
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5cc108);
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    else {
      iVar3 = FUN_2c66b624(pcVar2,_LAB_2c5cc10c);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5cc11c,0x634,_LAB_2c5cc120,_LAB_2c5cc124);
      }
      uVar6 = 2;
    }
    uVar4 = FUN_2c5c685c();
    func_0x2c5c6e78(uVar4,uVar6);
    iVar3 = FUN_2c48e42c(param_2,_LAB_2c5cc110);
    uVar1 = _LAB_2c5cc128;
    uVar4 = _LAB_2c5cc118;
    uVar6 = _LAB_2c5cc114;
    if (iVar3 != 0) {
      for (piVar7 = *(int **)(iVar3 + 8); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
        uVar5 = FUN_2c48e42c(piVar7,uVar6);
        iVar3 = FUN_2c48e83c();
        if (iVar3 != 0) {
          uVar5 = FUN_2c48de20(uVar5);
          iVar8 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar5),3);
          FUN_2c48e42c(piVar7,uVar4);
          iVar3 = FUN_2c48e80c();
          if (iVar8 - 1U < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c5cc11c,0x641,_LAB_2c5cc120,uVar1,iVar8,iVar3 != 0);
          }
        }
      }
    }
  }
  return;
}

