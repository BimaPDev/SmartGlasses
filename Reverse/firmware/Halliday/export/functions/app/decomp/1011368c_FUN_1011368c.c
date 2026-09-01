/* FUN_1011368c @ 0x1011368c */

undefined4 FUN_1011368c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_101136c4;
  if (-1 < (int)((uint)*(byte *)(*(int *)(DAT_101136c4 + 8) + 0xd) << 0x1f)) {
    param_1 = FUN_101135f8();
    piVar3 = *(int **)(*(int *)(iVar2 + 8) + 0x9c);
    if (*piVar3 != -0xf0f0f10) {
      FUN_10119dc2(DAT_101136c8);
      *piVar3 = -0xf0f0f10;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      param_1 = 2;
      software_interrupt(2);
    }
  }
  return param_1;
}

