/* FUN_2c64d8d8 @ 0x2c64d8d8 */

void FUN_2c64d8d8(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar2 = (undefined4 *)FUN_2c64ca5c(0x44);
    uVar3 = DAT_2c64d950;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined1 *)((int)puVar2 + 0x12) = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)((int)puVar2 + 0x43) = 0;
    *(undefined4 **)(param_1 + 8) = puVar2;
    *puVar2 = uVar3;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
  }
  uVar3 = DAT_2c64d954;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x11) = 0x2e;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x12) = 0x2c;
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar4 + 8) = uVar3;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x14) = uVar3;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x24) = uVar3;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  uVar3 = *DAT_2c64d958;
  *(undefined4 *)(iVar4 + 0x30) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x34) = uVar3;
  iVar4 = *DAT_2c64d95c;
  do {
    puVar1 = (undefined1 *)(iVar4 + iVar6);
    iVar5 = *(int *)(param_1 + 8) + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar5 + 0x38) = *puVar1;
  } while (iVar6 != 0xb);
  return;
}

