/* FUN_140c3aea @ 0x140c3aea */

undefined4
FUN_140c3aea(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  undefined1 auStack_2c [24];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_140c8fb8(0,*(undefined4 *)(param_2 + 0x10),auStack_2c,param_3,param_4,param_5,*param_6,
               *(undefined4 *)(*param_6 + -0xc));
  FUN_140c3a9c(param_1,auStack_2c);
  FUN_140c2d82(auStack_2c);
  return param_1;
}

