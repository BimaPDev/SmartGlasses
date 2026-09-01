/* FUN_10038864 @ 0x10038864 */

void FUN_10038864(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  
  piVar1 = DAT_100388cc;
  iVar4 = 0;
  local_1c = *DAT_100388c8;
  local_20 = 0;
  iVar5 = *DAT_100388cc;
  uStack_18 = param_3;
  uVar2 = (**(code **)(DAT_100388d0 + 0x34))(&local_20);
  *(undefined1 *)(iVar5 + 0x55) = uVar2;
  do {
    uVar6 = *(undefined4 *)(*piVar1 + iVar4 * 4 + 4);
    uVar3 = FUN_1003883c();
    FUN_10126e82(uVar6,uVar3,0);
    iVar5 = FUN_10126fb4(*(undefined4 *)(*piVar1 + iVar4 * 4 + 4),0);
    if (iVar5 != 0) {
      FUN_1002e994(iVar5,1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  if (*DAT_100388c8 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

