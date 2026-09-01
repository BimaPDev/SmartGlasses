/* FUN_100b5e34 @ 0x100b5e34 */

undefined4 FUN_100b5e34(int *param_1,int param_2,uint param_3,int *param_4,uint param_5)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[5] - 1U < 2) || (param_1[5] == 4)) {
      return 0;
    }
    if ((((uint)param_4 | param_5) & 3) == 0) {
      if (0xfff < (int)param_5) {
        param_5 = 0x1000;
      }
      piVar3 = (int *)0x0;
      iVar4 = param_2;
      while( true ) {
        if ((int)param_3 < 1) {
          if ((piVar3 != (int *)0x0) && (piVar3 != param_4)) {
            for (iVar4 = 0; iVar4 < (int)(param_5 & 3); iVar4 = iVar4 + 1) {
              if (*(char *)((int)piVar3 + iVar4) != -1) {
                return 0;
              }
            }
          }
          return 1;
        }
        if ((int)param_3 <= (int)param_5) {
          param_5 = param_3;
        }
        pcVar2 = (code *)**(undefined4 **)(*param_1 + 8);
        iVar1 = (*pcVar2)(*param_1,pcVar2,param_2,param_2 >> 0x1f,param_4,iVar4,param_5,0);
        if (iVar1 != 0) break;
        piVar3 = param_4;
        for (iVar1 = 0; iVar1 < (int)param_5 >> 2; iVar1 = iVar1 + 1) {
          if (*piVar3 != -1) {
            return 0;
          }
          piVar3 = piVar3 + 1;
        }
        param_2 = param_2 + param_5;
        param_3 = param_3 - param_5;
      }
      FUN_100a5b78((DAT_100b5efc - DAT_100b5ef8) * 0x20 & 0xff00U | 0x1500013,DAT_100b5f04,
                   DAT_100b5f00,iVar1,param_2,param_3);
      return 0xfffffffb;
    }
  }
  return 0xffffffea;
}

