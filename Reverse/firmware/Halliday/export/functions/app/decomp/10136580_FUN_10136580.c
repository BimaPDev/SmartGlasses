/* FUN_10136580 @ 0x10136580 */

undefined4 FUN_10136580(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10136574();
  iVar2 = FUN_100d45f8(uVar1,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar1;
}

