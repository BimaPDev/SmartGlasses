/* FUN_140b35fc @ 0x140b35fc */

undefined4 FUN_140b35fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_11;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_140b36bc;
  local_11 = 0;
  FUN_140a6ce8(1,param_2,param_3,0);
  FUN_140b490c();
  FUN_1402a6e8(4,0x1c8,DAT_140b36c4,DAT_140b36c8,DAT_140b36c0);
  FUN_1409ffb4(&local_10);
  FUN_140a0ee0();
  FUN_140a02ec();
  FUN_140a001c(DAT_140b36cc);
  FUN_1409ffe4(local_10);
  FUN_140a0f2c();
  FUN_140a6cf4();
  iVar1 = FUN_14027bd8();
  if (iVar1 << 10 < 0) {
    FUN_14027c7c(0x700000);
    FUN_140a5a94(0,0);
    iVar1 = FUN_14027bd8();
  }
  else {
    iVar1 = FUN_14027bd8();
  }
  if (iVar1 << 9 < 0) {
    FUN_14027c7c(0x700000);
    local_11 = 1;
    FUN_1402d7bc(2);
    FUN_140a35e4(0,&local_11,1,0x20);
    FUN_140a67a0(0);
  }
  if (*DAT_140b36bc != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return 0;
}

