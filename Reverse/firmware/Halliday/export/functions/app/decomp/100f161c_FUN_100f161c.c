/* FUN_100f161c @ 0x100f161c */

void FUN_100f161c(int *param_1,int param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  
  piVar2 = DAT_100f177c;
  FUN_10114a38();
  uVar4 = DAT_100f1790;
  uVar3 = DAT_100f1780;
  if ((param_1 == (int *)0x0) || (piVar6 = (int *)piVar2[0x11], piVar6 == param_1)) {
    piVar6 = (int *)*piVar2;
    if (piVar6 != (int *)0x0) {
      uVar8 = DAT_100f178c | (DAT_100f1784 - DAT_100f1788) * 0x20 & 0xff00U;
      piVar7 = (int *)0x0;
      do {
        if (((((piVar7 != (int *)0x0) || ((int)((uint)*(byte *)((int)piVar6 + 0x16) << 0x1c) < 0))
             || ((*(byte *)(piVar6 + 5) & 5) != 0)) ||
            (iVar5 = FUN_1011e5fe(uVar3,piVar6 + 2), param_1 = piVar6, iVar5 == 0)) &&
           (param_1 = piVar7, *(char *)((int)piVar6 + 0x19) != '\0')) {
          uVar1 = *(undefined2 *)(piVar6[1] + 0xc);
          FUN_100a5b78(uVar8,uVar4,uVar1,0);
          *(undefined1 *)((int)piVar6 + 0x19) = 0;
          FUN_100f0900(uVar1,8,piVar6[4]);
        }
        piVar6 = (int *)*piVar6;
        piVar7 = param_1;
      } while (piVar6 != (int *)0x0);
      piVar6 = param_1;
      if (param_1 != (int *)0x0) goto LAB_100f1670;
    }
  }
  else {
    if (piVar6 == (int *)0x0) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = (uint)*(byte *)(piVar6 + 6);
    }
    if ((((int)((uint)*(byte *)((int)param_1 + 0x16) << 0x1c) < 0) ||
        ((*(byte *)(param_1 + 5) & 5) != 0)) ||
       ((iVar5 = FUN_1011e5fe(DAT_100f1780,param_1 + 2), iVar5 == 0 ||
        (uVar8 <= *(byte *)(param_1 + 6))))) goto LAB_100f16d8;
    if (param_2 != 0) {
      FUN_100f4ebc();
      FUN_100f4f4c();
    }
    piVar6 = (int *)piVar2[0x11];
    if (((piVar6 != (int *)0x0) && (piVar6 != param_1)) && (*(char *)((int)piVar6 + 0x19) != '\0'))
    {
      uVar1 = *(undefined2 *)(piVar6[1] + 0xc);
      FUN_100a5b78(DAT_100f178c | (DAT_100f1784 - DAT_100f1788) * 0x20 & 0xff00U,DAT_100f1790,uVar1,
                   0);
      *(undefined1 *)((int)piVar6 + 0x19) = 0;
      FUN_100f0900(uVar1,8,piVar6[4]);
    }
LAB_100f1670:
    piVar6 = param_1;
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      uVar1 = *(undefined2 *)(param_1[1] + 0xc);
      FUN_100a5b78(DAT_100f178c | (DAT_100f1784 - DAT_100f1788) * 0x20 & 0xff00U,DAT_100f1790,uVar1,
                   1);
      *(undefined1 *)((int)param_1 + 0x19) = 1;
      FUN_100f0900(uVar1,7,param_1[4]);
      FUN_100f4948((int)(short)param_1[2],(int)*(short *)((int)param_1 + 10));
    }
    else {
      FUN_100f4948((int)(short)param_1[2],(int)*(short *)((int)param_1 + 10));
    }
  }
  piVar2[0x11] = (int)piVar6;
LAB_100f16d8:
  FUN_101150e0();
  return;
}

