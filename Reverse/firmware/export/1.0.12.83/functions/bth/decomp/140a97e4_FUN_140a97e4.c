/* FUN_140a97e4 @ 0x140a97e4 */

void FUN_140a97e4(void)

{
  byte bVar1;
  
  bVar1 = *(byte *)(DAT_140a981c + (uint)*DAT_140a9814 * 2 + (uint)*DAT_140a9818);
  if (bVar1 < *DAT_140a9820) {
    bVar1 = *DAT_140a9820;
  }
  if (bVar1 == 0) {
    return;
  }
  if (*DAT_140a9824 != '\0') {
    bVar1 = 0xe;
  }
  FUN_140b4344(0x11,bVar1);
  return;
}

