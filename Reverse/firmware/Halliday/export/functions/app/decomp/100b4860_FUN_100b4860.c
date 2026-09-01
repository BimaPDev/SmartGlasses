/* FUN_100b4860 @ 0x100b4860 */

int FUN_100b4860(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_s_svc_drop_all_rx_data_100b48d0;
  puVar1 = PTR_s_drop_data_len_0x_x_100b48cc;
  iVar4 = (int)PTR_DAT_100b48c4 - (int)PTR_DAT_100b48c8;
  iVar5 = param_2;
  do {
    if (iVar5 < 1) {
      return 0;
    }
    iVar3 = FUN_100a05a8(*(undefined4 *)(param_1 + 0x24));
    if (0 < iVar3) {
      FUN_100a5b78(iVar4 * 0x20 & 0xff00U | 0xbf0031,puVar2,puVar1,iVar3);
      iVar3 = FUN_100b4808(param_1,iVar3);
      iVar5 = param_2;
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    FUN_1011dbc8(0x14);
    iVar5 = iVar5 + -0x14;
  } while( true );
}

