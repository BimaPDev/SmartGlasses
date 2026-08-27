/* FUN_1402d004 @ 0x1402d004 */

uint FUN_1402d004(void)

{
  uint uVar1;
  
  if (*DAT_1402d018 < 0x27) {
    return (uint)*(byte *)(DAT_1402d01c + (uint)*DAT_1402d018);
  }
  uVar1 = FUN_140e5088();
  return uVar1;
}

