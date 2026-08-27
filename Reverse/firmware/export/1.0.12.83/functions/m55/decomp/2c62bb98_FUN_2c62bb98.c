/* FUN_2c62bb98 @ 0x2c62bb98 */

void FUN_2c62bb98(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_2c62bbc8;
  iVar2 = (*(code *)*DAT_2c62bbc8)(param_1,param_4);
  *param_2 = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = (*(code *)*puVar1)(*param_4 + param_1,0);
  }
  *param_3 = uVar3;
  return;
}

