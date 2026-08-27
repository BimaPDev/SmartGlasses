/* FUN_2c5db1c0 @ 0x2c5db1c0 */

undefined4 FUN_2c5db1c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  if (param_2 != 0) {
    local_c = param_2;
    uVar1 = FUN_2c5d8bdc(param_2);
    iVar2 = FUN_2c5da7cc(param_1,uVar1);
    if (iVar2 == 0) {
      piVar3 = *(int **)(param_1 + 0x14);
      if (piVar3 != *(int **)(param_1 + 0x18)) {
        *piVar3 = local_c;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        return 1;
      }
      FUN_2c5db0f4(param_1 + 0x10,piVar3,&local_c);
      return 1;
    }
  }
  return 0;
}

