/* FUN_101254e2 @ 0x101254e2 */

void FUN_101254e2(uint param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_28;
  uint local_24;
  int iStack_20;
  
  local_28 = param_1;
  local_24 = param_2;
  iStack_20 = param_3;
  sVar1 = FUN_1012691c(param_1,0,0x6e);
  iVar5 = (int)sVar1;
  sVar2 = FUN_1012691c(param_1,0,0x6d);
  iVar4 = (int)sVar2;
  if ((iVar5 != 0) || (iVar4 != 0x100)) {
    local_28 = FUN_1012691c(param_1,0,0x6f);
    local_24 = FUN_1012691c(param_1,0,0x70);
    if (((local_28 & 0x60000000) == 0x20000000) &&
       (uVar3 = local_28 & 0x9fffffff, (int)uVar3 < 0x7d1)) {
      if (1000 < (int)uVar3) {
        uVar3 = 1000 - uVar3;
      }
      local_28 = (int)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) * uVar3 + uVar3) / 100;
    }
    if (((local_24 & 0x60000000) == 0x20000000) &&
       (uVar3 = local_24 & 0x9fffffff, (int)uVar3 < 0x7d1)) {
      if (1000 < (int)uVar3) {
        uVar3 = 1000 - uVar3;
      }
      local_24 = (int)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) * uVar3 + uVar3) / 100;
    }
    local_28 = local_28 + *(int *)(param_1 + 0x14);
    local_24 = local_24 + *(int *)(param_1 + 0x18);
    if (param_3 != 0) {
      iVar5 = (int)-sVar1;
      iVar4 = (int)(short)(0x10000 / iVar4);
    }
    FUN_10093448(param_2,iVar5,iVar4,&local_28);
  }
  return;
}

