/* FUN_2c530760 @ 0x2c530760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c530760(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined1 *)((int)param_1 + 5) = param_2;
  uVar1 = _DAT_2c5307c4;
  *(char *)(param_1 + 1) = (char)param_3;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined1 *)func_0x2c531614(param_4,param_5,param_3,uVar1,param_4);
  puVar3 = (undefined4 *)FUN_2c64ca5c(0x10);
  piVar5 = (int *)param_1[3];
  param_1[2] = puVar2;
  puVar3[3] = puVar2;
  param_1[3] = puVar3;
  puVar3[1] = 1;
  puVar3[2] = 1;
  *puVar3 = _DAT_2c5307c8;
  if ((piVar5 != (int *)0x0) && (iVar4 = piVar5[1], piVar5[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*piVar5 + 8))(piVar5);
    iVar4 = piVar5[2];
    piVar5[2] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    puVar2 = (undefined1 *)param_1[2];
  }
  *puVar2 = param_6;
  return param_1;
}

