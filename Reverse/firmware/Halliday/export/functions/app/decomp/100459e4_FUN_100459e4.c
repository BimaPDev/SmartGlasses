/* FUN_100459e4 @ 0x100459e4 */

void FUN_100459e4(byte *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10045a18;
  if (param_2 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*param_1 < 2) {
      FUN_10045974();
    }
    uVar1 = 1;
  }
  if (*DAT_10045a18 != iVar2) {
    FUN_1013cdc0(uVar1);
  }
  return;
}

