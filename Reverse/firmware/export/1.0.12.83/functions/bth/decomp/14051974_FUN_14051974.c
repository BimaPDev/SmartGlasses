/* FUN_14051974 @ 0x14051974 */

uint FUN_14051974(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_140516a0();
  if (uVar1 == 0xff) {
    uVar1 = (uint)*(byte *)(DAT_140519b8 + 0x122);
    if (uVar1 == 0xff) {
      iVar2 = FUN_1404a1b4(0);
      if (*(char *)(iVar2 + 0xda) == '\x01') {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_14050c00(0xff);
        if (uVar1 == 0xff) {
          FUN_1404a1b4(0);
          return 0;
        }
      }
    }
  }
  return uVar1;
}

