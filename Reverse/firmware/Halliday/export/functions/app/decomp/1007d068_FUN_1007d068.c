/* FUN_1007d068 @ 0x1007d068 */

undefined4 FUN_1007d068(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  if (*(byte *)(DAT_1007d098 + 0x1b2) < 10) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    pbVar4 = (byte *)(DAT_1007d098 + 0x1a8);
    while( true ) {
      uVar1 = 0;
      if (*pbVar4 == 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
      if (iVar2 == 10) {
        if (iVar3 == 0x14) {
          uVar1 = 2;
        }
        else {
          uVar1 = 1;
        }
        return uVar1;
      }
    }
  }
  return uVar1;
}

