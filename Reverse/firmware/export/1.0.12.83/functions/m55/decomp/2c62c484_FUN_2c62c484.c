/* FUN_2c62c484 @ 0x2c62c484 */

void FUN_2c62c484(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (((uint)param_1 & 3) != 0) {
    if (param_2 == 0) {
      return;
    }
    puVar4 = (undefined4 *)((4 - ((uint)param_1 & 3)) + (int)param_1);
    puVar2 = param_1;
    do {
      param_1 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = 0xff;
      param_2 = param_2 - 1;
      if (param_1 == puVar4) break;
      puVar2 = param_1;
    } while (param_2 != 0);
  }
  if (0x20 < param_2) {
    puVar2 = param_1 + 8;
    uVar5 = param_2 - 0x21 >> 5;
    do {
      puVar2[-8] = 0xffffffff;
      puVar2[-7] = 0xffffffff;
      puVar2[-6] = 0xffffffff;
      puVar2[-5] = 0xffffffff;
      puVar2[-4] = 0xffffffff;
      puVar2[-3] = 0xffffffff;
      puVar2[-2] = 0xffffffff;
      puVar2[-1] = 0xffffffff;
      puVar2 = puVar2 + 8;
    } while (puVar2 != (undefined4 *)((int)param_1 + (param_2 - 0x21 & 0xffffffe0) + 0x40));
    puVar2 = param_1 + (uVar5 + 1) * 8;
    for (uVar3 = (param_2 - 0x20) + uVar5 * -0x20; 4 < uVar3; uVar3 = uVar3 - 4) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    puVar4 = puVar2;
    do {
      puVar1 = (undefined4 *)((int)puVar4 + 1);
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)(uVar3 + (int)puVar2));
    return;
  }
  puVar2 = param_1;
  if (param_2 < 5) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    do {
      param_2 = param_2 - 4;
      param_1 = puVar2 + 1;
      *puVar2 = 0xffffffff;
      puVar2 = param_1;
    } while (4 < param_2);
  }
  puVar2 = param_1;
  do {
    puVar4 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0xff;
    puVar2 = puVar4;
  } while (puVar4 != (undefined4 *)(param_2 + (int)param_1));
  return;
}

