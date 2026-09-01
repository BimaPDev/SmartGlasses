/* FUN_10088f88 @ 0x10088f88 */

void FUN_10088f88(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = DAT_10088fe4;
  if (*DAT_10088fe4 == '\0') {
    FUN_1012b1ce();
    FUN_10094a00();
    FUN_10093c2c();
    FUN_10093250();
    FUN_10087264();
    FUN_101272fa();
    FUN_1008a824();
    FUN_1012b008(DAT_10088ff4,0x268);
    FUN_1012b008(DAT_10088ff8,0x88);
    FUN_101271b6();
    FUN_1008ddb0();
    FUN_1012a552();
    *pcVar1 = '\x01';
  }
  else {
    FUN_10094174(2,DAT_10088ff0,0x66,DAT_10088fec,DAT_10088fe8,param_2);
  }
  return;
}

