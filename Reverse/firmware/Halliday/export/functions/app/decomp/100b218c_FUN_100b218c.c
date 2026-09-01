/* FUN_100b218c @ 0x100b218c */

undefined4 FUN_100b218c(int param_1)

{
  undefined4 uVar1;
  
  FUN_100a5b78(DAT_100b21dc | ((int)PTR_DAT_100b21d4 - (int)PTR_DAT_100b21d0) * 0x20 & 0xff00U,
               PTR_s___handle__p___1017f2f8_1_100b21d8,param_1);
  if (*(char *)(param_1 + 0x62) == '\x02') {
    *(undefined1 *)(param_1 + 0x62) = 1;
    uVar1 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      thunk_FUN_10113fd0(param_1 + 0x94);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

