/* FUN_1000096c @ 0x1000096c */

uint FUN_1000096c(undefined4 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  puVar2 = DAT_10000a0c;
  puVar1 = DAT_10000a08;
  uVar9 = *DAT_10000a08;
  uVar8 = *DAT_10000a0c;
  *DAT_10000a08 = *DAT_10000a08 | 0x8000;
  iVar4 = DAT_10000a14;
  piVar3 = DAT_10000a10;
  do {
  } while (-1 < *DAT_10000a10 << 0x1e);
  *puVar1 = *puVar1 & 0x3fffffff;
  *puVar1 = *puVar1 & 0xffffffcf;
  *puVar1 = *puVar1 | 0x30;
  uVar5 = DAT_10000a20;
  if (*(int *)(DAT_10000a18 + 0x34) == iVar4) {
    *puVar2 = DAT_10000a1c;
    *DAT_10000a24 = uVar5;
  }
  else {
    *puVar2 = DAT_10000a28;
  }
  puVar6 = DAT_10000a2c;
  *DAT_10000a2c = param_1;
  puVar6[2] = 2;
  puVar6[-3] = 0x40;
  puVar6[-2] = 1;
  do {
  } while (*piVar3 << 0x19 < 0);
  do {
  } while (-1 < *DAT_10000a30 << 0x1f);
  *DAT_10000a30 = 1;
  puVar6[-2] = 0;
  if (*(int *)(DAT_10000a18 + 0x34) == iVar4) {
    uVar7 = *DAT_10000a34 | *DAT_10000a34 << 8;
  }
  else {
    uVar7 = *DAT_10000a34;
  }
  *DAT_10000a08 = uVar9;
  *puVar2 = uVar8;
  return uVar7;
}

