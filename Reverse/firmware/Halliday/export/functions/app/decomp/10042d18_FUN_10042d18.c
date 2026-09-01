/* FUN_10042d18 @ 0x10042d18 */

void FUN_10042d18(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 10) {
    uVar2 = 10;
  }
  iVar1 = *DAT_10042d80;
  *DAT_10042d84 = (char)uVar2;
  if (param_1 != 0xff) goto LAB_10042d6c;
  FUN_10042a74();
  while( true ) {
    FUN_100a5b78((DAT_10042d8c - DAT_10042d88) * 0x20 & 0xff00U | 0xbb0032,DAT_10042d98,DAT_10042d94
                 ,uVar2,*DAT_10042d90);
    if (*DAT_10042d80 == iVar1) break;
    FUN_1013cdc0();
LAB_10042d6c:
    FUN_100a22fc(uVar2);
    FUN_10042ae4();
    FUN_10042cec();
  }
  return;
}

