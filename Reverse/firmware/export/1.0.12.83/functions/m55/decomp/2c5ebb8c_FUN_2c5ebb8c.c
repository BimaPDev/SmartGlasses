/* FUN_2c5ebb8c @ 0x2c5ebb8c */

void FUN_2c5ebb8c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  piVar1 = DAT_2c5ebc2c;
  if (param_1 == 0) {
    return;
  }
  iVar6 = *DAT_2c5ebc2c;
  iVar7 = *(int *)(iVar6 + 0x54);
  *DAT_2c5ebc28 = *DAT_2c5ebc28 + 1;
  uVar4 = DAT_2c5ebc38;
  uVar3 = DAT_2c5ebc34;
  uVar2 = DAT_2c5ebc30;
  if (iVar7 != 0) {
    do {
      if ((*(char *)(iVar7 + 0x58) == '\0') &&
         (iVar5 = FUN_2c5eb68c(*(undefined4 *)(iVar7 + 0x44),iVar6), iVar6 = param_1, iVar5 != 0)) {
        uVar8 = (**(code **)(iVar7 + 0x50))(iVar7);
        iVar6 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,uVar2,0x134,uVar4,uVar3,iVar7,param_1);
        }
      }
      iVar7 = *(int *)(iVar7 + 0x54);
    } while (iVar7 != 0);
    iVar7 = *piVar1;
    iVar6 = *(int *)(iVar7 + 0x54);
    while (iVar6 != 0) {
      while (iVar5 = iVar6, iVar6 = *(int *)(iVar5 + 0x54), *(char *)(iVar5 + 0x58) == '\0') {
        iVar7 = iVar5;
        if (iVar6 == 0) {
          return;
        }
      }
      FUN_2c62bea8();
      *(int *)(iVar7 + 0x54) = iVar6;
    }
  }
  return;
}

