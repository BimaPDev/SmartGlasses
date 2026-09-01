/* FUN_100c3fac @ 0x100c3fac */

undefined4 FUN_100c3fac(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    FUN_100a5b78((DAT_100c4070 - DAT_100c4074) * 0x20 & 0xff00U | 0x6100011,DAT_100c407c,
                 DAT_100c4078);
  }
  else {
    FUN_100c3014(0xffffffff,0xffffffff);
    piVar3 = DAT_100c408c;
    pcVar2 = DAT_100c4080;
    cVar1 = *DAT_100c4080;
    if (cVar1 == '\x0e') {
      FUN_100a5b78(DAT_100c4084 | (DAT_100c4070 - DAT_100c4074) * 0x20 & 0xff00U,DAT_100c407c,
                   DAT_100c4088);
      FUN_100c3008();
      return 0xfffffff4;
    }
    piVar4 = (int *)*DAT_100c408c;
    if (piVar4 == (int *)0x0) {
      iVar6 = 0x10000;
    }
    else {
      iVar6 = 0xf;
      piVar5 = piVar4;
      do {
        if (param_1 == piVar5) {
          FUN_100a5b78((DAT_100c4070 - DAT_100c4074) * 0x20 & 0xff00U | 0x6200011,DAT_100c407c,
                       DAT_100c4090,param_1);
          FUN_100c3008();
          return 0xfffffff0;
        }
        piVar5 = (int *)piVar5[3];
      } while ((piVar5 != (int *)0x0) && (iVar6 = iVar6 + -1, iVar6 != 0));
      piVar4[4] = (int)param_1;
      iVar6 = *piVar4 + 1;
    }
    param_1[3] = (int)piVar4;
    if (*param_1 == 0) {
      *pcVar2 = cVar1 + '\x01';
      *(char *)((int)param_1 + 10) = cVar1;
      piVar4 = *(int **)(param_1[1] + 0x10);
      *param_1 = iVar6;
      *piVar4 = iVar6;
    }
    *piVar3 = (int)param_1;
    FUN_100c3008();
  }
  return 0;
}

