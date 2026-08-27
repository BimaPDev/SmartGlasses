/* FUN_2c4c261c @ 0x2c4c261c */

undefined4 FUN_2c4c261c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 <= DAT_2c4c264c + 0x118) && (param_1 >= DAT_2c4c264c)) {
    uVar1 = FUN_2c4c2440(param_1,0,0,param_1 < DAT_2c4c264c,param_2);
    return uVar1;
  }
  return 2;
}

