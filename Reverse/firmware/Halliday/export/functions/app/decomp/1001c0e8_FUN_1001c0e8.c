/* FUN_1001c0e8 @ 0x1001c0e8 */

undefined4 FUN_1001c0e8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3c [4];
  undefined1 auStack_38 [6];
  undefined2 local_32;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined1 local_26;
  undefined4 local_25;
  undefined4 local_21;
  undefined1 local_1d;
  undefined4 auStack_1c [2];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1001c1b0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  thunk_FUN_1009efa0(PTR_s_BT_MAC_101887e7_0xe_1001c1b4,&local_4c,0xc,0);
  FUN_1011ea48(auStack_38,0,0x24);
  local_3c._0_2_ = 0x4c47;
  puVar3 = (undefined4 *)local_3c;
  stack0xffffffc6 = *(undefined4 *)PTR_s_00000000_1001c1b8;
  auStack_38._2_4_ = *(undefined4 *)(PTR_s_00000000_1001c1b8 + 4);
  local_32 = 0x3031;
  local_30 = 0x4351;
  local_26 = 0x59;
  local_2e = local_48;
  local_2a = local_44;
  local_25 = *(undefined4 *)PTR_s_P343XXXXX_1001c1bc;
  local_21 = *(undefined4 *)(PTR_s_P343XXXXX_1001c1bc + 4);
  local_1d = PTR_s_P343XXXXX_1001c1bc[8];
  do {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 2;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1 = param_1 + 2;
  } while (puVar3 != auStack_1c);
  FUN_100a5b78(((int)PTR_DAT_1001c1c4 - (int)PTR_DAT_1001c1c0) * 0x20 & 0xff00U | 0x470031,
               PTR_s_xs_get_sn_info_1001c1cc,PTR_s_Device_SN___s_1001c1c8,local_3c);
  if (*(int *)PTR_DAT_1001c1b0 != local_14) {
    FUN_1013cdc0();
  }
  return 0x20;
}

