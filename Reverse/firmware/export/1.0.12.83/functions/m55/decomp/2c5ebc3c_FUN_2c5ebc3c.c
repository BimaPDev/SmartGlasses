/* FUN_2c5ebc3c @ 0x2c5ebc3c */

void FUN_2c5ebc3c(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = registry_lookup();
  piVar2 = DAT_2c5ebcdc;
  piVar1 = DAT_2c5ebcd8;
  if (iVar6 != 0) {
    iVar6 = *DAT_2c5ebcd8;
    *DAT_2c5ebcd8 = iVar6 + 1;
    uVar5 = DAT_2c5ebce8;
    uVar4 = DAT_2c5ebce4;
    uVar3 = DAT_2c5ebce0;
    iVar7 = *(int *)(*piVar2 + 0x54);
    if (iVar7 != 0) {
      do {
        if (((*(char *)(iVar7 + 0x58) == '\0') &&
            (iVar6 = FUN_2c5eb68c(*(undefined4 *)(iVar7 + 0x44)), iVar6 != 0)) &&
           (*(int *)(iVar7 + 0x40) == param_1)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,uVar5,0x14a,uVar4,uVar3,param_1);
        }
        iVar7 = *(int *)(iVar7 + 0x54);
      } while (iVar7 != 0);
      iVar6 = *piVar1 + -1;
    }
    *piVar1 = iVar6;
    if (iVar6 < 1) {
      iVar7 = *piVar2;
      iVar6 = *(int *)(iVar7 + 0x54);
      while (iVar8 = iVar7, iVar7 = iVar6, iVar7 != 0) {
        iVar6 = *(int *)(iVar7 + 0x54);
        if (*(char *)(iVar7 + 0x58) != '\0') {
          FUN_2c62bea8();
          *(int *)(iVar8 + 0x54) = iVar6;
          iVar7 = iVar8;
        }
      }
    }
  }
  return;
}

