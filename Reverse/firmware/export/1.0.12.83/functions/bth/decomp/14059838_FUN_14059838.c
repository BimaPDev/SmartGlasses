/* FUN_14059838 @ 0x14059838 */

void FUN_14059838(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  local_14 = *DAT_14059898;
  if (*(byte *)(param_1 + 0x184) < 2) {
    iVar1 = *(int *)(DAT_1405989c + (uint)*(byte *)(param_1 + 0x184) * 4);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x43) & 0x10) == 0)) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  FUN_14057d48(iVar1);
  local_18 = 5;
  local_17 = param_2;
  FUN_14059434(*(undefined1 *)(iVar1 + 0x42),&local_18);
  if (*DAT_14059898 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

