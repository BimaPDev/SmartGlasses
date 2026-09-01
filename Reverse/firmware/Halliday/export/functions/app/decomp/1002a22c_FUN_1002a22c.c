/* FUN_1002a22c @ 0x1002a22c */

void FUN_1002a22c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1002a2d0;
  FUN_10126f32(param_1,0xffffffff,0,0,param_1);
  FUN_10126f32(param_1,0,0x40000);
  FUN_10126e82(param_1,0xffffffff,0);
  FUN_10126e82(param_1,0xffffffff,0x40000);
  FUN_10126eb6(param_1,0xffffffff,0x40000);
  FUN_10126f7a(param_1,4,0x40000);
  FUN_10126ea2(param_1,0xff,0x40000);
  FUN_10126ed6(param_1,0x7f,0);
  FUN_10126f7a(param_1,10,2);
  FUN_10126eb6(param_1,0xffffffff,2);
  if (*DAT_1002a2d0 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10126ee0(param_1,1,2);
  return;
}

