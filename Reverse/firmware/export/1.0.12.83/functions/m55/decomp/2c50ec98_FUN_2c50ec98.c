/* FUN_2c50ec98 @ 0x2c50ec98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c50ec98(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (param_1[1] != 0) {
    FUN_2c62e838(param_1[1],_LAB_2c50eccc);
    if (param_1[1] != 0) {
      FUN_2c50e398(param_1[1],*(undefined1 *)(param_1[0x25] + 0x18),
                   *(undefined1 *)(param_1[0x25] + 8),1);
    }
  }
  param_1[1] = param_2;
  puVar3 = param_1 + 3;
  *param_1 = param_3;
  if (param_1[4] != 0) {
    FUN_2c62e838(*puVar3);
  }
  iVar4 = FUN_2c62ca4c(DAT_2c62e980);
  if (iVar4 != 0) {
    uVar6 = FUN_2c629df4();
    *DAT_2c62e990 = uVar6;
  }
  piVar5 = (int *)FUN_2c62c938(DAT_2c62e980);
  if (piVar5 != (int *)0x0) {
    FUN_2c62c0d8(piVar5,puVar3,0x44);
    bVar2 = *(byte *)((int)piVar5 + 0x42);
    bVar1 = *DAT_2c62e984;
    if ((undefined4 *)*puVar3 == puVar3) {
      *piVar5 = (int)piVar5;
    }
    *(byte *)((int)piVar5 + 0x42) = bVar2 & 0xfb | (bVar1 & 1) << 2;
    if ((int)((uint)bVar2 << 0x1f) < 0) {
      if ((code *)piVar5[5] != (code *)0x0) {
        iVar4 = (*(code *)piVar5[5])(piVar5);
        piVar5[8] = piVar5[8] + iVar4;
        piVar5[10] = iVar4 + piVar5[10];
      }
      if (((code *)piVar5[1] != (code *)0x0) && (*piVar5 != 0)) {
        (*(code *)piVar5[1])(*piVar5,piVar5[8]);
      }
    }
    uVar6 = DAT_2c62e980;
    *DAT_2c62e988 = 1;
    iVar4 = FUN_2c62ca10(uVar6);
    if (iVar4 == 0) {
      FUN_2c62be40(*DAT_2c62e98c);
      return piVar5;
    }
    FUN_2c62be4c(*DAT_2c62e98c);
  }
  return piVar5;
}

