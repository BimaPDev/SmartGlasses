/* FUN_10120d12 @ 0x10120d12 */

void FUN_10120d12(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(param_1 + 0xc);
  puVar5 = &local_20;
  piVar4 = &local_2c;
  FUN_10120b6a();
  iVar1 = piVar3[0x438];
  if (iVar1 != -1) {
    FUN_10120c8e(param_1,iVar1,piVar3[0x439],(int)piVar3 + 0xc6,piVar4,puVar5);
    piVar3[0x438] = -1;
    piVar3[0x439] = 0;
  }
  FUN_10120c50(param_1,local_28,local_24,param_4);
  for (uVar2 = 0; (uint)*(byte *)(*piVar3 + 0xb) * (uint)*(byte *)(*piVar3 + 10) - uVar2 != 0;
      uVar2 = uVar2 + 1) {
    if ((1 << (uVar2 & 0xff) & local_24) != 0) {
      param_4 = param_4 + 0x200;
    }
  }
  for (; local_2c != 0; local_2c = local_2c + -1) {
    uVar2 = (uint)*(byte *)(*piVar3 + 0xb) * (uint)*(byte *)(*piVar3 + 10);
    if (uVar2 == 0x20) {
      iVar1 = -1;
    }
    else {
      iVar1 = (1 << (uVar2 & 0xff)) + -1;
    }
    FUN_10120c50(param_1,local_28 + 1,iVar1,param_4);
    param_4 = param_4 + (uint)*(byte *)(*piVar3 + 0xb) * (uint)*(byte *)(*piVar3 + 10) * 0x200;
    local_28 = local_28 + 1;
  }
  if (local_1c != 0) {
    FUN_10120c50(param_1,local_20,local_1c,param_4);
  }
  return;
}

