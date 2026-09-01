/* FUN_10029574 @ 0x10029574 */

void FUN_10029574(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *DAT_100295e0;
  uVar3 = (**(code **)(DAT_100295e4 + 0x24))();
  puVar2 = PTR_DAT_100295f0;
  puVar1 = PTR_DAT_100295ec;
  if (*DAT_100295e8 == uVar3) {
    if (*DAT_100295e0 == iVar4) {
      return;
    }
LAB_100295be:
    FUN_1013cdc0();
  }
  else {
    *DAT_100295e8 = (ushort)uVar3;
    FUN_100a5b78(((int)puVar1 - (int)puVar2) * 0x20 & 0xff00U | 0x4f0032,
                 PTR_s_view_set_screen_zoom_100295f8,PTR_s_titlebar_view_updata_screen_zoom_100295f4
                 ,uVar3 & 0xffff,uVar3,param_2,param_3);
    if (*DAT_100295e0 != iVar4) goto LAB_100295be;
  }
  iVar4 = *DAT_1002f7d0;
  if (param_1 == 0) {
    if (*DAT_1002f7d0 == iVar4) {
      return;
    }
  }
  else {
    FUN_1004f110();
    FUN_10126e28(param_1,0x100,0);
    FUN_10126e32(param_1,0);
    FUN_10126e3c(param_1,0);
    if (0xff < (int)uVar3) {
      uVar3 = 0x100;
    }
    FUN_10126e28(param_1,uVar3,0);
    FUN_10126e32(param_1,0xb4,0);
    FUN_10126e3c(param_1,0xb4,0);
    FUN_10125af4(param_1);
    if (*DAT_1002f7d0 == iVar4) goto LAB_1002f7b4;
  }
  FUN_1013cdc0();
LAB_1002f7b4:
  FUN_10089bf8(param_1);
  return;
}

