/* FUN_2c4d74d4 @ 0x2c4d74d4 */

uint FUN_2c4d74d4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[3] + 0x20;
  *param_1 = *param_1 + -0x20;
  uVar4 = param_1[3] + 0x1fU >> 3;
  param_1[3] = param_1[6] - 1U & uVar5;
  if ((uint)param_1[6] < uVar5) {
    iVar2 = param_1[4];
    uVar3 = param_1[5] - 1;
    uVar5 = uVar5 & 7;
    uVar1 = (uint)*(byte *)(iVar2 + (uVar4 - 2 & uVar3)) << 0x10 |
            (uint)*(byte *)(iVar2 + (uVar4 - 3 & uVar3)) << 0x18 |
            (uint)*(byte *)(iVar2 + (uVar4 & uVar3)) |
            (uint)*(byte *)(iVar2 + (uVar4 - 1 & uVar3)) << 8;
    if (uVar5 != 0) {
      return (uint)*(byte *)(iVar2 + (uVar4 - 4 & uVar3)) << uVar5 + 0x18 |
             uVar1 >> (8 - uVar5 & 0xff);
    }
  }
  else {
    uVar5 = uVar5 & 7;
    iVar2 = param_1[4] + uVar4;
    uVar1 = (uint)*(byte *)(iVar2 + -2) << 0x10 | (uint)*(byte *)(iVar2 + -3) << 0x18 |
            (uint)*(byte *)(param_1[4] + uVar4) | (uint)*(byte *)(iVar2 + -1) << 8;
    if (uVar5 != 0) {
      uVar1 = uVar1 >> (8 - uVar5 & 0xff) | (uint)*(byte *)(iVar2 + -4) << uVar5 + 0x18;
    }
  }
  return uVar1;
}

