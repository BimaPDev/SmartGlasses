/* FUN_14044590 @ 0x14044590 */

void FUN_14044590(uint param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 local_120 [4];
  undefined1 local_11c;
  int local_14;
  
  local_14 = *DAT_14044634;
  FUN_1402a6e8(4,899,DAT_1404463c,DAT_14044638,DAT_1404462c,DAT_14044630);
  iVar2 = DAT_14044640;
  uVar4 = 0;
  pbVar3 = (byte *)(*(int *)(DAT_14044640 + 0xe3e) + 0xc);
  do {
    local_11c = (undefined1)uVar4;
    if (param_1 == *pbVar3) {
      bVar1 = *(byte *)(DAT_14044640 + 0xc5d) >> (uVar4 & 0xff);
      if ((bVar1 & 1) == 0) {
        *(byte *)(DAT_14044640 + 0xc5d) = bVar1 & 1;
      }
      *(undefined1 *)(uVar4 + iVar2 + 0x88) = 100;
      goto LAB_140445e4;
    }
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (uVar4 != 4);
  local_11c = 4;
  if (-1 < (int)((uint)*(byte *)(DAT_14044640 + 0xc5d) << 0x1b)) {
    *(byte *)(DAT_14044640 + 0xc5d) =
         (byte)(((uint)*(byte *)(DAT_14044640 + 0xc5d) << 0x1b) >> 0x1f);
  }
LAB_140445e4:
  local_120[0] = 0xe;
  FUN_14041ad8(local_120,0);
  FUN_14043b00();
  if (*DAT_14044634 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

