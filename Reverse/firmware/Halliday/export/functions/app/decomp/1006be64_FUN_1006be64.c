/* FUN_1006be64 @ 0x1006be64 */

int FUN_1006be64(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int local_1c [2];
  
  if (((param_2 == (char *)0x0) || (iVar5 = FUN_1011ea10(param_2), iVar5 == 0)) || (*param_2 != '/')
     ) {
    FUN_100a5b78((DAT_1006bf50 - DAT_1006bf4c) * 0x20 & 0xff00U | 0x1660011,DAT_1006bf58,
                 DAT_1006bf54);
    iVar5 = -0x16;
  }
  else if ((param_1[1] == 0) && (*param_1 == 0)) {
    iVar5 = FUN_1011ea18(param_2,DAT_1006bf5c);
    if (iVar5 == 0) {
      FUN_1006b9c8(0xffffffff,0xffffffff);
      piVar3 = DAT_1006bf60;
      param_1[1] = 0;
      piVar6 = (int *)*piVar3;
      if (piVar6 == piVar3) {
        piVar6 = (int *)0x0;
      }
      *param_1 = (int)piVar6;
      FUN_1006b9bc();
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_1006b9f4(local_1c,param_2,0);
      if (iVar5 < 0) {
        FUN_100a5b78(DAT_1006bf64 | (DAT_1006bf50 - DAT_1006bf4c) * 0x20 & 0xff00U,DAT_1006bf58,
                     DAT_1006bf68);
      }
      else {
        pcVar4 = *(code **)(*(int *)(local_1c[0] + 0x1c) + 0x20);
        if (pcVar4 == (code *)0x0) {
          iVar5 = -0x86;
        }
        else {
          param_1[1] = local_1c[0];
          iVar5 = (*pcVar4)(param_1,param_2);
          iVar2 = DAT_1006bf50;
          iVar1 = DAT_1006bf4c;
          if (iVar5 < 0) {
            *param_1 = 0;
            param_1[1] = 0;
            FUN_100a5b78((iVar2 - iVar1) * 0x20 & 0xff00U | 0x18a0012,DAT_1006bf58,DAT_1006bf6c,
                         iVar5,param_2);
          }
        }
      }
    }
  }
  else {
    iVar5 = -0x10;
  }
  return iVar5;
}

