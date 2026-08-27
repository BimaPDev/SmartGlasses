/* FUN_1402ecbc @ 0x1402ecbc */

void FUN_1402ecbc(void)

{
  char *pcVar1;
  undefined4 uVar2;
  ushort local_e;
  int local_c;
  
  pcVar1 = DAT_1402ed24;
  local_c = *DAT_1402ed20;
  if (*DAT_1402ed24 == '\0') {
    uVar2 = 0x6b;
  }
  else if (*DAT_1402ed24 == '\x03') {
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x10c;
  }
  FUN_1402e1fc(uVar2,&local_e);
  local_e = local_e | 0x180;
  if (*pcVar1 == '\0') {
    uVar2 = 0x6b;
  }
  else if (*pcVar1 == '\x03') {
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x10c;
  }
  FUN_1402e37c(uVar2);
  if (*DAT_1402ed20 != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

