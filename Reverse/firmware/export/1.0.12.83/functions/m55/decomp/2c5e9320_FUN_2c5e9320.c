/* FUN_2c5e9320 @ 0x2c5e9320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e9320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  
  iVar2 = _LAB_2c5e934c;
  piVar1 = _LAB_2c5e9348;
  piVar6 = (int *)*_LAB_2c5e9348;
  while (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    uVar3 = piVar6[2];
    pcVar5 = *(code **)(iVar2 + 0x38);
    *piVar1 = iVar4;
    (*pcVar5)(param_1,uVar3,iVar4,pcVar5,param_4);
    FUN_2c62bea8(piVar6);
    piVar6 = (int *)*piVar1;
  }
  return;
}

