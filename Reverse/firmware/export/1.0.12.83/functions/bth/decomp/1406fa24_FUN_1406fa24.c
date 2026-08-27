/* FUN_1406fa24 @ 0x1406fa24 */

void FUN_1406fa24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140709d0();
  if (((iVar1 != 0) && (iVar1 = FUN_1406e2c8(param_1,param_3), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0xc) == '\x05')) {
    *(undefined1 *)(iVar1 + 0x1f) = 1;
    if (*(char *)(iVar1 + 0x26) == '\0') {
      FUN_1406e314(param_1,param_3,4);
      return;
    }
  }
  return;
}

