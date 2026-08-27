/* FUN_2c64e018 @ 0x2c64e018 */

void FUN_2c64e018(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar3 = (undefined4 *)FUN_2c64ca5c(0x68);
    uVar2 = DAT_2c64e09c;
    puVar3[1] = 0;
    *puVar3 = uVar2;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0x19) = 0;
    *(undefined4 **)(param_1 + 8) = puVar3;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
  }
  uVar2 = DAT_2c64e0a0;
  iVar4 = *(int *)(param_1 + 8);
  *(undefined1 *)(iVar4 + 0x24) = 0x2e;
  *(undefined4 *)(iVar4 + 8) = uVar2;
  iVar6 = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined1 *)(iVar4 + 0x10) = 0;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x25) = 0x2c;
  iVar4 = *DAT_2c64e0a4;
  do {
    puVar1 = (undefined1 *)(iVar4 + iVar6);
    iVar5 = *(int *)(param_1 + 8) + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar5 + 0x26) = *puVar1;
  } while (iVar6 != 0x24);
  iVar4 = *DAT_2c64e0a8;
  iVar6 = 0;
  do {
    puVar1 = (undefined1 *)(iVar4 + iVar6);
    iVar5 = *(int *)(param_1 + 8) + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar5 + 0x4a) = *puVar1;
  } while (iVar6 != 0x1a);
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar4 + 0x14) = DAT_2c64e0ac;
  *(undefined4 *)(iVar4 + 0x18) = 4;
  *(undefined4 *)(iVar4 + 0x1c) = DAT_2c64e0b0;
  *(undefined4 *)(iVar4 + 0x20) = 5;
  return;
}

