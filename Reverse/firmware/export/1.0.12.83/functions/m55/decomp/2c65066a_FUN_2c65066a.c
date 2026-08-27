/* FUN_2c65066a @ 0x2c65066a */

undefined4
FUN_2c65066a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  undefined1 auStack_2c [24];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_2c655af8(0,*(undefined4 *)(param_2 + 0x10),auStack_2c,param_3,param_4,param_5,*param_6,
               *(undefined4 *)(*param_6 + -0xc));
  FUN_2c65061c(param_1,auStack_2c);
  FUN_2c64fbf6(auStack_2c);
  return param_1;
}

