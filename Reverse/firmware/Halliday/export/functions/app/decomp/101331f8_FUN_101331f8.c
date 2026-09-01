/* FUN_101331f8 @ 0x101331f8 */

undefined4 FUN_101331f8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100e0b10();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, *(short *)(iVar1 + 0xe) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

