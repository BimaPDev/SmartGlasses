/* FUN_100d335c @ 0x100d335c */

undefined4 FUN_100d335c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (DAT_100d33b8 - DAT_100d33b4) * 0x20 & 0xff00;
  if (((param_1 + 0x38U & 0xff) < 0xd) && (param_2 != 0)) {
    *(int *)(DAT_100d33c4 + (param_1 + -200) * 4) = param_2;
    FUN_100a5b78(uVar2 | 0x450031,DAT_100d33c0,DAT_100d33c8,param_1,param_1,param_2);
    uVar1 = 0;
  }
  else {
    FUN_100a5b78(uVar2 | 0x400022,DAT_100d33c0,DAT_100d33bc,param_2,param_1,param_2);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

