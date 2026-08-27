/* FUN_2c143cd4 @ 0x2c143cd4 */

ulonglong FUN_2c143cd4(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  iVar9 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar9 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar9 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar9 = iVar9 + 3;
    }
    uVar6 = iVar9 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20 - uVar6 & 0xff);
    param_1 = param_1 >> (uVar6 & 0xff) | param_2 << (0x20 - uVar6 & 0xff);
    param_2 = param_2 >> (uVar6 & 0xff);
    iVar9 = uVar6 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      uVar6 = param_2 & 1;
      param_2 = param_2 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar6 != 0) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar1 & 1) << 0x1f | uVar10 >> 1;
      iVar9 = iVar9 + 1;
      if (0xffbfffff < (uint)(iVar9 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_2c143ad8:
    bVar11 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar11 = (param_1 & 1) != 0;
    }
    return CONCAT44(param_2 + iVar9 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11),param_1 + bVar11
                   );
  }
  bVar12 = (uVar10 & 0x80000000) != 0;
  uVar10 = uVar10 << 1;
  uVar6 = param_1 * 2;
  bVar11 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar12;
  param_2 = param_2 * 2 + (uint)(bVar11 || CARRY4(uVar6,(uint)bVar12));
  bVar11 = iVar9 != 0;
  iVar9 = iVar9 + -1;
  if (bVar11 && 0xfffff < param_2) goto LAB_2c143ad8;
  uVar2 = param_1;
  uVar6 = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar6 = param_1;
  }
  iVar7 = LZCOUNT(uVar6);
  if (param_2 == 0) {
    iVar7 = iVar7 + 0x20;
  }
  uVar8 = iVar7 - 0xb;
  bVar12 = SBORROW4(uVar8,0x20);
  uVar3 = iVar7 - 0x2b;
  bVar11 = uVar3 == 0;
  uVar5 = uVar3;
  uVar4 = uVar3;
  if ((int)uVar8 < 0x20) {
    bVar12 = SCARRY4(uVar3,0xc);
    uVar4 = iVar7 - 0x1f;
    bVar11 = uVar4 == 0;
    uVar5 = uVar8;
    if (!bVar11 && -0xd < (int)uVar3) {
      uVar2 = uVar6 << (uVar8 & 0xff);
      uVar6 = uVar6 >> (0xc - uVar4 & 0xff);
      goto LAB_2c143b50;
    }
  }
  if (bVar11 || (int)uVar4 < 0 != bVar12) {
    uVar10 = 0x20 - uVar5;
  }
  uVar6 = uVar6 << (uVar5 & 0xff);
  if (bVar11 || (int)uVar4 < 0 != bVar12) {
    uVar6 = uVar6 | uVar2 >> (uVar10 & 0xff);
    uVar2 = uVar2 << (uVar5 & 0xff);
  }
LAB_2c143b50:
  if ((int)uVar8 <= iVar9) {
    return CONCAT44(uVar6 + (iVar9 - uVar8) * 0x100000,uVar2);
  }
  uVar10 = ~(iVar9 - uVar8);
  if ((int)uVar10 < 0x1f) {
    if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
      uVar10 = 0xc - (uVar10 - 0x13);
      return (ulonglong)(uVar2 >> (0x20 - uVar10 & 0xff) | uVar6 << (uVar10 & 0xff));
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar6 >> (uVar10 & 0xff),
                    uVar2 >> (uVar10 & 0xff) | uVar6 << (0x20 - uVar10 & 0xff));
  }
  return (ulonglong)(uVar6 >> (uVar10 - 0x1f & 0xff));
}

