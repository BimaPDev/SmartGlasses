/* FUN_100e0b10 @ 0x100e0b10 */

byte * FUN_100e0b10(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar2 = DAT_100e0b58;
  iVar5 = 0;
  uVar1 = *DAT_100e0b5c;
  pbVar4 = DAT_100e0b58;
  do {
    if ((int)((uVar1 & 0x7ff) >> 7) <= iVar5) {
      return (byte *)0x0;
    }
    if (*pbVar4 == param_1) {
      iVar3 = FUN_1011ea30(pbVar4 + 1,param_2,7,(uint)*pbVar4,param_4);
      if (iVar3 == 0) {
        return pbVar2 + iVar5 * 0x60;
      }
    }
    iVar5 = iVar5 + 1;
    pbVar4 = pbVar4 + 0x60;
  } while( true );
}

