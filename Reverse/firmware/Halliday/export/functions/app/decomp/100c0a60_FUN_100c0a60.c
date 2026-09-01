/* FUN_100c0a60 @ 0x100c0a60 */

void FUN_100c0a60(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  int iVar1;
  int iVar2;
  short local_34;
  char local_32;
  
  iVar2 = FUN_100ca440(param_1,&local_34);
  iVar1 = DAT_100c0ad8;
  if ((iVar2 < 0) || (local_34 != 0x101)) {
    FUN_100a5b78(((int)PTR_DAT_100c0ac8 - (int)PTR_DAT_100c0acc) * 0x20 & 0xff00U | 0x2b00011,
                 PTR_s_le_param_updated_100c0ad4,PTR_s_get_info_connected_error_100c0ad0);
  }
  else if (local_32 == '\x01') {
    *(undefined2 *)(DAT_100c0ad8 + 0xc) = param_2;
    *(undefined2 *)(iVar1 + 0xe) = param_2;
    *(undefined2 *)(iVar1 + 0x10) = param_3;
    *(undefined2 *)(iVar1 + 0x12) = param_4;
    FUN_100c0470(4,param_1,param_5);
  }
  return;
}

