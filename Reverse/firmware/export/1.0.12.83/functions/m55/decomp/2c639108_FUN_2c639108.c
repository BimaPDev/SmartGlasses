/* FUN_2c639108 @ 0x2c639108 */

/* WARNING: Removing unreachable block (ram,0x2c62e888) */
/* WARNING: Removing unreachable block (ram,0x2c62e890) */

undefined4 FUN_2c639108(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_2c62e838(param_2 + 0x3c,0);
  piVar2 = (int *)FUN_2c62ca10(DAT_2c62e8e0);
  uVar1 = DAT_2c62e8e0;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar5 = 0;
  do {
    while ((piVar3 = (int *)FUN_2c62ca20(uVar1,piVar2), *piVar2 != param_2 + 0x50 &&
           (param_2 != -0x50))) {
      piVar2 = piVar3;
      if (piVar3 == (int *)0x0) {
        return uVar5;
      }
    }
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
    uVar5 = 1;
    piVar2 = piVar3;
  } while (piVar3 != (int *)0x0);
  return 1;
}

