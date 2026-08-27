/* thunk_FUN_14096c50 @ 0x1403ce6c */

undefined4 thunk_FUN_14096c50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14096b4c();
  if (iVar1 != 0) {
    FUN_140755e4();
    iVar1 = FUN_14088cf8(iVar1 + 0x10,param_2);
    FUN_1407561c();
    if (iVar1 == 0) {
      return 2;
    }
  }
  return 1;
}

