/* FUN_140c13dc @ 0x140c13dc */

void FUN_140c13dc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar1 = (undefined4 *)FUN_140bff34(0x70);
    uVar2 = DAT_140c1458;
    puVar1[1] = 0;
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x1b) = 0;
    *(undefined4 **)(param_1 + 8) = puVar1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar5 + 0x14) = 0x2e;
  *(undefined4 *)(iVar5 + 0x18) = 0x2c;
  uVar2 = DAT_140c1460;
  *(undefined4 *)(iVar5 + 8) = DAT_140c145c;
  *(undefined4 *)(iVar5 + 0x1c) = uVar2;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = uVar2;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = uVar2;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  uVar2 = *DAT_140c1464;
  *(undefined4 *)(iVar5 + 0x38) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c) = uVar2;
  iVar5 = *DAT_140c1468;
  pbVar3 = (byte *)(iVar5 + -1);
  puVar4 = (uint *)(*(int *)(param_1 + 8) + 0x40);
  do {
    pbVar3 = pbVar3 + 1;
    *puVar4 = (uint)*pbVar3;
    puVar4 = puVar4 + 1;
  } while (pbVar3 != (byte *)(iVar5 + 10));
  return;
}

