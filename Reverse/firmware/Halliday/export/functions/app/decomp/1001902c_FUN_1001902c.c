/* FUN_1001902c @ 0x1001902c */

void FUN_1001902c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_15;
  int local_14;
  
  local_14 = *DAT_100190b8;
  uVar1 = FUN_100a735c();
  iVar2 = FUN_100a7d8c(3);
  iVar3 = FUN_100ba094();
  if (iVar3 != 0) {
    if (0 < iVar2) goto LAB_10019096;
    local_15 = 0;
    while( true ) {
      uVar1 = (DAT_100190c0 - DAT_100190bc) * 0x20 & 0xff00;
      FUN_100a5b78(uVar1 | 0x670032,DAT_100190c8,DAT_100190c4,iVar2,local_15);
      uVar4 = thunk_FUN_101369dc(3,&local_15,1);
LAB_10019088:
      if (*DAT_100190b8 == local_14) break;
      FUN_1013cdc0(uVar4);
LAB_10019096:
      if (iVar2 < (int)uVar1) {
        local_15 = (undefined1)((iVar2 * 0x7f) / (int)uVar1);
      }
      else {
        local_15 = 0x7f;
      }
    }
    return;
  }
  uVar4 = 0xffffffed;
  goto LAB_10019088;
}

