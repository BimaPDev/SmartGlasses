/* FUN_140b2cf4 @ 0x140b2cf4 */

void FUN_140b2cf4(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  local_14 = *DAT_140b2d9c;
  FUN_1402a6e8(4,0xa2,DAT_140b2d94,DAT_140b2d90,DAT_140b2d88,DAT_140b2d8c);
  FUN_1402a9fc(DAT_140b2d98,1,param_2,param_1);
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 0x1f) {
    iVar2 = FUN_140b293c(param_1 + 5,bVar1);
    if (iVar2 != 0) {
      FUN_1409fec8(param_1 + 5,*(undefined1 *)(param_1 + 4));
      FUN_140aea74();
      local_18 = 2;
      local_17 = 1;
      FUN_140afb5c(&local_18);
    }
  }
  else {
    FUN_1402a6e8(4,0x122,DAT_140b2d94,DAT_140b2d90,DAT_140b2da0,bVar1);
  }
  if (*DAT_140b2d9c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

