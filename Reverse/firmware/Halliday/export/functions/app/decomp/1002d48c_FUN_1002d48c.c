/* FUN_1002d48c @ 0x1002d48c */

void FUN_1002d48c(char *param_1)

{
  int iVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_1002d5e4;
  if (param_1 != (char *)0x0) {
    unaff_r5 = 0;
    local_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
    iVar1 = FUN_1006ba84(&local_30,DAT_1002d5e8,3,0);
    if (-1 < iVar1) goto LAB_1002d4de;
    FUN_100a5b78(DAT_1002d5f4 | (DAT_1002d5f0 - DAT_1002d5ec) * 0x20 & 0xff00U,DAT_1002d5fc,
                 DAT_1002d5f8);
  }
  do {
    while( true ) {
      if (*DAT_1002d5e4 == local_24) {
        return;
      }
      FUN_1013cdc0();
LAB_1002d4de:
      iVar1 = thunk_FUN_1009f30c(0x114,DAT_1002d600);
      if (iVar1 != 0) break;
      FUN_100a5b78(DAT_1002d604 | (DAT_1002d5f0 - DAT_1002d5ec) * 0x20 & 0xff00U,DAT_1002d5fc,
                   DAT_1002d608);
      FUN_1006bc30(&local_30);
    }
    do {
      FUN_1006bd24(&local_30,unaff_r5 * 0x114,0);
      iVar2 = FUN_1006bc84(&local_30,iVar1,0x114);
      if ((iVar2 == 0x114) && (*(char *)(iVar1 + 1) == param_1[1])) {
        FUN_1006bd24(&local_30,unaff_r5 * 0x114,0);
        FUN_1006bcd4(&local_30,param_1,0x114);
        FUN_1002d288(param_1,unaff_r5 & 0xff);
        uVar3 = (DAT_1002d5f0 - DAT_1002d5ec) * 0x20 & 0xff00;
        if (*param_1 == '\x02') {
          FUN_100a5b78(DAT_1002d60c | uVar3,DAT_1002d5fc,DAT_1002d610,param_1[1],2,
                       *(undefined2 *)(param_1 + 0xe),param_1[0xc],param_1[0xb],param_1[3],
                       param_1[4]);
          FUN_100a5174((uint)(byte)param_1[10] * 0xe10 + (uint)(byte)param_1[9] * 0x3c,
                       unaff_r5 + 3 & 0xff,2);
        }
        else {
          FUN_100a5b78(DAT_1002d614 | uVar3,DAT_1002d5fc,DAT_1002d618,param_1[1],*param_1,
                       *(undefined2 *)(param_1 + 0xe),param_1[0xc],param_1[0xb],param_1[3],
                       param_1[4]);
          FUN_1002cb88(iVar1,unaff_r5 & 0xff);
        }
        break;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 != 0x14);
    FUN_1006bc30(&local_30);
    FUN_1012d1f4(iVar1);
  } while( true );
}

