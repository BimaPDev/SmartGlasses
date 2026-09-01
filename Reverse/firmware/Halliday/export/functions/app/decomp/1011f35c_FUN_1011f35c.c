/* FUN_1011f35c @ 0x1011f35c */

void FUN_1011f35c(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  
  iVar2 = 0;
  (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1,&local_34,&local_30);
  uVar3 = 0;
  iVar6 = 0;
  do {
    if (local_30 <= uVar3) {
      return;
    }
    puVar5 = (uint *)(local_34 + uVar3 * 8);
    local_28 = puVar5[1];
    for (uVar4 = 0; local_24 = iVar6 + uVar4, uVar4 < *puVar5; uVar4 = uVar4 + 1) {
      local_2c = iVar2;
      iVar1 = (*param_2)(&local_2c,param_3);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + local_28;
    }
    uVar3 = uVar3 + 1;
    iVar6 = local_24;
  } while( true );
}

