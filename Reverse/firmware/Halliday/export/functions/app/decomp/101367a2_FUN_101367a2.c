/* FUN_101367a2 @ 0x101367a2 */

bool FUN_101367a2(void)

{
  byte *pbVar1;
  bool bVar2;
  
  pbVar1 = (byte *)FUN_10136622();
  bVar2 = false;
  if (pbVar1 != (byte *)0x0) {
    bVar2 = (*pbVar1 & 0xf) == 2;
  }
  return bVar2;
}

