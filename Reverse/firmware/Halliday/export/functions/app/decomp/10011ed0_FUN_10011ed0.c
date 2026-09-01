/* FUN_10011ed0 @ 0x10011ed0 */

void FUN_10011ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  code *local_14;
  
  iVar2 = *DAT_10011f10;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  local_14 = param_4;
  do {
    iVar1 = FUN_1012d0fc(&uStack_20,0);
    if (iVar1 == 0) {
      FUN_1012d93a();
      if (*DAT_10011f10 == iVar2) {
        return;
      }
      FUN_1013cdc0();
    }
    if (local_14 != (code *)0x0) {
      (*local_14)(&uStack_20,0);
    }
  } while( true );
}

