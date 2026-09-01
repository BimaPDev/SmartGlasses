/* FUN_100f8518 @ 0x100f8518 */

uint FUN_100f8518(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint local_20;
  int aiStack_1c [2];
  
  uVar7 = (int)param_2 >> 0x1f;
  if (param_1 == 0) {
    return (param_2 ^ uVar7) - uVar7;
  }
  if (param_2 == 0) {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  iVar6 = LZCOUNT((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f) |
                  (param_2 ^ uVar7) - uVar7);
  if (0x1f - iVar6 < 0x1e) {
    local_20 = param_1 << (iVar6 - 2U & 0xff);
    aiStack_1c[0] = param_2 << (iVar6 - 2U & 0xff);
  }
  else {
    local_20 = (int)param_1 >> (2U - iVar6 & 0xff);
    aiStack_1c[0] = (int)param_2 >> (2U - iVar6 & 0xff);
  }
  uVar7 = iVar6 - 2;
  FUN_100f81a0(&local_20,aiStack_1c);
  bVar11 = (int)local_20 < 0;
  if (bVar11) {
    local_20 = -local_20;
  }
  uVar3 = (local_20 & 0xffff) * 0xdbd9;
  uVar8 = (local_20 >> 0x10) * 0x5b16;
  uVar5 = (local_20 & 0xffff) * 0x5b16;
  if (bVar11) {
    iVar10 = -1;
  }
  else {
    iVar10 = 1;
  }
  uVar9 = uVar3 + uVar8;
  uVar4 = uVar9 * 0x10000;
  if (CARRY4(uVar3,uVar8)) {
    iVar2 = 0x10000;
  }
  else {
    iVar2 = 0;
  }
  iVar1 = (local_20 >> 0x10) * 0xdbd9 + (uVar9 >> 0x10) + (uint)CARRY4(uVar5,uVar4);
  if (0xbfffffff < uVar5 + uVar4) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + iVar2;
  if (iVar10 == -1) {
    iVar1 = -iVar1;
  }
  if (0 < (int)uVar7) {
    return iVar1 + (1 << (iVar6 - 3U & 0xff)) >> (uVar7 & 0xff);
  }
  return iVar1 << (-uVar7 & 0xff);
}

