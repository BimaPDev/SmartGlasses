/* FUN_2c60438c @ 0x2c60438c */

void FUN_2c60438c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_2c607df0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  while ((puVar2 != (undefined4 *)0x0 && (puVar2[1] != 0))) {
    iVar3 = *(int *)*puVar2;
    if (iVar3 == 0) break;
    iVar1 = FUN_2c602340(iVar3,0x21,0,(int *)*puVar2,param_4);
    if (iVar1 != 0) {
      FUN_2c604248(iVar3);
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
  }
  FUN_2c60512c(param_1,0,0);
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x12) = 0;
  }
  return;
}

