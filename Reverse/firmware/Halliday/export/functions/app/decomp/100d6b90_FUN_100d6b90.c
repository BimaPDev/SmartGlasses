/* FUN_100d6b90 @ 0x100d6b90 */

void FUN_100d6b90(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_3c [24];
  
  piVar2 = DAT_100d6c38;
  iVar5 = 0;
  iVar4 = (int)PTR_DAT_100d6c28 - (int)PTR_DAT_100d6c2c;
  do {
    bVar1 = *(byte *)(iVar5 * 0x12 + *piVar2 + 0x1e);
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      if (param_1 == 1) {
        if (((bVar1 & 0xe) == 0) && (-1 < (int)((uint)bVar1 << 0x1b))) {
LAB_100d6be4:
          iVar6 = iVar5 * 0x12 + 0x18;
          iVar3 = FUN_101364ae(*piVar2 + iVar6);
          if (iVar3 == 0) {
            FUN_100d6b60(*piVar2 + iVar6,auStack_3c);
            FUN_100a5b78(iVar4 * 0x20 & 0xff00U | 0x1ce0031,
                         PTR_s_btsrv_autoconn_check_clear_auto__100d6c34,
                         PTR_s_BAC_clear_auto_info__s_100d6c30,auStack_3c);
            FUN_1011ea48(*piVar2 + iVar6,0,0x12);
          }
        }
      }
      else if ((param_1 != 2) || ((bVar1 & 0xe) != 0)) goto LAB_100d6be4;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 3) {
      return;
    }
  } while( true );
}

