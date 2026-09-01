/* FUN_100a9c60 @ 0x100a9c60 */

undefined4 FUN_100a9c60(uint param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = DAT_100a9c8c;
  while ((*pbVar1 != param_1 || (pbVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x14;
    if (iVar2 == 0x12) {
      return 0;
    }
  }
  return *(undefined4 *)(DAT_100a9c8c + iVar2 * 0x14 + 0xc);
}

