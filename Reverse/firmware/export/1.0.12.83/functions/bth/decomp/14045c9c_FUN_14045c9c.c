/* FUN_14045c9c @ 0x14045c9c */

void FUN_14045c9c(undefined1 param_1)

{
  int iVar1;
  undefined1 local_120 [4];
  undefined1 local_11c;
  int local_14;
  
  iVar1 = DAT_14045d44;
  local_14 = *DAT_14045d38;
  FUN_1402a6e8(4,0x40e,DAT_14045d40,DAT_14045d3c,DAT_14045d30,DAT_14045d34);
  *(undefined2 *)(iVar1 + 0x2c4) = 0;
  FUN_14045194(9,0xff);
  if (*(char *)(iVar1 + 0x273) == '\0') {
    if (*(char *)(iVar1 + 0x288) == '\0') {
      FUN_14043b00();
    }
    else {
      FUN_140422fc(iVar1 + 0x28b,*(undefined1 *)(iVar1 + 0x28a));
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x273) = 0;
    FUN_1404499c(*(undefined1 *)(iVar1 + 0x278),*(undefined2 *)(iVar1 + 0x276),
                 *(undefined2 *)(iVar1 + 0x274));
  }
  local_120[0] = 0x18;
  local_11c = param_1;
  FUN_14041ad8(local_120,0);
  if (*DAT_14045d38 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

