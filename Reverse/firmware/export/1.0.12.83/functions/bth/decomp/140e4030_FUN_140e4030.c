/* FUN_140e4030 @ 0x140e4030 */

uint FUN_140e4030(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar5 = param_2 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2 - (uint)bVar7;
  }
  uVar2 = param_1;
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar1 = param_1;
  }
  uVar5 = uVar5 | 0x5b000000;
  if (param_2 == 0) {
    uVar5 = uVar5 + 0xf0000000;
  }
  uVar3 = LZCOUNT(uVar1);
  uVar4 = uVar3 - 8;
  iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar1 << uVar3 + 0x18;
    uVar5 = iVar6 + ((uVar1 >> (0x20 - (uVar3 + 0x18) & 0xff)) - ((int)uVar4 >> 0x1f));
    if (uVar2 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar5 = uVar5 & ~(uVar4 >> 0x1f);
    }
    return uVar5;
  }
  uVar3 = uVar2 << (uVar4 & 0xff);
  uVar5 = iVar6 + (uVar1 << (uVar4 & 0xff)) +
          (uVar2 >> (0x20 - uVar4 & 0xff)) + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5;
}

