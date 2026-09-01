/* FUN_100a25f8 @ 0x100a25f8 */

undefined4 FUN_100a25f8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  
  puVar1 = (undefined4 *)FUN_10112e84(DAT_100a2644);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78((DAT_100a264c - DAT_100a2648) * 0x20 & 0xff00U | 0x430011,DAT_100a2654,DAT_100a2650
                 ,DAT_100a2648,in_r3);
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = FUN_1013c646();
    if (iVar3 == 0) {
      FUN_1011dc50(DAT_100a2658,*puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    FUN_1005c250(puVar1);
    uVar2 = 0;
  }
  return uVar2;
}

