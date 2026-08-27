/* FUN_140448d0 @ 0x140448d0 */

void FUN_140448d0(uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 local_120 [4];
  undefined1 local_11c;
  int local_14;
  
  local_14 = *DAT_14044970;
  uVar2 = 0;
  FUN_1402a6e8(4,0x36b,DAT_14044978,DAT_14044974,DAT_14044968,DAT_1404496c);
  pbVar1 = (byte *)(*(int *)(DAT_1404497c + 0xe3e) + 0xc);
  do {
    if (param_1 == *pbVar1) {
      local_11c = (char)uVar2;
      if (*(char *)(DAT_1404497c + uVar2 + 0x88) != *(char *)(DAT_1404497c + uVar2 + 0x6c)) {
        FUN_14044840(uVar2 & 0xff);
      }
      goto LAB_14044912;
    }
    uVar2 = uVar2 + 1;
    pbVar1 = pbVar1 + 1;
  } while (uVar2 != 4);
  local_11c = 4;
LAB_14044912:
  local_120[0] = 0xc;
  FUN_14041ad8(local_120,0);
  FUN_1402a6e8(4,0x37c,DAT_14044978,DAT_14044974,DAT_14044980,uVar2);
  FUN_14043b00();
  if (*DAT_14044970 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

