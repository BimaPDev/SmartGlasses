/* FUN_10132e6c @ 0x10132e6c */

bool FUN_10132e6c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0xff);
  uVar1 = FUN_10132e56(param_1,~uVar2);
  return (uVar2 & uVar1) != 0;
}

