/* FUN_2c47f79e @ 0x2c47f79e */

void FUN_2c47f79e(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0 < (param_4 << 0x16) >> 0x18) {
    puVar2 = (undefined4 *)(param_1 + -4);
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    } while ((undefined4 *)(param_1 + ((param_4 >> 2) - 1U & 0xff) * 4) != puVar2);
  }
  if (0 < param_3) {
    iVar4 = 0;
    do {
      uVar5 = (param_3 + -1) - iVar4;
      pbVar1 = (byte *)(param_2 + iVar4);
      uVar3 = uVar5 & 0xfffffffc;
      iVar4 = (int)(char)((char)iVar4 + '\x01');
      *(uint *)(param_1 + uVar3) = (uint)*pbVar1 << ((uVar5 & 3) << 3) | *(uint *)(param_1 + uVar3);
    } while (iVar4 < param_3);
  }
  return;
}

