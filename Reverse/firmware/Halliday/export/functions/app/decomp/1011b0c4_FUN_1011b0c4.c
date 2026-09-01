/* FUN_1011b0c4 @ 0x1011b0c4 */

undefined4 FUN_1011b0c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  uVar1 = FUN_1005d1b8(param_2,param_3,param_3,param_4,param_4);
  iVar2 = *piVar4;
  *param_4 = uVar1;
  (**(code **)(iVar2 + 4))(1,*(undefined4 *)(iVar2 + 8));
  iVar2 = *piVar4;
  pcVar3 = *(code **)(iVar2 + 0x14);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_2,param_3,*(undefined4 *)(iVar2 + 0x18));
  }
  return 0;
}

