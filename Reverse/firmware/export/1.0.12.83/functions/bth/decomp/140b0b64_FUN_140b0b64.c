/* FUN_140b0b64 @ 0x140b0b64 */

void FUN_140b0b64(uint param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  int local_14;
  
  local_14 = *DAT_140b0bf4;
  FUN_1402a6e8(4,9,DAT_140b0bf0,DAT_140b0bec,DAT_140b0be4,DAT_140b0be8,param_1);
  local_16 = 0;
  local_18 = 0;
  local_1c = param_1 & 0xff;
  puVar2 = param_2 + 6;
  puVar1 = &local_1c;
  do {
    puVar2 = puVar2 + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    *(undefined1 *)puVar1 = *puVar2;
  } while (puVar2 != param_2);
  FUN_140a49fc(0x42,&local_1c,7);
  if (*DAT_140b0bf4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

