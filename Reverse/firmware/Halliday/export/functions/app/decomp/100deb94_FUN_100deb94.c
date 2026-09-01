/* FUN_100deb94 @ 0x100deb94 */

void FUN_100deb94(uint param_1)

{
  byte *pbVar1;
  
  for (pbVar1 = (byte *)*DAT_100debac; (pbVar1 != (byte *)0x0 && (param_1 != *pbVar1 >> 2));
      pbVar1 = *(byte **)(pbVar1 + 0xc)) {
  }
  return;
}

