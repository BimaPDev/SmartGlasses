/* FUN_2c5dd26c @ 0x2c5dd26c */

int FUN_2c5dd26c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = DAT_2c5dd300;
  uVar3 = DAT_2c5dd2fc;
  uVar2 = DAT_2c5dd2f8;
  piVar7 = (int *)param_1[1];
  piVar1 = (int *)*param_1;
  do {
    if (piVar1 == piVar7) {
      return 0;
    }
    iVar6 = *piVar1;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5dd2f0,0x51,uVar4,uVar3,uVar2);
    }
    if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5dd2f0,0x52,uVar4,uVar3,DAT_2c5dd2f4);
    }
    iVar5 = FUN_2c66b624(param_2);
    piVar1 = piVar1 + 1;
  } while (iVar5 != 0);
  return iVar6;
}

