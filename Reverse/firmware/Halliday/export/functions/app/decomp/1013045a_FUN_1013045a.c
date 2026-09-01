/* FUN_1013045a @ 0x1013045a */

undefined4 FUN_1013045a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 1) {
      thunk_FUN_10113fd0(param_1 + 0x78);
    }
    uVar1 = 0;
  }
  return uVar1;
}

