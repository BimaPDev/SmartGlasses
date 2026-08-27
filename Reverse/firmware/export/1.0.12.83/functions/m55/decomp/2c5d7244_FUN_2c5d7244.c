/* FUN_2c5d7244 @ 0x2c5d7244 */

void FUN_2c5d7244(undefined1 param_1)

{
  int iVar1;
  
  *DAT_2c5d7278 = param_1;
  FUN_2c5c685c();
  iVar1 = FUN_2c5c6bd0();
  if (iVar1 == 0) {
    return;
  }
  registry_lookup(0x1051);
  FUN_2c5e4068();
  iVar1 = FUN_2c5c685c();
  *(undefined1 *)(iVar1 + 0x491) = param_1;
  return;
}

