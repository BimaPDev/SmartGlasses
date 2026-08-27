/* FUN_2c563244 @ 0x2c563244 */

void FUN_2c563244(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != *(undefined4 **)(param_1 + 8)) {
    *puVar2 = DAT_2c563328;
    puVar2[1] = puVar2 + 3;
    if (*(int *)(param_2 + 4) == param_2 + 0xc) {
      uVar4 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      puVar2[3] = *(undefined4 *)(param_2 + 0xc);
      puVar2[4] = uVar4;
      puVar2[5] = uVar3;
      puVar2[6] = uVar1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      puVar2[1] = *(int *)(param_2 + 4);
      puVar2[3] = uVar1;
    }
    *(int *)(param_2 + 4) = param_2 + 0xc;
    puVar2[2] = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
    puVar2[7] = puVar2 + 9;
    if (*(int *)(param_2 + 0x1c) == param_2 + 0x24) {
      uVar4 = *(undefined4 *)(param_2 + 0x28);
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar3;
      puVar2[0xc] = uVar1;
    }
    else {
      puVar2[7] = *(int *)(param_2 + 0x1c);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
    }
    *(int *)(param_2 + 0x1c) = param_2 + 0x24;
    puVar2[8] = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x24) = 0;
    puVar2[0xd] = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x34) = 0;
    puVar2[0xe] = *(undefined4 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    puVar2[0xf] = uVar1;
    puVar2[0x10] = puVar2 + 0x12;
    if (*(int *)(param_2 + 0x40) == param_2 + 0x48) {
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x50);
      uVar1 = *(undefined4 *)(param_2 + 0x54);
      puVar2[0x12] = *(undefined4 *)(param_2 + 0x48);
      puVar2[0x13] = uVar3;
      puVar2[0x14] = uVar4;
      puVar2[0x15] = uVar1;
    }
    else {
      puVar2[0x10] = *(int *)(param_2 + 0x40);
      puVar2[0x12] = *(undefined4 *)(param_2 + 0x48);
    }
    *(int *)(param_2 + 0x40) = param_2 + 0x48;
    puVar2[0x11] = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined1 *)(param_2 + 0x48) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x58;
    return;
  }
  FUN_2c562e6c(param_1,puVar2,param_2);
  return;
}

