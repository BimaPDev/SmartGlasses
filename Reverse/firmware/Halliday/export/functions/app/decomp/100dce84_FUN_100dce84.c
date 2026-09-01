/* FUN_100dce84 @ 0x100dce84 */

byte * FUN_100dce84(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar2 = DAT_100dcee8;
  iVar3 = 0;
  pbVar4 = DAT_100dcee8;
  do {
    if (param_1 == 0) {
      if (param_2 != 0) {
        bVar5 = pbVar4[1] == param_2;
        goto LAB_100dce9e;
      }
      if (param_3 == 0) {
        if (pbVar4[1] == 0) {
          pbVar2 = pbVar2 + iVar3 * 8;
          pbVar2[2] = pbVar2[2] & 0xfd;
          return pbVar2;
        }
      }
      else {
        iVar1 = FUN_1011ea30(*(undefined4 *)(pbVar4 + 4),param_3,0x10);
        if (iVar1 == 0) goto LAB_100dcea0;
      }
    }
    else {
      bVar5 = *pbVar4 == param_1;
LAB_100dce9e:
      if (bVar5) {
LAB_100dcea0:
        return pbVar2 + iVar3 * 8;
      }
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 8;
    if (iVar3 == 4) {
      return (byte *)0x0;
    }
  } while( true );
}

