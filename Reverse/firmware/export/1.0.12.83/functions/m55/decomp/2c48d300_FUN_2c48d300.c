/* FUN_2c48d300 @ 0x2c48d300 */

int FUN_2c48d300(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  iVar2 = 0;
  pbVar3 = (byte *)(param_1 + -1);
  do {
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
    iVar1 = (uVar4 - 0x30) + iVar2;
    if (9 < (uVar4 - 0x30 & 0xff)) {
      iVar1 = (uVar4 - 0x57) + iVar2;
      if (uVar4 - 0x41 < 6) {
        iVar1 = (uVar4 - 0x37) + iVar2;
      }
      else if (5 < uVar4 - 0x61) {
        return 0;
      }
    }
    iVar2 = iVar1 << 4;
  } while ((byte *)(param_1 + 3) != pbVar3);
  return iVar1;
}

