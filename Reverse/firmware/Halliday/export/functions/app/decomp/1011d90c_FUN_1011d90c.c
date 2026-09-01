/* FUN_1011d90c @ 0x1011d90c */

undefined4 FUN_1011d90c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 != 0x20)) {
    uVar1 = 0;
  }
  else if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1011d78a(param_1,param_3);
    FUN_100639d8(param_3);
    FUN_1011d73e(param_3,param_3 + 0xb0,0x40);
    FUN_1011d73e(param_3,param_1,0x20);
    FUN_1011d78a(param_1,param_3);
    thunk_FUN_1011ea48(param_3,0,0xf0);
    uVar1 = 1;
  }
  return uVar1;
}

