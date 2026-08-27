/* FUN_2c62e27c @ 0x2c62e27c */

int FUN_2c62e27c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x400 - param_1;
  uVar1 = (uint)(param_1 * param_1) >> 10;
  uVar2 = (uint)(iVar3 * iVar3) >> 10;
  return (param_5 * (uVar1 * param_1 >> 10) >> 10) + (uVar2 * param_1 * param_3 * 3 >> 0x14) +
         (uVar1 * param_4 * iVar3 * 3 >> 0x14) + (param_2 * (uVar2 * iVar3 >> 10) >> 10);
}

