/* FUN_1007cbc4 @ 0x1007cbc4 */

void FUN_1007cbc4(void)

{
  int iVar1;
  undefined4 in_r3;
  
  FUN_1007c4fc();
  iVar1 = DAT_1007cc08;
  if ((int)((uint)*(byte *)(DAT_1007cc08 + 0x13c) << 0x1e) < 0) {
    *(byte *)(DAT_1007cc08 + 0x13c) = *(byte *)(DAT_1007cc08 + 0x13c) & 0xfd;
    if (*(code **)(iVar1 + 0x164) != (code *)0x0) {
      (**(code **)(iVar1 + 0x164))(5,0);
    }
  }
  FUN_100a5b78((DAT_1007cc10 - DAT_1007cc0c) * 0x20 & 0xff00U | 0xba0031,DAT_1007cc18,DAT_1007cc14,
               in_r3);
  return;
}

