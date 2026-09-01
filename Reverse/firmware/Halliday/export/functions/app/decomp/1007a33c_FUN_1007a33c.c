/* FUN_1007a33c @ 0x1007a33c */

/* WARNING: Type propagation algorithm not settling */

void FUN_1007a33c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort auStack_5e [33];
  
  iVar4 = DAT_1007a408;
  puVar3 = auStack_5e + 1;
  uVar8 = (uint)(param_1 * 1000) / 100;
  uVar9 = (uint)*(byte *)(DAT_1007a408 + 0x156);
  FUN_1011ea48(puVar3,0,0x3c);
  for (iVar6 = 0; iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
    if (uVar9 == 0) {
      uVar9 = 0x1d;
    }
    else {
      uVar9 = uVar9 - 1;
    }
    puVar3[iVar6] = *(ushort *)(iVar4 + uVar9 * 2 + 0xec);
  }
  for (uVar9 = 0; uVar10 = uVar9 & 0xffff, (int)uVar10 < (int)((uVar8 & 0xffff) - 1);
      uVar9 = uVar9 + 1) {
    uVar7 = uVar10 + 1 & 0xffff;
    uVar5 = uVar10;
    puVar11 = puVar3 + uVar7;
    for (; uVar7 < (uVar8 & 0xffff); uVar7 = uVar7 + 1 & 0xffff) {
      if (*puVar11 < auStack_5e[uVar5 + 1]) {
        uVar5 = uVar7;
      }
      puVar11 = puVar11 + 1;
    }
    if (uVar5 != uVar10) {
      uVar1 = puVar3[uVar10];
      uVar2 = puVar3[uVar5];
      puVar3[uVar5] = uVar2 ^ uVar1;
      uVar1 = uVar2 ^ uVar1 ^ puVar3[uVar10];
      puVar3[uVar10] = uVar1;
      puVar3[uVar5] = uVar1 ^ puVar3[uVar5];
    }
  }
  FUN_1011feb0(auStack_5e[(uVar8 << 2) / 5]);
  return;
}

