/* FUN_100c1c90 @ 0x100c1c90 */

void FUN_100c1c90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  iVar2 = DAT_100c1d0c;
  if (param_1 == (undefined4 *)0x0) {
    FUN_10119dc2(DAT_100c1d18,DAT_100c1d14,DAT_100c1d10,0x225,0,param_2);
    FUN_1011a1f0(DAT_100c1d10,0x225,param_3,param_4);
    return;
  }
  do {
    cVar1 = *(char *)(param_1 + 1);
    puVar5 = (undefined4 *)*param_1;
    *(char *)(param_1 + 1) = cVar1 + -1;
    if ((char)(cVar1 + -1) != '\0') {
      return;
    }
    if (param_1[4] != 0) {
      if (-1 < (int)((uint)*(byte *)((int)param_1 + 5) << 0x1e)) {
        (**(code **)(**(int **)((uint)*(byte *)((int)param_1 + 6) * 0x2c + iVar2 + 0x24) + 8))
                  (param_1);
      }
      param_1[4] = 0;
    }
    param_1[2] = 0;
    iVar3 = (uint)*(byte *)((int)param_1 + 6) * 0x2c + iVar2;
    pcVar4 = *(code **)(iVar3 + 0x20);
    *param_1 = 0;
    if (pcVar4 == (code *)0x0) {
      FUN_1013c984(iVar3,param_1);
    }
    else {
      (*pcVar4)(param_1);
    }
    param_1 = puVar5;
  } while (puVar5 != (undefined4 *)0x0);
  return;
}

