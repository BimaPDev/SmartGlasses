/* FUN_10003a58 @ 0x10003a58 */

ulonglong FUN_10003a58(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar5 = param_1 << 1;
  bVar10 = uVar5 == 0;
  uVar9 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
  uVar8 = (uint)((int)uVar5 >> 3) >> 1;
  uVar2 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar5 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar2,param_1) ^ 0x3800000000000000;
  }
  if ((uVar5 & 0xffffff) == 0) {
    return CONCAT44(uVar2,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar2,param_1) | 0x8000000000000;
  }
  uVar1 = param_1;
  uVar5 = uVar8;
  if (uVar8 == 0) {
    uVar1 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar3 = iVar6 - 0x2b;
  bVar10 = uVar3 == 0;
  uVar8 = uVar3;
  uVar4 = uVar3;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar3,0xc);
    uVar4 = iVar6 - 0x1f;
    bVar10 = uVar4 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar3) {
      uVar1 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar4 & 0xff);
      goto LAB_10003920;
    }
  }
  if (bVar10 || (int)uVar4 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar5 = uVar5 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar4 < 0 != bVar11) {
    uVar5 = uVar5 | uVar1 >> (in_r12 & 0xff);
    uVar1 = uVar1 << (uVar8 & 0xff);
  }
LAB_10003920:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar9,uVar1);
  }
  uVar8 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar8) {
    return CONCAT44(uVar2,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar5 >> (uVar8 & 0xff),
                    uVar1 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
  }
  uVar9 = 0xc - (uVar8 - 0x13);
  return CONCAT44(uVar2,uVar1 >> (0x20 - uVar9 & 0xff) | uVar5 << (uVar9 & 0xff)) &
         0x80000000ffffffff;
}

