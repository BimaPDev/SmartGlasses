/* FUN_101375c8 @ 0x101375c8 */

void FUN_101375c8(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_100deb94();
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}

