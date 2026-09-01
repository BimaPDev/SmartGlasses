/* FUN_10045b58 @ 0x10045b58 */

void FUN_10045b58(void)

{
  int iVar1;
  undefined1 local_19;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_10045bc4;
  FUN_100a5b78(DAT_10045bd0 | (DAT_10045bcc - DAT_10045bc8) * 0x20 & 0xff00U,DAT_10045bd8,
               DAT_10045bd4);
  local_18 = 0x4302;
  local_14 = &local_19;
  local_19 = 1;
  local_10 = 1;
  iVar1 = FUN_100506fc(&local_18);
  *DAT_10045bdc = 0;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  if (*DAT_10045bc4 != local_c) {
    FUN_1013cdc0(iVar1);
  }
  return;
}

