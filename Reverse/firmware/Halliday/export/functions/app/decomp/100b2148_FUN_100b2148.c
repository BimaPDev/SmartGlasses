/* FUN_100b2148 @ 0x100b2148 */

undefined4 FUN_100b2148(int param_1)

{
  undefined4 uVar1;
  
  FUN_100a5b78(DAT_100b2188 | ((int)PTR_DAT_100b2180 - (int)PTR_DAT_100b217c) * 0x20 & 0xff00U,
               PTR_s___handle__p___1017f2f8_1_100b2184,param_1);
  if (*(char *)(param_1 + 0x62) == '\x01') {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x62) = 2;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

