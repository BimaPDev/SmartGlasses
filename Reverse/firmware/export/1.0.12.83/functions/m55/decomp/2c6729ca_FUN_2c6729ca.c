/* FUN_2c6729ca @ 0x2c6729ca */

ulonglong FUN_2c6729ca(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  
  uVar3 = param_2 & 0x7fffffff;
  uVar1 = param_1;
  uVar2 = uVar3;
  if (uVar3 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar6 = LZCOUNT(uVar2);
  if (uVar3 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar9 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar8 = uVar4 == 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar9 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar8 = uVar5 == 0;
    uVar3 = uVar7;
    if (!bVar8 && -0xd < (int)uVar4) {
      uVar1 = uVar2 << (uVar7 & 0xff);
      uVar2 = uVar2 >> (0xc - uVar5 & 0xff);
      goto LAB_2c672860;
    }
  }
  if (bVar8 || (int)uVar5 < 0 != bVar9) {
    in_r12 = 0x20 - uVar3;
  }
  uVar2 = uVar2 << (uVar3 & 0xff);
  if (bVar8 || (int)uVar5 < 0 != bVar9) {
    uVar2 = uVar2 | uVar1 >> (in_r12 & 0xff);
    uVar1 = uVar1 << (uVar3 & 0xff);
  }
LAB_2c672860:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar2 + (0x380 - uVar7) * 0x100000 | param_2 & 0x80000000,uVar1);
  }
  uVar3 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_2,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar3 - 0x13 == 0 || (int)(uVar3 - 0x1f) < -0xc) {
    uVar3 = uVar3 + 1;
    return CONCAT44(param_2 & 0x80000000 | uVar2 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
  }
  uVar3 = 0xc - (uVar3 - 0x13);
  return CONCAT44(param_2,uVar1 >> (0x20 - uVar3 & 0xff) | uVar2 << (uVar3 & 0xff)) &
         0x80000000ffffffff;
}

