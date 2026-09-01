/* FUN_100e09f8 @ 0x100e09f8 */

byte * FUN_100e09f8(uint param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  pbVar2 = DAT_100e0a4c;
  iVar6 = 0;
  uVar1 = *DAT_100e0a50;
  pbVar5 = DAT_100e0a4c;
  uVar7 = param_1;
  uVar8 = param_3;
  do {
    if ((int)((uVar1 & 0x7ff) >> 7) <= iVar6) {
      return (byte *)0x0;
    }
    if (((*(ushort *)(pbVar5 + 0xe) & param_1) != 0) && (*pbVar5 == param_2)) {
      iVar4 = iVar6 * 0x60;
      iVar3 = FUN_1011ea30(pbVar5 + 1,param_3,7,iVar4,uVar7,iVar4,uVar8);
      if (iVar3 == 0) {
        return pbVar2 + iVar4;
      }
    }
    iVar6 = iVar6 + 1;
    pbVar5 = pbVar5 + 0x60;
  } while( true );
}

