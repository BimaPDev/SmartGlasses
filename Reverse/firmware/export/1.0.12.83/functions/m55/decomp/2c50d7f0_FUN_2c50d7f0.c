/* FUN_2c50d7f0 @ 0x2c50d7f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50d7f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 == 0xd2) {
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_LAB_2c50d85c);
    FUN_2c50d6b0(param_1);
    return 1;
  }
  if (iVar1 == 0xd3) {
    piVar3 = *(int **)(param_1 + 4);
    pcVar4 = *(code **)*piVar3;
    uVar2 = (*(code *)((undefined4 *)*piVar3)[3])(piVar3);
    (*pcVar4)(piVar3,uVar2);
    return 1;
  }
  if (iVar1 != 0xe3 && iVar1 != 0xd4) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  return 1;
}

