/* FUN_100b4808 @ 0x100b4808 */

int FUN_100b4808(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x24;
  iVar4 = param_2;
  while( true ) {
    if (param_2 < 1) {
      return 0;
    }
    iVar1 = FUN_100b4740(iVar3,&stack0xffffffef,1);
    if (iVar1 != 0) break;
    param_2 = param_2 + -1;
  }
  uVar2 = ((int)PTR_DAT_100b4854 - (int)PTR_DAT_100b4850) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0xad0011,PTR_s_svc_prot_skip_rx_data_100b485c,
               PTR_s_failed_to_get_data_100b4858,uVar2,param_1,iVar4);
  return iVar1;
}

