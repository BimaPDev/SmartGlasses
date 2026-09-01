/* FUN_100457a4 @ 0x100457a4 */

undefined4 FUN_100457a4(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = *(int *)PTR_DAT_100457f0;
  FUN_100a5b78(((int)PTR_DAT_100457f4 - (int)PTR_DAT_100457f8) * 0x20 & 0xff00U | 0x5a00031,
               PTR_s__ble_rx_set_button_shortcut_view_10045800,
               PTR_s__ble_rx_set_button_shortcut_view_100457fc,uVar1,param_1);
  (**(code **)(PTR_DAT_10045804 + 8))(uVar1);
  FUN_1004574c();
  if (*(int *)PTR_DAT_100457f0 != iVar2) {
    FUN_1013cdc0();
  }
  return 1;
}

