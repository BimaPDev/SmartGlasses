/* FUN_100ed4bc @ 0x100ed4bc */

int * FUN_100ed4bc(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_100a5b78(DAT_100ed55c | (DAT_100ed558 - DAT_100ed554) * 0x20 & 0xff00U,DAT_100ed564,
                 DAT_100ed560);
  }
  else {
    piVar1 = (int *)FUN_10138fb6(0,0xc,DAT_100ed568,param_4,param_4);
    if (piVar1 == (int *)0x0) {
      FUN_100a5b78((DAT_100ed558 - DAT_100ed554) * 0x20 & 0xff00U | 0xad00031,DAT_100ed564,
                   DAT_100ed56c);
      return (int *)0x0;
    }
    iVar2 = param_2[1];
    *piVar1 = param_3 * 0x28 + *(int *)(*param_2 + 0x1c) + *(int *)(param_1 + 0x2c);
    piVar1[2] = iVar2;
    iVar2 = FUN_100ecbe0(param_1,piVar1,1);
    if (-1 < iVar2) {
      return piVar1;
    }
    FUN_100a5b78(DAT_100ed570 | (DAT_100ed558 - DAT_100ed554) * 0x20 & 0xff00U,DAT_100ed564,
                 DAT_100ed574);
    FUN_10139020(piVar1);
  }
  return (int *)0x0;
}

