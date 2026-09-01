/* FUN_1011ea96 @ 0x1011ea96 */

uint * FUN_1011ea96(ushort *param_1,uint param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)param_1[6];
  if (uVar5 != 0) {
    param_2 = (param_2 + 3 & 0xfffffffc) + uVar5;
  }
  uVar4 = (uint)*param_1;
  uVar2 = (uint)param_1[3];
  uVar6 = (uint)param_1[5];
  if (uVar4 <= uVar2) {
    param_4 = (uVar6 + uVar4 + -1) - uVar2;
  }
  uVar1 = param_1[4];
  if (uVar2 < uVar4) {
    param_4 = (uVar4 - 1) - uVar2;
  }
  uVar4 = uVar6 - uVar2;
  puVar3 = (uint *)(uVar2 + uVar1 + 0x2ff18000);
  if (uVar5 == 0) {
    if (uVar4 <= param_2) {
      param_2 = uVar4;
    }
    if (param_2 <= param_4) {
      param_4 = param_2;
    }
    if (param_4 == 0) {
      return (uint *)0x0;
    }
  }
  else {
    if (param_4 < param_2) {
      return (uint *)0x0;
    }
    if (uVar4 < param_2) {
      if (param_4 - uVar4 < param_2) {
        return (uint *)0x0;
      }
      *puVar3 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      puVar3 = (uint *)(uVar1 + 0x2ff18000);
    }
    param_4 = param_2 - uVar5;
    *puVar3 = param_4;
    puVar3 = puVar3 + 1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = param_4;
  }
  param_4 = param_4 + uVar5 + param_1[3];
  if (uVar6 <= param_4) {
    param_4 = param_4 - uVar6;
  }
  param_1[3] = (ushort)param_4;
  return puVar3;
}

