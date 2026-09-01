/* FUN_100c0718 @ 0x100c0718 */

void FUN_100c0718(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_5c;
  undefined2 local_58;
  short local_54;
  char local_52;
  int local_4c;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined1 auStack_38 [36];
  
  iVar1 = FUN_100ca440(param_1,&local_54);
  if ((iVar1 < 0) || (local_54 != 0x101)) {
    FUN_100a5b78(((int)PTR_DAT_100c07c0 - (int)PTR_DAT_100c07c4) * 0x20 & 0xff00U | 0x2780011,
                 PTR_s_connected_100c07cc,PTR_s_get_info_connected_error_100c07c8);
  }
  else if (local_52 == '\x01') {
    local_5c = *(undefined4 *)(local_4c + 1);
    local_58 = *(undefined2 *)(local_4c + 5);
    FUN_1011ea48(auStack_38,0,0xd);
    FUN_10119cd2(&local_5c,6,auStack_38,0xc);
    FUN_100a5b78(DAT_100c07d0 | ((int)PTR_DAT_100c07c0 - (int)PTR_DAT_100c07c4) * 0x20 & 0xff00U,
                 PTR_s_connected_100c07cc,DAT_100c07d4,auStack_38,local_40,local_3e,local_3c);
    *DAT_100c07d8 = 1;
    FUN_100c0470(1,param_1,param_2);
  }
  return;
}

