/* FUN_2c4b6a94 @ 0x2c4b6a94 */

void FUN_2c4b6a94(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = 3;
    uVar2 = 0x10;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    uVar2 = uVar2 | 0x20;
    uVar1 = uVar1 | 0xc;
  }
  if (param_2 != 0) {
    FUN_2c4b6750(uVar2,0x40000,1);
    FUN_2c4b6058(uVar2,1);
    FUN_2c4b5eac(1,uVar1);
    FUN_2c4b5f50(uVar2,uVar1,1);
    return;
  }
  FUN_2c4b5f50(uVar2,uVar1,0);
  FUN_2c4b6058(uVar2,0);
  FUN_2c4b6750(uVar2,0x40000,0);
  return;
}

