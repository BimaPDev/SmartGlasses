/* FUN_140c17d4 @ 0x140c17d4 */

void FUN_140c17d4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar2 = (undefined4 *)FUN_140bff34(0x128);
    uVar1 = DAT_140c1858;
    puVar2[1] = 0;
    *puVar2 = uVar1;
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined1 *)(puVar2 + 0x49) = 0;
    *(undefined4 **)(param_1 + 8) = puVar2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
  }
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar6 + 8) = DAT_140c185c;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(undefined1 *)(iVar6 + 0x10) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0x2e;
  *(undefined4 *)(iVar6 + 0x28) = 0x2c;
  iVar5 = *DAT_140c1860;
  pbVar4 = (byte *)(iVar5 + -1);
  puVar3 = (uint *)(iVar6 + 0x2c);
  do {
    pbVar4 = pbVar4 + 1;
    *puVar3 = (uint)*pbVar4;
    puVar3 = puVar3 + 1;
  } while (pbVar4 != (byte *)(iVar5 + 0x23));
  iVar5 = *DAT_140c1864;
  pbVar4 = (byte *)(iVar5 + -1);
  puVar3 = (uint *)(iVar6 + 0xbc);
  do {
    pbVar4 = pbVar4 + 1;
    *puVar3 = (uint)*pbVar4;
    puVar3 = puVar3 + 1;
  } while (pbVar4 != (byte *)(iVar5 + 0x19));
  *(undefined4 *)(iVar6 + 0x14) = DAT_140c1868;
  *(undefined4 *)(iVar6 + 0x18) = 4;
  *(undefined4 *)(iVar6 + 0x1c) = DAT_140c186c;
  *(undefined4 *)(iVar6 + 0x20) = 5;
  return;
}

