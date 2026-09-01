/* FUN_1013cabc @ 0x1013cabc */

uint FUN_1013cabc(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = param_1[3];
  if (-1 < (int)(uVar2 << 0x1e)) {
    iVar6 = param_1[2];
    param_1[3] = uVar2 & 0xfffffffb;
    if ((int)(uVar2 << 0x1d) < 0) {
      puVar1 = *(undefined4 **)(iVar6 + 0x118);
      puVar5 = (undefined4 *)((uVar2 & 3) >> 1);
      while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
        if (param_1 == puVar3) {
          uVar4 = *param_1;
          if (puVar5 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar6 + 0x118) = uVar4;
            if (param_1 == *(undefined4 **)(iVar6 + 0x11c)) {
              *(undefined4 *)(iVar6 + 0x11c) = uVar4;
            }
          }
          else {
            *puVar5 = uVar4;
            if (param_1 == *(undefined4 **)(iVar6 + 0x11c)) {
              *(undefined4 **)(iVar6 + 0x11c) = puVar5;
            }
          }
          *param_1 = 0;
          break;
        }
        puVar5 = puVar3;
        puVar1 = (undefined4 *)*puVar3;
      }
    }
  }
  uVar7 = param_1[3];
  uVar2 = 0;
  if ((uVar7 & 0xf) != 0) {
    uVar2 = uVar7 & 0xf | 2;
    param_1[3] = uVar7 | 2;
  }
  return uVar2;
}

