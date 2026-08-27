/* FUN_2c5bcba8 @ 0x2c5bcba8 */

int * FUN_2c5bcba8(int *param_1,int param_2,uint param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  char local_2c [4];
  uint local_28;
  int local_24;
  
  local_24 = *DAT_2c5bccf0;
  FUN_2c658768(local_2c,param_1 + 4,param_1[1],param_1[3],param_5);
  piVar5 = DAT_2c5bccf4;
  if (local_2c[0] == '\0') {
    iVar2 = param_2 << 2;
    piVar5 = *(int **)(*param_1 + param_2 * 4);
  }
  else {
    if (local_28 == 1) {
      piVar5 = param_1 + 6;
      *piVar5 = 0;
    }
    else {
      if (*DAT_2c5bccf4 == 0) {
        FUN_2c4723c4();
        *piVar5 = 1;
      }
      piVar5 = (int *)FUN_2c47245c(0,local_28 << 2);
      FUN_2c674268(piVar5,0,local_28 << 2);
    }
    piVar3 = (int *)param_1[2];
    param_1[2] = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = 0;
      do {
        while( true ) {
          piVar4 = (int *)*piVar3;
          iVar1 = piVar3[1] - local_28 * ((uint)piVar3[1] / local_28);
          if ((int *)piVar5[iVar1] == (int *)0x0) break;
          *piVar3 = *(int *)piVar5[iVar1];
          *(int **)piVar5[iVar1] = piVar3;
joined_r0x2c5bccca:
          piVar3 = piVar4;
          if (piVar4 == (int *)0x0) goto LAB_2c5bcc66;
        }
        *piVar3 = param_1[2];
        param_1[2] = (int)piVar3;
        piVar5[iVar1] = (int)(param_1 + 2);
        if (*piVar3 != 0) {
          piVar5[iVar2] = (int)piVar3;
          iVar2 = iVar1;
          goto joined_r0x2c5bccca;
        }
        iVar2 = iVar1;
        piVar3 = piVar4;
      } while (piVar4 != (int *)0x0);
    }
LAB_2c5bcc66:
    if ((int *)*param_1 != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    *param_1 = (int)piVar5;
    param_1[1] = local_28;
    param_2 = param_3 - local_28 * (param_3 / local_28);
    piVar5 = (int *)piVar5[param_2];
    iVar2 = param_2 * 4;
  }
  if (piVar5 == (int *)0x0) {
    *param_4 = param_1[2];
    param_1[2] = (int)param_4;
    if (*param_4 != 0) {
      uVar6 = *(uint *)(*param_4 + 4);
      *(int **)(*param_1 + (uVar6 - param_1[1] * (uVar6 / (uint)param_1[1])) * 4) = param_4;
    }
    *(int **)(*param_1 + iVar2) = param_1 + 2;
  }
  else {
    *param_4 = *piVar5;
    **(undefined4 **)(*param_1 + param_2 * 4) = param_4;
  }
  param_1[3] = param_1[3] + 1;
  if (*DAT_2c5bccf0 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_4;
}

