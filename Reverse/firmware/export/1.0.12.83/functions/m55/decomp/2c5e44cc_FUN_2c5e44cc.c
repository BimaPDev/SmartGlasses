/* FUN_2c5e44cc @ 0x2c5e44cc */

void FUN_2c5e44cc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  
  if ((param_1 != 2) || (param_3 == 0)) {
    if ((param_1 != 3) || (param_3 == 0)) {
LAB_2c5e453c:
      iVar1 = FUN_2c5e4128(param_1);
                    /* WARNING: Could not recover jumptable at 0x2c5e454e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0x1c))(param_2);
      return;
    }
    iVar1 = FUN_2c5e7270(6,3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5e46c8,0x15c,DAT_2c5e46c4,DAT_2c5e46d8);
    }
    piVar8 = *(int **)(DAT_2c5e46bc + 0x14);
    do {
      piVar8 = (int *)*piVar8;
      if (piVar8 == (int *)0x0) {
        uVar5 = *(undefined4 *)(iVar1 + 4);
        uVar6 = 0x15f;
        uVar4 = DAT_2c5e46c0;
        goto LAB_2c5e4524;
      }
      iVar9 = piVar8[2];
      iVar2 = FUN_2c66b624(*(undefined4 *)(iVar9 + 4),param_3);
    } while (iVar2 != 0);
    iVar1 = FUN_2c66b624(*(undefined4 *)(iVar1 + 4),param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_2c5e76cc(6,3);
      if (iVar1 != 0) {
        if (param_4 != 0) {
          pcVar7 = *(code **)(piVar8[2] + 8);
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(*(undefined4 *)(piVar8[2] + 0xc));
          }
          (**(code **)(*(int *)(DAT_2c5e46d4 + 8) + 0x3c))(3,param_3);
          FUN_2c5e6ca0();
          FUN_2c5e70b0(6,3,4);
          iVar1 = FUN_2c5e697c(6);
          uVar4 = 3;
          goto LAB_2c5e463c;
        }
        goto LAB_2c5e453c;
      }
      iVar9 = piVar8[2];
    }
    if (*(code **)(iVar9 + 8) != (code *)0x0) {
      (**(code **)(iVar9 + 8))(*(undefined4 *)(iVar9 + 0xc),iVar9);
    }
    uVar3 = FUN_2c5e6b68();
    FUN_2c5e6ce4(1,2 < uVar3);
    uVar4 = 3;
    iVar1 = *(int *)(DAT_2c5e46d4 + 8);
  }
  else {
    iVar1 = FUN_2c5e7270(6,2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5e46c8,0x141,DAT_2c5e46c4,DAT_2c5e46d8);
    }
    piVar8 = *(int **)(DAT_2c5e46cc + 0x14);
    do {
      piVar8 = (int *)*piVar8;
      if (piVar8 == (int *)0x0) {
        uVar5 = *(undefined4 *)(iVar1 + 4);
        uVar6 = 0x143;
        uVar4 = DAT_2c5e46d0;
LAB_2c5e4524:
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5e46c8,uVar6,DAT_2c5e46c4,uVar4,param_3,uVar5);
      }
      iVar9 = piVar8[2];
      iVar2 = FUN_2c66b624(*(undefined4 *)(iVar9 + 4),param_3);
    } while (iVar2 != 0);
    iVar1 = FUN_2c66b624(*(undefined4 *)(iVar1 + 4),param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_2c5e76cc(6,2);
      if (iVar1 != 0) {
        if (param_4 != 0) {
          iVar1 = piVar8[2];
          if (*(code **)(iVar1 + 8) != (code *)0x0) {
            (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10));
          }
          (**(code **)(*(int *)(DAT_2c5e46d4 + 4) + 0x3c))(2,param_3);
          FUN_2c5e6ca0();
          FUN_2c5e70b0(6,2,4);
          iVar1 = FUN_2c5e697c(6);
          uVar4 = 2;
LAB_2c5e463c:
                    /* WARNING: Could not recover jumptable at 0x2c5e4644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0x2c))(uVar4,4);
          return;
        }
        goto LAB_2c5e453c;
      }
      iVar9 = piVar8[2];
    }
    if (*(code **)(iVar9 + 8) != (code *)0x0) {
      (**(code **)(iVar9 + 8))(*(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 0x10));
    }
    uVar3 = FUN_2c5e6b68();
    FUN_2c5e6ce4(1,2 < uVar3);
    uVar4 = 2;
    iVar1 = *(int *)(DAT_2c5e46d4 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x2c5e45c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x3c))(uVar4,param_3);
  return;
}

