/* FUN_1409b5d8 @ 0x1409b5d8 */

void FUN_1409b5d8(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_10;
  uint local_c;
  
  local_c = *DAT_1409b634;
  local_10 = 0;
  uVar2 = FUN_140987fc(0,0,&local_10,0);
  uVar3 = uVar2 & 0xffffffff00000000;
  if ((int)uVar2 == 0) {
    uVar1 = *(uint *)(local_10 + 0x20) / (uint)*(byte *)(local_10 + 0xc);
    if (*(byte *)(local_10 + 0xd) < 0x11) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 2;
    }
    uVar3 = FUN_140e40ac((int)((ulonglong)uVar1 * (ulonglong)DAT_1409b638),
                         (int)((ulonglong)uVar1 * (ulonglong)DAT_1409b638 >> 0x20),
                         *(int *)(local_10 + 4),*(int *)(local_10 + 4) >> 0x1f);
  }
  if ((*DAT_1409b634 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)uVar3,(int)(uVar3 >> 0x20),*DAT_1409b634 ^ local_c,0);
}

