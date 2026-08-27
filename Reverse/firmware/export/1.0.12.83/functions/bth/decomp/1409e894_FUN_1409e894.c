/* FUN_1409e894 @ 0x1409e894 */

undefined4 FUN_1409e894(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_140e53b8(*DAT_1409e8f8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1402a6e8(4,0x8b,DAT_1409e904,DAT_1409e900,DAT_1409e8fc);
    return 0;
  }
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = param_2[3];
  *puVar1 = *param_2;
  puVar1[3] = uVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  uVar2 = param_2[5];
  uVar5 = param_2[6];
  puVar1[4] = param_2[4];
  puVar1[5] = uVar2;
  puVar1[6] = uVar5;
  piVar3 = (int *)FUN_140b4ff0(param_1);
  if (((param_1 != 0) && (piVar3 != (int *)0x0)) && (puVar1 != (undefined4 *)0x0)) {
    if (*(code **)(param_1 + 0x10) == (code *)0x0) {
      piVar4 = (int *)FUN_140e53b8(*DAT_140b4e14);
      if (piVar4 == (int *)0x0) {
        FUN_140b4c54();
        goto LAB_140b4e0a;
      }
    }
    else {
      piVar4 = (int *)(**(code **)(param_1 + 0x10))(8);
      if (piVar4 == (int *)0x0) {
        return 0;
      }
    }
    *piVar4 = *piVar3;
    piVar4[1] = (int)puVar1;
    *piVar3 = (int)piVar4;
    if (*(int **)(param_1 + 4) == piVar3) {
      *(int **)(param_1 + 4) = piVar4;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 1;
  }
LAB_140b4e0a:
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4e1c,DAT_140b4e18);
}

