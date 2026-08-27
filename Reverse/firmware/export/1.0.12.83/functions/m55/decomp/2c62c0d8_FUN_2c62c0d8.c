/* FUN_2c62c0d8 @ 0x2c62c0d8 */

void FUN_2c62c0d8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar4 = (uint)param_1 & 3;
  if (uVar4 != ((uint)param_2 & 3)) {
    if (param_3 < 0x21) {
      if (param_3 == 0) {
        return;
      }
    }
    else {
      uVar4 = param_3 - 0x21 >> 5;
      puVar2 = param_1 + 8;
      puVar3 = param_2;
      do {
        puVar5 = puVar2 + 8;
        *(undefined1 *)(puVar2 + -8) = *(undefined1 *)puVar3;
        *(undefined1 *)((int)puVar2 + -0x1f) = *(undefined1 *)((int)puVar3 + 1);
        *(undefined1 *)((int)puVar2 + -0x1e) = *(undefined1 *)((int)puVar3 + 2);
        *(undefined1 *)((int)puVar2 + -0x1d) = *(undefined1 *)((int)puVar3 + 3);
        *(undefined1 *)(puVar2 + -7) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)((int)puVar2 + -0x1b) = *(undefined1 *)((int)puVar3 + 5);
        *(undefined1 *)((int)puVar2 + -0x1a) = *(undefined1 *)((int)puVar3 + 6);
        *(undefined1 *)((int)puVar2 + -0x19) = *(undefined1 *)((int)puVar3 + 7);
        *(undefined1 *)(puVar2 + -6) = *(undefined1 *)(puVar3 + 2);
        *(undefined1 *)((int)puVar2 + -0x17) = *(undefined1 *)((int)puVar3 + 9);
        *(undefined1 *)((int)puVar2 + -0x16) = *(undefined1 *)((int)puVar3 + 10);
        *(undefined1 *)((int)puVar2 + -0x15) = *(undefined1 *)((int)puVar3 + 0xb);
        *(undefined1 *)(puVar2 + -5) = *(undefined1 *)(puVar3 + 3);
        *(undefined1 *)((int)puVar2 + -0x13) = *(undefined1 *)((int)puVar3 + 0xd);
        *(undefined1 *)((int)puVar2 + -0x12) = *(undefined1 *)((int)puVar3 + 0xe);
        *(undefined1 *)((int)puVar2 + -0x11) = *(undefined1 *)((int)puVar3 + 0xf);
        *(undefined1 *)(puVar2 + -4) = *(undefined1 *)(puVar3 + 4);
        *(undefined1 *)((int)puVar2 + -0xf) = *(undefined1 *)((int)puVar3 + 0x11);
        *(undefined1 *)((int)puVar2 + -0xe) = *(undefined1 *)((int)puVar3 + 0x12);
        *(undefined1 *)((int)puVar2 + -0xd) = *(undefined1 *)((int)puVar3 + 0x13);
        *(undefined1 *)(puVar2 + -3) = *(undefined1 *)(puVar3 + 5);
        *(undefined1 *)((int)puVar2 + -0xb) = *(undefined1 *)((int)puVar3 + 0x15);
        *(undefined1 *)((int)puVar2 + -10) = *(undefined1 *)((int)puVar3 + 0x16);
        *(undefined1 *)((int)puVar2 + -9) = *(undefined1 *)((int)puVar3 + 0x17);
        *(undefined1 *)(puVar2 + -2) = *(undefined1 *)(puVar3 + 6);
        *(undefined1 *)((int)puVar2 + -7) = *(undefined1 *)((int)puVar3 + 0x19);
        *(undefined1 *)((int)puVar2 + -6) = *(undefined1 *)((int)puVar3 + 0x1a);
        *(undefined1 *)((int)puVar2 + -5) = *(undefined1 *)((int)puVar3 + 0x1b);
        *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar3 + 7);
        *(undefined1 *)((int)puVar2 + -3) = *(undefined1 *)((int)puVar3 + 0x1d);
        *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar3 + 0x1e);
        *(undefined1 *)((int)puVar2 + -1) = *(undefined1 *)((int)puVar3 + 0x1f);
        puVar2 = puVar5;
        puVar3 = puVar3 + 8;
      } while (puVar5 != (undefined4 *)((int)param_1 + (param_3 - 0x21 & 0xffffffe0) + 0x40));
      iVar6 = uVar4 + 1;
      param_3 = (param_3 - 0x20) + uVar4 * -0x20;
      param_2 = param_2 + iVar6 * 8;
      param_1 = param_1 + iVar6 * 8;
    }
    puVar1 = (undefined1 *)((int)param_2 + -1);
    puVar3 = param_1;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = *puVar1;
      puVar3 = puVar2;
    } while ((undefined4 *)(param_3 + (int)param_1) != puVar2);
    return;
  }
  if (uVar4 != 0) {
    if (param_3 == 0) {
      return;
    }
    puVar5 = (undefined4 *)((4 - uVar4) + (int)param_1);
    puVar3 = param_2;
    puVar2 = param_1;
    do {
      param_2 = (undefined4 *)((int)puVar3 + 1);
      param_3 = param_3 - 1;
      param_1 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
      if (param_1 == puVar5) break;
      puVar3 = param_2;
      puVar2 = param_1;
    } while (param_3 != 0);
  }
  if (param_3 < 0x21) {
    puVar3 = param_2;
    puVar2 = param_1;
    if (param_3 < 5) {
      if (param_3 == 0) {
        return;
      }
      goto LAB_2c62c2f0;
    }
  }
  else {
    uVar4 = param_3 - 0x21 >> 5;
    puVar2 = param_1 + 8;
    puVar3 = param_2;
    do {
      puVar5 = puVar2 + 8;
      puVar2[-8] = *puVar3;
      puVar2[-7] = puVar3[1];
      puVar2[-6] = puVar3[2];
      puVar2[-5] = puVar3[3];
      puVar2[-4] = puVar3[4];
      puVar2[-3] = puVar3[5];
      puVar2[-2] = puVar3[6];
      puVar2[-1] = puVar3[7];
      puVar2 = puVar5;
      puVar3 = puVar3 + 8;
    } while (puVar5 != (undefined4 *)((int)param_1 + (param_3 - 0x21 & 0xffffffe0) + 0x40));
    iVar6 = uVar4 + 1;
    param_3 = (param_3 - 0x20) + uVar4 * -0x20;
    param_1 = param_1 + iVar6 * 8;
    param_2 = param_2 + iVar6 * 8;
    puVar3 = param_2;
    puVar2 = param_1;
    if (param_3 < 5) goto LAB_2c62c2f0;
  }
  do {
    param_3 = param_3 - 4;
    param_2 = puVar3 + 1;
    param_1 = puVar2 + 1;
    *puVar2 = *puVar3;
    puVar3 = param_2;
    puVar2 = param_1;
  } while (4 < param_3);
LAB_2c62c2f0:
  puVar1 = (undefined1 *)((int)param_2 + -1);
  puVar3 = param_1;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = *puVar1;
    puVar3 = puVar2;
  } while (puVar2 != (undefined4 *)(param_3 + (int)param_1));
  return;
}

