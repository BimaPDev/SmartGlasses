/* FUN_140afd4c @ 0x140afd4c */

void FUN_140afd4c(undefined1 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_14;
  undefined1 local_13 [7];
  int local_c;
  
  local_c = *DAT_140afda0;
  puVar2 = param_2 + 6;
  puVar1 = &local_14;
  do {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
  } while (puVar2 != param_2);
  local_14 = param_1;
  FUN_140a49fc(0xb2,&local_14,7);
  if (*DAT_140afda0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

