/* FUN_10064b38 @ 0x10064b38 */

undefined4 FUN_10064b38(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((int)*DAT_10064b78 >> (uVar2 & 0xff) & 1U) == 0) {
      *DAT_10064b78 = 1 << (uVar2 & 0xff) | *DAT_10064b78;
      uVar1 = FUN_1011ea48(DAT_10064b7c + uVar2 * 0x20,0,0x20);
      return uVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x14);
  FUN_10119dc2(DAT_10064b80);
  return 0;
}

