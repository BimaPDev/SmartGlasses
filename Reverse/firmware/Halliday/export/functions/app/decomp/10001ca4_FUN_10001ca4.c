/* FUN_10001ca4 @ 0x10001ca4 */

void FUN_10001ca4(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_10001cb8;
  if (*(byte *)(DAT_10001cb8 + 2) != param_1) {
    FUN_10003158();
    *(char *)(iVar1 + 2) = (char)param_1;
  }
  return;
}

