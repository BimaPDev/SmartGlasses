/* FUN_1005d3f0 @ 0x1005d3f0 */

void FUN_1005d3f0(int param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint *local_14;
  
  if (param_1 == 0) {
    bVar1 = false;
    pcVar4 = DAT_1005d444;
    local_14 = (uint *)0x0;
    do {
      if (*pcVar4 != -0x56) {
        puVar2 = (uint *)0x0;
        if (bVar1) {
          puVar2 = local_14;
        }
        local_14 = puVar2;
        uVar5 = 0x800;
        goto LAB_1005d410;
      }
      local_14 = (uint *)((int)local_14 + 1);
      bVar1 = true;
      pcVar4 = pcVar4 + 1;
    } while (local_14 != (uint *)0x800);
    uVar5 = 0x800;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xa0);
    local_14 = param_2;
    iVar3 = FUN_1013c736(param_1,&local_14,param_3,param_1,param_1);
    if (iVar3 != 0) {
      return;
    }
  }
LAB_1005d410:
  *param_2 = uVar5;
  *param_3 = ((uVar5 - (int)local_14) * 100) / uVar5;
  return;
}

