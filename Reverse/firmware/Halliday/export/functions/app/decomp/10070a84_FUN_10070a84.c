/* FUN_10070a84 @ 0x10070a84 */

void FUN_10070a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = DAT_10070abc;
  FUN_10119dc2(DAT_10070ac0,param_1 / 10,param_1 % 10);
  *puVar1 = *puVar1 & 0xfe01ffff | param_1 << 0x11;
  FUN_10070810();
  FUN_10119dc2(DAT_10070ac8,*puVar1,*DAT_10070ac4,param_4);
  return;
}

