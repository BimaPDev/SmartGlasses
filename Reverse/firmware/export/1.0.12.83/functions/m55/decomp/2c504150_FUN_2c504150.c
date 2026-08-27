/* FUN_2c504150 @ 0x2c504150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c504150(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if ((int *)*piVar3 == (int *)0x0) {
    return;
  }
  iVar2 = *(int *)*piVar3;
  if (*(code **)(iVar2 + 0x28) == _LAB_2c50418c) {
    pcVar1 = *(code **)(iVar2 + 0x10);
    if (pcVar1 == _LAB_2c504190) goto LAB_2c50416a;
  }
  else {
    (**(code **)(iVar2 + 0x28))();
    iVar2 = *(int *)*piVar3;
    pcVar1 = *(code **)(iVar2 + 0x10);
    if (pcVar1 == _LAB_2c504190) goto LAB_2c50416a;
  }
  (*pcVar1)();
  iVar2 = *(int *)*piVar3;
LAB_2c50416a:
  (**(code **)(iVar2 + 0x38))();
  *piVar3 = 0;
  return;
}

