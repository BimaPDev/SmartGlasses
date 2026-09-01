/* FUN_100bcaf4 @ 0x100bcaf4 */

void FUN_100bcaf4(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10119dc2(DAT_100bcb54);
  uVar1 = (uint)*DAT_100bcb58;
  uVar2 = (uint)DAT_100bcb58[1];
  FUN_10119dc2(DAT_100bcb5c,uVar1 & 1,*(undefined4 *)(DAT_100bcb58 + 4),(uVar1 & 0xf) >> 1,
               (uVar1 & 0x1f) >> 4,(uVar1 & 0x7f) >> 5,*DAT_100bcb58 >> 7,uVar2 & 1,(uVar2 & 3) >> 1
               ,(uVar2 & 7) >> 2,(uVar2 & 0x1f) >> 4,(uVar2 & 0xf) >> 3,
               *(undefined4 *)(DAT_100bcb58 + 8),DAT_100bcb58 + 0x18);
  return;
}

