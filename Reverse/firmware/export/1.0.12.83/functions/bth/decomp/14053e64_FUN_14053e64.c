/* FUN_14053e64 @ 0x14053e64 */

undefined1 FUN_14053e64(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_14053e94;
  do {
    pbVar1 = (byte *)(iVar2 + 0x12);
    iVar2 = iVar2 + 0x14;
    if (*pbVar1 == param_1) {
      return *(undefined1 *)(DAT_14053e94 + iVar3 * 0x14 + 0x10);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return 0xff;
}

