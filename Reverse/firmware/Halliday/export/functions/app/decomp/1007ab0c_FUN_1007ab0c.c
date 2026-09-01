/* FUN_1007ab0c @ 0x1007ab0c */

uint FUN_1007ab0c(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(DAT_1007ab6c + 0x58);
  if (param_1 < uVar7) {
    iVar6 = 9;
    puVar4 = (ushort *)(DAT_1007ab6c + 0x56);
    do {
      if (*puVar4 <= param_1) break;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + -1;
    } while (iVar6 != 0);
    iVar5 = DAT_1007ab6c + iVar6 * 2;
    uVar7 = (uint)*(ushort *)(iVar5 + 0x44);
    uVar1 = *(ushort *)(iVar5 + 0x46);
  }
  else {
    uVar1 = *(ushort *)(DAT_1007ab6c + 0xc);
    iVar6 = 10;
  }
  uVar3 = (uint)uVar1;
  if (uVar3 <= param_1) {
    param_1 = uVar3;
  }
  uVar2 = (uint)(iVar6 * 1000) / 10;
  if ((uVar7 < param_1) && (param_1 <= uVar3)) {
    uVar2 = uVar2 + ((param_1 - uVar7) * 100) / (uVar3 - uVar7);
  }
  return uVar2;
}

