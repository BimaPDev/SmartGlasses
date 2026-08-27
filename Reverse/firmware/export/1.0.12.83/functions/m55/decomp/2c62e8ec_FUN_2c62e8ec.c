/* FUN_2c62e8ec @ 0x2c62e8ec */

int * FUN_2c62e8ec(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1[1] != 0) {
    FUN_2c62e838(*param_1);
  }
  iVar3 = FUN_2c62ca4c(DAT_2c62e980);
  if (iVar3 != 0) {
    uVar5 = FUN_2c629df4();
    *DAT_2c62e990 = uVar5;
  }
  piVar4 = (int *)FUN_2c62c938(DAT_2c62e980);
  if (piVar4 != (int *)0x0) {
    FUN_2c62c0d8(piVar4,param_1,0x44);
    bVar2 = *(byte *)((int)piVar4 + 0x42);
    bVar1 = *DAT_2c62e984;
    if ((undefined4 *)*param_1 == param_1) {
      *piVar4 = (int)piVar4;
    }
    *(byte *)((int)piVar4 + 0x42) = bVar2 & 0xfb | (bVar1 & 1) << 2;
    if ((int)((uint)bVar2 << 0x1f) < 0) {
      if ((code *)piVar4[5] != (code *)0x0) {
        iVar3 = (*(code *)piVar4[5])(piVar4);
        piVar4[8] = piVar4[8] + iVar3;
        piVar4[10] = iVar3 + piVar4[10];
      }
      if (((code *)piVar4[1] != (code *)0x0) && (*piVar4 != 0)) {
        (*(code *)piVar4[1])(*piVar4,piVar4[8]);
      }
    }
    uVar5 = DAT_2c62e980;
    *DAT_2c62e988 = 1;
    iVar3 = FUN_2c62ca10(uVar5);
    if (iVar3 == 0) {
      FUN_2c62be40(*DAT_2c62e98c);
      return piVar4;
    }
    FUN_2c62be4c(*DAT_2c62e98c);
  }
  return piVar4;
}

