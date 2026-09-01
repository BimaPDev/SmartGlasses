/* FUN_10122e2e @ 0x10122e2e */

int FUN_10122e2e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*param_1 + 0x10);
  iVar2 = FUN_10122662(*param_1,param_1[0xe]);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(char *)param_1[0xf] == -0x7b) {
    FUN_10122580(iVar3,(char *)param_1[0xf],0x20);
    bVar1 = *(byte *)(iVar3 + 1);
    iVar2 = FUN_10122d32(param_1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_10122662(*param_1,param_1[0xe]);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(char *)param_1[0xf] == -0x40) {
      FUN_10122580(iVar3 + 0x20);
      if (0x10 < bVar1 - 2) {
        return 4;
      }
      uVar4 = 0x40;
      do {
        iVar2 = FUN_10122d32(param_1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_10122662(*param_1,param_1[0xe]);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(char *)param_1[0xf] != -0x3f) {
          return 2;
        }
        iVar2 = iVar3 + uVar4;
        uVar4 = uVar4 + 0x20;
        FUN_10122580(iVar2,(char *)param_1[0xf],0x20);
      } while (uVar4 < (bVar1 + 1) * 0x20);
      uVar4 = FUN_10122322(iVar3);
      if (uVar4 == *(ushort *)(iVar3 + 2)) {
        return 0;
      }
    }
  }
  return 2;
}

