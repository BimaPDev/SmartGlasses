/* FUN_2c5198b0 @ 0x2c5198b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5198b0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    if (*(code **)(iVar3 + 0x34) == _LAB_2c51991c) {
      pcVar2 = *(code **)(iVar3 + 0x1c);
      if (pcVar2 != _LAB_2c519920) {
LAB_2c5198fc:
        (*pcVar2)(piVar1,piVar4[1]);
        iVar3 = *(int *)*piVar4;
      }
    }
    else {
      (**(code **)(iVar3 + 0x34))();
      piVar1 = (int *)*piVar4;
      iVar3 = *piVar1;
      pcVar2 = *(code **)(iVar3 + 0x1c);
      if (pcVar2 != _LAB_2c519920) goto LAB_2c5198fc;
    }
    (**(code **)(iVar3 + 0x48))();
    *piVar4 = 0;
  }
  piVar1 = (int *)piVar4[1];
  if (piVar1 == (int *)0x0) {
    return;
  }
  pcVar2 = *(code **)(*piVar1 + 0x28);
  if (pcVar2 == DAT_2c519924) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    if (pcVar2 == DAT_2c519928) goto LAB_2c5198e8;
  }
  else {
    (*pcVar2)();
    piVar1 = (int *)piVar4[1];
    pcVar2 = *(code **)(*piVar1 + 0x10);
    if (pcVar2 == DAT_2c519928) goto LAB_2c5198e8;
  }
  (*pcVar2)(piVar1,*piVar4);
LAB_2c5198e8:
  piVar4[1] = 0;
  return;
}

