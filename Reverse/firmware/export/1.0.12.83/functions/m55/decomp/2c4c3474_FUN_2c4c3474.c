/* FUN_2c4c3474 @ 0x2c4c3474 */

uint FUN_2c4c3474(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0x1b);
  uVar1 = param_1[2] - param_1[3];
  if (param_3 <= (uint)(param_1[2] - param_1[3])) {
    uVar1 = param_3;
  }
  uVar2 = param_1[1] - 1U & param_1[3];
  uVar3 = param_1[1] - uVar2;
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  FUN_2c674668(param_2,*param_1 + uVar2,uVar3,uVar2,param_4);
  FUN_2c674668(param_2 + uVar3,*param_1,uVar1 - uVar3);
  DataMemoryBarrier(0x1b);
  param_1[3] = param_1[3] + uVar1;
  return uVar1;
}

