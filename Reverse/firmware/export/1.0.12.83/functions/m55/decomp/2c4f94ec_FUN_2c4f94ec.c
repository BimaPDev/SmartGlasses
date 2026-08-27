/* FUN_2c4f94ec @ 0x2c4f94ec */

uint FUN_2c4f94ec(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_2 != 0) && (param_2 <= *param_1)) {
    uVar1 = param_1[4];
    *param_1 = *param_1 - param_2;
    uVar7 = uVar1 >> 3;
    uVar5 = param_1[5];
    param_1[3] = param_1[3] + param_2;
    uVar6 = param_1[6] - 1;
    param_1[4] = param_1[7] - 1 & uVar1 + param_2;
    uVar4 = uVar1 & 7;
    uVar3 = param_2 + uVar4;
    uVar1 = (uint)*(byte *)(uVar5 + (uVar6 & uVar1 >> 3)) << 0x18;
    uVar2 = uVar1 << uVar4;
    if (8 < uVar3) {
      uVar1 = uVar1 | (uint)*(byte *)(uVar5 + (uVar7 + 1 & uVar6)) << 0x10;
      uVar2 = uVar1 << uVar4;
      if (0x10 < uVar3) {
        uVar1 = uVar1 | (uint)*(byte *)(uVar5 + (uVar7 + 2 & uVar6)) << 8;
        uVar2 = uVar1 << uVar4;
        if ((0x18 < uVar3) &&
           (uVar2 = (uVar1 | *(byte *)(uVar5 + (uVar7 + 3 & uVar6))) << uVar4, 0x20 < uVar3)) {
          uVar2 = uVar2 | (int)(uint)*(byte *)(uVar5 + (uVar7 + 4 & uVar6)) >> (8 - uVar4 & 0xff);
        }
      }
    }
    return uVar2 >> (0x20 - param_2 & 0xff);
  }
  return 0;
}

