/* FUN_1005d1b8 @ 0x1005d1b8 */

undefined4 FUN_1005d1b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_1005d1d8;
  if (*(char *)(DAT_1005d1d8 + 0x18) == '\0') {
    FUN_100539a4();
  }
  else {
    param_2 = FUN_1005cf54();
    FUN_1011b9ae(iVar1);
  }
  return param_2;
}

