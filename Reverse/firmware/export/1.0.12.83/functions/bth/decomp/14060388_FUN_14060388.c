/* FUN_14060388 @ 0x14060388 */

void FUN_14060388(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar2 = DAT_14060418;
  local_14 = *DAT_14060414;
  bVar1 = *(byte *)(DAT_14060418 + 0xac);
  *(char *)(DAT_14060418 + 0xac) = (char)param_1;
  if (param_1 != 0) {
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0xb5) << 0x1d)) {
      *(byte *)(iVar2 + 0xb5) = *(byte *)(iVar2 + 0xb5) | 4;
      FUN_140e5378(*(undefined4 *)(iVar2 + 0x98),(uint)*(ushort *)(iVar2 + 0x34) * 1000);
    }
    if (((bVar1 != param_1) &&
        (bVar1 = *(byte *)(iVar2 + 0xb5), *(byte *)(iVar2 + 0xb5) = bVar1 | 1,
        -1 < (int)((uint)bVar1 << 0x1c))) &&
       (iVar3 = FUN_14063910(1,0xc,DAT_1406041c,&local_18), iVar3 == 0)) {
      *(byte *)(iVar2 + 0xb5) = *(byte *)(iVar2 + 0xb5) | 8;
      *(undefined1 *)(local_18 + 8) = 0;
    }
  }
  if (*DAT_14060414 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

