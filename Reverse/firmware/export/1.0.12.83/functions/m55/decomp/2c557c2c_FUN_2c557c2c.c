/* FUN_2c557c2c @ 0x2c557c2c */

int * FUN_2c557c2c(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0x10);
  if ((piVar7 != (int *)0x0) && (piVar7[1] != 0)) {
    iVar3 = piVar7[1] + 1;
    piVar7[1] = iVar3;
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
    }
    FUN_2c606abc(uVar4,1);
    piVar5 = (int *)FUN_2c62e8ec(param_1 + 0x14);
    iVar3 = piVar7[1];
    piVar7[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      piVar5 = (int *)(**(code **)(*piVar7 + 8))(piVar7);
      iVar3 = piVar7[2];
      piVar7[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c557c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar7 = (int *)(**(code **)(*piVar7 + 0xc))(piVar7);
        return piVar7;
      }
    }
    return piVar5;
  }
  FUN_2c606abc(0,1);
  puVar6 = (undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c62e838(*puVar6);
  }
  iVar3 = FUN_2c62ca4c(DAT_2c62e980);
  if (iVar3 != 0) {
    uVar4 = FUN_2c629df4();
    *DAT_2c62e990 = uVar4;
  }
  piVar7 = (int *)FUN_2c62c938(DAT_2c62e980);
  if (piVar7 != (int *)0x0) {
    FUN_2c62c0d8(piVar7,puVar6,0x44);
    bVar2 = *(byte *)((int)piVar7 + 0x42);
    bVar1 = *DAT_2c62e984;
    if ((undefined4 *)*puVar6 == puVar6) {
      *piVar7 = (int)piVar7;
    }
    *(byte *)((int)piVar7 + 0x42) = bVar2 & 0xfb | (bVar1 & 1) << 2;
    if ((int)((uint)bVar2 << 0x1f) < 0) {
      if ((code *)piVar7[5] != (code *)0x0) {
        iVar3 = (*(code *)piVar7[5])(piVar7);
        piVar7[8] = piVar7[8] + iVar3;
        piVar7[10] = iVar3 + piVar7[10];
      }
      if (((code *)piVar7[1] != (code *)0x0) && (*piVar7 != 0)) {
        (*(code *)piVar7[1])(*piVar7,piVar7[8]);
      }
    }
    uVar4 = DAT_2c62e980;
    *DAT_2c62e988 = 1;
    iVar3 = FUN_2c62ca10(uVar4);
    if (iVar3 == 0) {
      FUN_2c62be40(*DAT_2c62e98c);
      return piVar7;
    }
    FUN_2c62be4c(*DAT_2c62e98c);
  }
  return piVar7;
}

