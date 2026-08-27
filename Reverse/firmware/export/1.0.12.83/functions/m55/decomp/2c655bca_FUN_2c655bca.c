/* FUN_2c655bca @ 0x2c655bca */

undefined4 FUN_2c655bca(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_24 [24];
  undefined4 uStack_c;
  
  uStack_c = 0;
  FUN_2c650b00(0,*(undefined4 *)(param_2 + 0xc),auStack_24,param_3,param_4);
  FUN_2c655b40(param_1,auStack_24);
  FUN_2c64fbf6(auStack_24);
  return param_1;
}

