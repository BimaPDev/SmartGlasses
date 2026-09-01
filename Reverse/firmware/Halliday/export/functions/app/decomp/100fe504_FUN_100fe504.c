/* FUN_100fe504 @ 0x100fe504 */

uint FUN_100fe504(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1[4] + 0x200c);
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar7 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  puVar3 = (uint *)(param_1[4] + 0x2010);
  uVar6 = *param_2 + 1;
  if (uVar7 != 0) {
    do {
      uVar1 = *puVar3;
      uVar4 = puVar3[1];
      uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      uVar2 = puVar3[2];
      uVar5 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      uVar4 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
      puVar3 = puVar3 + 3;
      if ((uVar6 <= uVar5) && (uVar4 <= ~(uVar6 - uVar1))) {
        uVar2 = uVar4 + (uVar6 - uVar1);
        while (uVar2 == 0) {
          if (uVar6 == 0xffffffff) goto LAB_100fe584;
          uVar6 = uVar6 + 1;
          if ((uVar5 < uVar6) || (~uVar6 + uVar1 < uVar4)) goto LAB_100fe57c;
          uVar2 = (uVar4 + uVar6) - uVar1;
        }
        if (uVar2 < *(uint *)(*param_1 + 0x10)) {
          *param_2 = uVar6;
          return uVar2;
        }
      }
LAB_100fe57c:
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
LAB_100fe584:
  *param_2 = 0;
  return 0;
}

