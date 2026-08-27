/* FUN_2c01751c @ 0x2c01751c */

void FUN_2c01751c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  do {
    thunk_FUN_2c016438();
    if (param_2 == 3) {
      iVar1 = func_0x2c0173c8();
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      iVar1 = FUN_2c017408(param_1,param_2);
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_2c0185bc(10);
  } while( true );
}

