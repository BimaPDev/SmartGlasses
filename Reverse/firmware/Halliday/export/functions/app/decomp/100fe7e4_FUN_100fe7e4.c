/* FUN_100fe7e4 @ 0x100fe7e4 */

void FUN_100fe7e4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1[7] != -1) {
    uVar5 = param_1[9];
    uVar4 = param_1[7] + 1;
    if (uVar5 < (uint)param_1[10]) {
      puVar3 = (uint *)(param_1[4] + uVar5 * 0xc + 0x10);
      do {
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                uVar1 >> 0x18;
        if (uVar4 < uVar1) {
          uVar4 = uVar1;
        }
        if (uVar4 <= (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18)) {
          uVar2 = puVar3[2];
          uVar1 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                  uVar2 >> 0x18;
          if ((uVar2 != 0) && (uVar1 < *(uint *)(*param_1 + 0x10))) {
            param_1[7] = uVar4;
            param_1[8] = uVar1;
            param_1[9] = uVar5;
            return;
          }
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 3;
      } while (param_1[10] != uVar5);
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

