/* FUN_2c1415e0 @ 0x2c1415e0 */

/* WARNING: Removing unreachable block (ram,0x2c13ec70) */

undefined4 FUN_2c1415e0(undefined4 param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  iVar3 = DAT_2c14164c;
  uVar4 = (uint)*(ushort *)(DAT_2c14164c + 0x54);
  puVar5 = (ushort *)(DAT_2c14164c + 0x56);
  do {
    ExclusiveAccess(puVar5);
    uVar1 = *puVar5;
    if (uVar4 <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c141604;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar1 + 1;
LAB_2c141604:
  if (uVar4 <= uVar1) {
    return 0;
  }
  puVar5 = (ushort *)(iVar3 + 0x58);
  do {
    ExclusiveAccess(puVar5);
    uVar1 = *puVar5;
    uVar6 = uVar1 + 1;
    if (uVar4 <= uVar6) {
      uVar6 = 0;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = (ushort)uVar6;
  *(undefined4 *)(*(int *)(iVar3 + 0x5c) + (uint)uVar1 * 4) = param_1;
  if (*(char *)(iVar3 + 9) != '\0') {
    *(undefined1 *)(iVar3 + 10) = 1;
    return param_1;
  }
  *(undefined4 *)(DAT_2c141650 + 4) = 0x10000000;
  return param_1;
}

