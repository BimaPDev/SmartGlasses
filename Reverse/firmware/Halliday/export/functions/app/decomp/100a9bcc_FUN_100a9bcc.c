/* FUN_100a9bcc @ 0x100a9bcc */

undefined4 FUN_100a9bcc(uint param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = DAT_100a9bfc;
  while ((*pbVar1 != param_1 || (pbVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x14;
    if (iVar2 == 0x12) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(DAT_100a9bfc + iVar2 * 0x14 + 4);
}

