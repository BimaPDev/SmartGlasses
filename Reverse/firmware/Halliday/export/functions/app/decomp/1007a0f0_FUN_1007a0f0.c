/* FUN_1007a0f0 @ 0x1007a0f0 */

uint FUN_1007a0f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 9;
  puVar3 = DAT_1007a148;
  do {
    if (*puVar3 <= param_1) break;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + -1;
  } while (iVar4 != 0);
  iVar1 = DAT_1007a14c + iVar4 * 2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0x44);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x46);
  if (uVar2 <= param_1) {
    param_1 = uVar2;
  }
  uVar5 = (uint)(iVar4 * 100) / 10;
  if ((uVar6 < param_1) && (param_1 <= uVar2)) {
    uVar5 = uVar5 + ((param_1 - uVar6) * 100) / ((uVar2 - uVar6) * 10);
  }
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  if (99 < uVar5) {
    uVar5 = 100;
  }
  return uVar5 & 0xff;
}

