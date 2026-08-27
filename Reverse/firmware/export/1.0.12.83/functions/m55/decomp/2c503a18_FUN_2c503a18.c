/* FUN_2c503a18 @ 0x2c503a18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c503a18(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  FUN_2c503ed8();
  func_0x2c504004();
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) goto LAB_2c503a46;
  iVar3 = *piVar1;
  if (*(code **)(iVar3 + 0x3c) == _LAB_2c503a78) {
    piVar1 = (int *)piVar1[3];
    pcVar2 = *(code **)(*piVar1 + 0x10);
    if (pcVar2 != _LAB_2c503a7c) {
LAB_2c503a68:
      (*pcVar2)(piVar1);
      goto LAB_2c503a6c;
    }
LAB_2c503a3e:
    (**(code **)(iVar3 + 0x4c))();
  }
  else {
    piVar1 = (int *)(**(code **)(iVar3 + 0x3c))();
    pcVar2 = *(code **)(*piVar1 + 0x10);
    if (pcVar2 != _LAB_2c503a7c) goto LAB_2c503a68;
LAB_2c503a6c:
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      iVar3 = **(int **)(param_1 + 0x30);
      goto LAB_2c503a3e;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
LAB_2c503a46:
  FUN_2c602ea8(*(undefined4 *)(param_1 + 4));
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_2c620f94();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

