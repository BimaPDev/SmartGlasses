/* FUN_2c5c4468 @ 0x2c5c4468 */

uint FUN_2c5c4468(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1 == 0) || (uVar4 = (uint)(param_2 == 0), param_2 == 0)) ||
      (*(int *)(param_1 + 0x48) == 0)) ||
     (((*(int *)(param_2 + 0x48) == 0 ||
       (uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x18), uVar3 == 0)) ||
      (uVar1 = *(uint *)(*(int *)(param_2 + 0x48) + 0x18), uVar1 <= uVar3)))) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = FUN_2c6741d8(uVar1 - uVar3);
    *param_3 = uVar2;
  }
  return uVar4;
}

