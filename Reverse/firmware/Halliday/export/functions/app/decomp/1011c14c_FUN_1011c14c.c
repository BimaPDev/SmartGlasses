/* FUN_1011c14c @ 0x1011c14c */

byte FUN_1011c14c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined1 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  FUN_1011c0c6(0);
  bVar1 = FUN_10060908(param_2,param_3,param_4,param_5,param_6,uVar2);
  FUN_100609e8();
  return bVar1 ^ 1;
}

