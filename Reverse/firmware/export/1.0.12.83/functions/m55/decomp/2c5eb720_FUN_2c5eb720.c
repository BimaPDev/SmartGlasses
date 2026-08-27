/* FUN_2c5eb720 @ 0x2c5eb720 */

undefined4
FUN_2c5eb720(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            char param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_2 == 0) && (iVar3 = registry_lookup(), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5eb878,0xa1,DAT_2c5eb888,DAT_2c5eb884);
  }
  piVar2 = DAT_2c5eb898;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5eb878,0xa6,DAT_2c5eb888,DAT_2c5eb894,param_1,param_2);
  }
  if (*(char *)((int)DAT_2c5eb898 + 5) == '\0') {
    iVar7 = *DAT_2c5eb898;
    iVar3 = *(int *)(iVar7 + 0x54);
    iVar6 = iVar3;
    if (iVar3 != 0) {
      do {
        if (param_3 == *(int *)(iVar6 + 0x44)) {
          iVar3 = *DAT_2c5eb87c;
          *(undefined1 *)(iVar6 + 0x58) = 1;
          if (iVar3 < 1) {
            iVar5 = *(int *)(iVar7 + 0x54);
            iVar6 = iVar7;
            goto LAB_2c5eb7d8;
          }
          goto LAB_2c5eb748;
        }
        piVar1 = (int *)(iVar6 + 0x54);
        iVar6 = *piVar1;
      } while (*piVar1 != 0);
      if (*DAT_2c5eb87c < 1) {
        do {
          iVar5 = *(int *)(iVar3 + 0x54);
          iVar6 = iVar3;
          if (*(char *)(iVar3 + 0x58) != '\0') {
            FUN_2c62bea8();
            *(int *)(iVar7 + 0x54) = iVar5;
            iVar6 = iVar7;
          }
LAB_2c5eb7d8:
          iVar3 = iVar5;
          iVar7 = iVar6;
        } while (iVar5 != 0);
      }
    }
  }
LAB_2c5eb748:
  iVar3 = FUN_2c62c45c(0x60);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5eb878,0x25,DAT_2c5eb874,DAT_2c5eb88c);
  }
  if (param_2 == 0) {
    *(undefined4 *)(iVar3 + 0x40) = param_1;
  }
  else {
    FUN_2c66c568(iVar3,param_2,0x3f);
  }
  *(int *)(iVar3 + 0x44) = param_3;
  *(undefined4 *)(iVar3 + 0x4c) = param_5;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined1 *)(iVar3 + 0x58) = 0;
  uVar4 = DAT_2c5eb86c;
  *(undefined4 *)(iVar3 + 0x48) = param_4;
  *(undefined4 *)(iVar3 + 0x5c) = param_7;
  *(undefined4 *)(iVar3 + 0x50) = uVar4;
  if (param_6 == '\0') {
    *(undefined4 *)(iVar3 + 0x50) = DAT_2c5eb880;
  }
  else if (param_6 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5eb878,0x3e,DAT_2c5eb874,DAT_2c5eb870,param_6);
  }
  uVar4 = *(undefined4 *)(*piVar2 + 0x54);
  *(int *)(*piVar2 + 0x54) = iVar3;
  *(undefined4 *)(iVar3 + 0x54) = uVar4;
  return 0;
}

