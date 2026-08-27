/* FUN_2c5dcd00 @ 0x2c5dcd00 */

int FUN_2c5dcd00(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  do {
    if (puVar1 == puVar4) {
      return param_1[3];
    }
    iVar3 = puVar1[1];
    iVar2 = FUN_2c66b624(param_2,*puVar1);
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  return iVar3;
}

