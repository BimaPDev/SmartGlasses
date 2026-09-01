/* FUN_100d1a1c @ 0x100d1a1c */

int FUN_100d1a1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_1013577a(param_1 + 0x35,0xe);
  if ((iVar1 == 0) && (iVar1 = FUN_1011ea30((int)param_1 + 0x127,*DAT_100d1ae8,0x40), iVar1 == 0)) {
    uVar3 = (DAT_100d1af0 - DAT_100d1aec) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d1af4 | uVar3,DAT_100d1afc,DAT_100d1af8,uVar3,param_4);
    return 8;
  }
  iVar1 = FUN_100d11a8(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  switch(*(undefined1 *)(param_1 + 0x36)) {
  case 0:
  case 3:
    FUN_10135440(param_1 + 0x34,4);
    iVar1 = FUN_100d1200(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    goto LAB_100d1aba;
  case 1:
    FUN_10135440(param_1 + 0x34,3);
    FUN_10135440(param_1 + 0x35,10);
    (**(code **)(*DAT_100d1b00 + 4))(*param_1);
    goto LAB_100d1aba;
  case 2:
    iVar1 = FUN_100d0770(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = 3;
    break;
  default:
    FUN_100a5b78((DAT_100d1af0 - DAT_100d1aec) * 0x20 & 0xff00U | 0x10a00011,DAT_100d1afc,
                 DAT_100d1b04);
    return 8;
  case 5:
    uVar2 = 4;
  }
  FUN_10135440(param_1 + 0x34,uVar2);
LAB_100d1aba:
  FUN_10135440(param_1 + 0x35,7);
  iVar1 = FUN_100d0e9c(8);
  if (iVar1 == 0) {
    iVar1 = FUN_100d095c(param_1);
    return iVar1;
  }
  return 0;
}

