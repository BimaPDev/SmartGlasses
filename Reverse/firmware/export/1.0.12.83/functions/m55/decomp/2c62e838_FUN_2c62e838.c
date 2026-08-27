/* FUN_2c62e838 @ 0x2c62e838 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_2c62e838(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)FUN_2c62ca10(DAT_2c62e8e0);
  uVar1 = DAT_2c62e8e0;
  if (piVar2 != (int *)0x0) {
    uVar5 = 0;
    do {
      piVar3 = (int *)FUN_2c62ca20(uVar1,piVar2);
      if (((*piVar2 == param_1) || (param_1 == 0)) && (param_2 == 0 || piVar2[1] == param_2)) {
        uVar5 = 1;
        FUN_2c62c998(uVar1,piVar2);
        if ((code *)piVar2[4] != (code *)0x0) {
          (*(code *)piVar2[4])(piVar2);
        }
        FUN_2c62bea8(piVar2);
        *DAT_2c62e8e4 = 1;
        iVar4 = FUN_2c62ca10(uVar1);
        if (iVar4 == 0) {
          FUN_2c62be40(*DAT_2c62e8e8);
        }
        else {
          FUN_2c62be4c(*DAT_2c62e8e8);
        }
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)0x0);
    return uVar5;
  }
  return 0;
}

