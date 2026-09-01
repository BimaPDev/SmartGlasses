/* FUN_1007a568 @ 0x1007a568 */

uint FUN_1007a568(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r3;
  byte *pbVar5;
  
  pbVar1 = DAT_1007a5b4;
  uVar2 = 0;
  uVar3 = (uint)DAT_1007a5b4[0xe];
  pbVar5 = DAT_1007a5b4;
  for (iVar4 = 0; iVar4 < (int)uVar3; iVar4 = iVar4 + 1) {
    uVar2 = uVar2 + *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar3 == 0) {
    FUN_100a5b78((DAT_1007a5bc - DAT_1007a5b8) * 0x20 & 0xff00U | 0x1a20011,DAT_1007a5c4,
                 DAT_1007a5c0,DAT_1007a5b8,in_r3);
    uVar2 = (uint)*pbVar1;
  }
  else {
    uVar2 = uVar2 / uVar3 & 0xff;
    if (99 < uVar2) {
      uVar2 = 100;
    }
  }
  return uVar2;
}

