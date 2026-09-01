/* thunk_FUN_1013650a @ 0x10136516 */

undefined4 thunk_FUN_1013650a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4630();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}

