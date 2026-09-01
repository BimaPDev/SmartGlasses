/* FUN_100b5300 @ 0x100b5300 */

int FUN_100b5300(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_2c [2];
  
  iVar4 = param_1 + 0xc;
  uVar3 = (DAT_100b53d8 - DAT_100b53dc) * 0x20 & 0xff00;
  iVar6 = param_4;
  iVar7 = param_3;
  FUN_100a5b78(DAT_100b53e0 | uVar3,DAT_100b53e4,DAT_100b53e8,param_2,param_4,param_3);
  bVar1 = false;
  uVar5 = uVar3 | DAT_100b53fc;
LAB_100b533c:
  do {
    iVar2 = FUN_100b4dac(iVar4,param_2,param_4,param_3);
    if (iVar2 != 0) {
      FUN_100a5b78(DAT_100b53ec | uVar3,DAT_100b53e4,PTR_s_read_data_err__d_100b53f0,iVar2,iVar6,
                   iVar7);
      return -5;
    }
    do {
      if (param_4 == *(int *)(param_1 + 0x24)) {
        return 0;
      }
      iVar2 = FUN_100b51d8(iVar4,local_2c);
      if (iVar2 != 0) {
        FUN_100a5b78(uVar5,DAT_100b53e4,PTR_s_retrun_err__d_100b53f4,iVar2);
        if (bVar1) {
          return iVar2;
        }
        if (*(char *)(param_1 + 0x44) == '\0') {
          return iVar2;
        }
        FUN_100b4860(iVar4,500);
        *(undefined1 *)(param_1 + 0xc) = 0;
        iVar6 = param_4;
        iVar7 = param_3;
        FUN_100a5b78(uVar3 | 0x35c0033,DAT_100b53e4,PTR_s_re_read_offset_0x_x__size__d__bu_100b53f8,
                     param_2,param_4,param_3);
        bVar1 = true;
        goto LAB_100b533c;
      }
    } while (local_2c[0] != 9);
    iVar2 = *(int *)(param_1 + 0x24);
    param_2 = param_2 + iVar2;
    param_3 = param_3 + iVar2;
    param_4 = param_4 - iVar2;
  } while( true );
}

