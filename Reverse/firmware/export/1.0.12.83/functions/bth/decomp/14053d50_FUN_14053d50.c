/* FUN_14053d50 @ 0x14053d50 */

void FUN_14053d50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_14053d88;
  iVar4 = DAT_14053d84 + 0x50;
  iVar3 = DAT_14053d84;
  do {
    if (*(byte *)(iVar3 + 0x13) != 0xff) {
      iVar2 = (**(code **)(iVar1 + (uint)*(byte *)(iVar3 + 0x13) * 4))();
      (**(code **)(iVar2 + 8))(iVar3,param_1,param_2);
    }
    iVar3 = iVar3 + 0x14;
  } while (iVar4 != iVar3);
  return;
}

