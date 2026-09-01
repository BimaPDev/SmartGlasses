/* FUN_100a7954 @ 0x100a7954 */

undefined4 FUN_100a7954(uint param_1,int param_2)

{
  byte *pbVar1;
  bool bVar2;
  
  if (((*DAT_100a7978 != 0) && (pbVar1 = *(byte **)(*DAT_100a7978 + 0x14), pbVar1 != (byte *)0x0))
     && (*pbVar1 == param_1)) {
    bVar2 = param_2 != 0;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10117c88(DAT_100a8cbc,0x359,DAT_100a8cb8,DAT_100a8cb4);
    }
    FUN_100a5b78(DAT_100a8cc8 | (DAT_100a8cc4 - DAT_100a8cc0) * 0x20 & 0xff00U,DAT_100a8cd0,
                 DAT_100a8ccc,bVar2);
    pbVar1[9] = pbVar1[9] & 0xfe | bVar2;
    FUN_10064518(*(undefined4 *)(pbVar1 + 0x24),bVar2);
    return 0;
  }
  return 0xfffffffd;
}

