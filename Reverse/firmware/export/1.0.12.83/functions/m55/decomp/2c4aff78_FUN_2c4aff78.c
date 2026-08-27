/* FUN_2c4aff78 @ 0x2c4aff78 */

undefined4 FUN_2c4aff78(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_2c4b4980(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[7] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar2 = *(int *)(param_3 + 0x3c);
    puVar1[7] = iVar2;
    *(undefined4 **)(iVar2 + 0x18) = puVar1;
    *(undefined4 **)(param_3 + 0x3c) = puVar1;
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    *(int *)(*(int *)(param_3 + 0x58) + 4) = *(int *)(*(int *)(param_3 + 0x58) + 4) + 1;
    return 0;
  }
  return 5;
}

