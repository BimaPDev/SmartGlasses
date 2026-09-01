/* FUN_1006c070 @ 0x1006c070 */

int FUN_1006c070(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = DAT_1006c180;
  if (param_1[1] == 0) {
    if (*param_1 == 0) {
      param_2[1] = '\0';
      iVar4 = 0;
    }
    else {
      FUN_1006b9c8(0xffffffff,0xffffffff,param_3,param_4,param_4);
      piVar2 = DAT_1006c16c;
      piVar6 = (int *)*DAT_1006c16c;
      if (piVar6 == DAT_1006c16c) {
        piVar6 = (int *)0x0;
      }
      for (; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        iVar5 = 0;
        if ((int *)*param_1 == piVar6) {
          bVar1 = true;
          *param_2 = '\x01';
          FUN_1011e9f8(param_2 + 1,piVar6[3] + 1,0x100);
          param_2[0x101] = '\0';
          param_2[0x104] = '\0';
          param_2[0x105] = '\0';
          param_2[0x106] = '\0';
          param_2[0x107] = '\0';
          if (piVar6 != (int *)piVar2[1]) {
            iVar5 = *piVar6;
          }
          goto LAB_1006c124;
        }
        if (piVar6 == (int *)DAT_1006c16c[1]) break;
      }
      iVar5 = 0;
      bVar1 = false;
LAB_1006c124:
      FUN_1006b9bc();
      if (bVar1) {
        iVar4 = 0;
        *param_1 = iVar5;
      }
      else {
        iVar4 = -2;
      }
    }
  }
  else if (*(int *)(*(int *)(param_1[1] + 0x1c) + 0x24) == 0) {
    iVar4 = -0x86;
  }
  else {
    while (iVar4 = (**(code **)(*(int *)(param_1[1] + 0x1c) + 0x24))(param_1,param_2), -1 < iVar4) {
      if (param_2[1] == '\0') {
        return iVar4;
      }
      if (*param_2 != '\x01') {
        return iVar4;
      }
      iVar5 = FUN_1011ea18(param_2 + 1,uVar3);
      if ((iVar5 != 0) && (iVar5 = FUN_1011ea18(param_2 + 1,DAT_1006c168), iVar5 != 0)) {
        return iVar4;
      }
    }
    FUN_100a5b78((DAT_1006c174 - DAT_1006c170) * 0x20 & 0xff00U | 0x1d60011,DAT_1006c17c,
                 DAT_1006c178,iVar4);
  }
  return iVar4;
}

