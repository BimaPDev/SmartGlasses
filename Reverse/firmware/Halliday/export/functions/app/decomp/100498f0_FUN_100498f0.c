/* FUN_100498f0 @ 0x100498f0 */

void FUN_100498f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_14;
  undefined2 local_10;
  int local_c;
  
  local_c = *DAT_10049970;
  iVar2 = *DAT_10049974;
  if ((*(int *)(iVar2 + 0x3d8) == 0) && (*(int *)(iVar2 + 0x3c0) != 0)) {
    if ((param_1 == 1) || (param_1 != 3)) {
      iVar1 = iVar2 + 0x230;
    }
    else {
      iVar1 = iVar2 + 0x254;
    }
    FUN_10096730(*(int *)(iVar2 + 0x3c0),iVar1);
    FUN_10093284(&local_50);
    local_50 = *(undefined4 *)(iVar2 + 0x3c0);
    local_28 = 0xe10;
    uStack_24 = 20000;
    local_4c = DAT_10049978;
    local_30 = 0;
    uStack_2c = 0;
    local_10 = 0xffff;
    local_14 = 0;
    FUN_1009331c(&local_50);
    *(undefined4 **)(iVar2 + 0x3d8) = &local_50;
  }
  if (*DAT_10049970 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

