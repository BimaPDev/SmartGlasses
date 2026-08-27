/* FUN_2c5f05b4 @ 0x2c5f05b4 */

undefined4 FUN_2c5f05b4(int param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_4;
  uVar1 = FUN_2c66c4ec();
  if (uVar1 <= param_2) {
    return 0;
  }
  FUN_2c66c568(*param_3,param_1,param_2);
  iVar2 = *param_3;
  *(undefined1 *)(iVar2 + param_2) = 0;
  FUN_2c6435c4(*param_4,param_1 + param_2,0,iVar2,puVar3);
  return 1;
}

