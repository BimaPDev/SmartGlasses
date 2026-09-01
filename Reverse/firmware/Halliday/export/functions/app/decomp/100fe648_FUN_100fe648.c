/* FUN_100fe648 @ 0x100fe648 */

void FUN_100fe648(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1[7] == -1) {
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  uVar7 = param_1[9];
  uVar2 = param_1[7] + 1;
  if (uVar7 < (uint)param_1[10]) {
    puVar6 = (uint *)(param_1[4] + uVar7 * 0xc + 0x10);
    do {
      uVar1 = *puVar6;
      uVar4 = puVar6[1];
      uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
      if (uVar2 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = puVar6[2];
      uVar5 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      uVar4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
              uVar3 >> 0x18;
      if ((uVar2 <= uVar5) && (uVar4 <= ~(uVar2 - uVar1))) {
        uVar3 = (uVar2 - uVar1) + uVar4;
        while (uVar3 == 0) {
          if (uVar2 == 0xffffffff) goto LAB_100fe6ca;
          uVar2 = uVar2 + 1;
          if ((uVar5 < uVar2) || (~uVar2 + uVar1 < uVar4)) goto LAB_100fe6be;
          uVar3 = (uVar4 + uVar2) - uVar1;
        }
        if (uVar3 < *(uint *)(*param_1 + 0x10)) {
          param_1[7] = uVar2;
          param_1[8] = uVar3;
          param_1[9] = uVar7;
          return;
        }
      }
LAB_100fe6be:
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (param_1[10] != uVar7);
  }
LAB_100fe6ca:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

