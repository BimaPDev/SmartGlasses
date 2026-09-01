/* FUN_100c41fc @ 0x100c41fc */

undefined4 FUN_100c41fc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = DAT_100c42e8;
  if ((((param_2 == (undefined4 *)0x0) || (param_2[1] == 0)) || (param_2[2] == 0)) ||
     (param_2[3] == 0)) {
    FUN_100a5b78((DAT_100c42f0 - DAT_100c42f4) * 0x20 & 0xff00U | 0x8b00021,DAT_100c4308,
                 DAT_100c4304);
    return 0xffffffea;
  }
  if (param_1 == *DAT_100c42e8) {
    iVar3 = 0;
  }
  else {
    if (param_1 != DAT_100c42e8[0x22]) {
      if (*DAT_100c42e8 == 0) {
        iVar3 = 0;
        piVar4 = DAT_100c42e8;
      }
      else {
        if (DAT_100c42e8[0x22] != 0) {
          FUN_100a5b78(DAT_100c430c | (DAT_100c42f0 - DAT_100c42f4) * 0x20 & 0xff00U,DAT_100c4300,
                       DAT_100c4310);
          return 0xfffffff4;
        }
        iVar3 = 1;
        piVar4 = DAT_100c42e8 + 0x22;
      }
      DAT_100c42e8[iVar3 * 0x22] = param_1;
      iVar2 = DAT_100c42ec;
      piVar1[iVar3 * 0x22 + 0x18] = 0;
      piVar1[iVar3 * 0x22 + 0x19] = 0;
      piVar1[iVar3 * 0x22 + 1] = iVar2;
      *(undefined2 *)((int)piVar1 + iVar3 * 0x88 + 0x52) = 0xf5;
      iVar3 = FUN_100e2194(*piVar4,piVar4,1);
      if (iVar3 != 0) {
        FUN_1011ea48(piVar4,0,0x88);
        FUN_100a5b78(DAT_100c42f8 | (DAT_100c42f0 - DAT_100c42f4) * 0x20 & 0xff00U,DAT_100c4300,
                     DAT_100c42fc,iVar3);
        return 0xfffffff4;
      }
      goto LAB_100c42a6;
    }
    iVar3 = 1;
  }
  piVar4 = DAT_100c42e8 + iVar3 * 0x22;
LAB_100c42a6:
  *param_2 = 0;
  if ((undefined4 *)piVar4[0x19] == (undefined4 *)0x0) {
    piVar4[0x18] = (int)param_2;
    piVar4[0x19] = (int)param_2;
  }
  else {
    *(undefined4 *)piVar4[0x19] = param_2;
    piVar4[0x19] = (int)param_2;
  }
  return 0;
}

