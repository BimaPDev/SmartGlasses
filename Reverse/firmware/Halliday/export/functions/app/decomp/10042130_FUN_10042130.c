/* FUN_10042130 @ 0x10042130 */

void FUN_10042130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1004217c;
  if (*DAT_10042180 == '\0') goto LAB_10042170;
  FUN_100a5b78((DAT_10042188 - DAT_10042184) * 0x20 & 0xff00U | 0x1f80031,DAT_10042190,DAT_1004218c,
               1,param_1,iVar2,param_3);
  uVar1 = 0;
  while( true ) {
    if (*DAT_1004217c == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_10042170:
    uVar1 = *DAT_10042194;
  }
  return;
}

