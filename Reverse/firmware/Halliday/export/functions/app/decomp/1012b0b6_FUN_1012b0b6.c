/* FUN_1012b0b6 @ 0x1012b0b6 */

int FUN_1012b0b6(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x400 - param_1;
  uVar2 = (uint)(iVar3 * iVar3) >> 10;
  uVar1 = (uint)(param_1 * param_1) >> 10;
  return ((uVar1 * param_1 >> 10) * param_5 >> 10) + (uVar2 * param_3 * param_1 * 3 >> 0x14) +
         (param_4 * iVar3 * uVar1 * 3 >> 0x14) + (param_2 * (uVar2 * iVar3 >> 10) >> 10);
}

