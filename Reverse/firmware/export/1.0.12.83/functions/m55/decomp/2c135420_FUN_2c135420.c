/* FUN_2c135420 @ 0x2c135420 */

void FUN_2c135420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_2c135454;
  if (*(char *)(DAT_2c135454 + 10) != '\0') {
    iVar2 = 0;
    puVar3 = DAT_2c135454;
    do {
      (*(code *)*puVar3)(param_1,param_2,param_3,(code *)*puVar3,param_4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(puVar1 + 10));
  }
  return;
}

