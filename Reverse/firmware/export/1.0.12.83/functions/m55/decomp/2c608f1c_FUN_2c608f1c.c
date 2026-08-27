/* FUN_2c608f1c @ 0x2c608f1c */

int FUN_2c608f1c(int param_1,int param_2,int param_3,int param_4,char param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  if (param_5 == '\x03') {
    iVar4 = FUN_2c604a14();
    iVar5 = FUN_2c5ff66c();
    sVar2 = FUN_2c6033b4(param_1,0,0x12);
    sVar3 = FUN_2c6033b4(param_1,0,0x13);
    if (iVar4 == 2) {
      sVar6 = *(short *)(iVar5 + 0x18);
      sVar2 = *(short *)(param_1 + 0x18) - sVar3;
    }
    else {
      if (iVar4 == 3) {
        sVar1 = *(short *)(iVar5 + 0x18);
        iVar4 = ((int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14)) -
                (int)sVar2) - (int)sVar3;
        sVar6 = *(short *)(iVar5 + 0x14);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        sVar2 = *(short *)(param_1 + 0x14) + sVar2 + (short)(iVar4 >> 1);
        goto LAB_2c608ff2;
      }
      if (iVar4 != 1) goto LAB_2c608f64;
      sVar6 = *(short *)(iVar5 + 0x14);
      sVar2 = *(short *)(param_1 + 0x14) + sVar2;
    }
  }
  else {
    iVar4 = FUN_2c604a20();
    iVar5 = FUN_2c5ff66c();
    sVar2 = FUN_2c6033b4(param_1,0,0x10);
    sVar3 = FUN_2c6033b4(param_1,0,0x11);
    if (iVar4 == 2) {
      sVar6 = *(short *)(iVar5 + 0x1a);
      sVar2 = *(short *)(param_1 + 0x1a) - sVar3;
    }
    else if (iVar4 == 3) {
      sVar1 = *(short *)(iVar5 + 0x1a);
      iVar4 = ((int)(short)((*(short *)(param_1 + 0x1a) + 1) - *(short *)(param_1 + 0x16)) -
              (int)sVar2) - (int)sVar3;
      sVar6 = *(short *)(iVar5 + 0x16);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      sVar2 = *(short *)(param_1 + 0x16) + sVar2 + (short)(iVar4 >> 1);
LAB_2c608ff2:
      iVar4 = (int)(short)((sVar1 + 1) - sVar6);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      sVar6 = sVar6 + (short)(iVar4 >> 1);
    }
    else {
      if (iVar4 != 1) {
LAB_2c608f64:
        if ((-1 < param_4) && (-1 < param_3)) {
          return param_2;
        }
        goto LAB_2c608f78;
      }
      sVar6 = *(short *)(iVar5 + 0x16);
      sVar2 = *(short *)(param_1 + 0x16) + sVar2;
    }
  }
  if (param_4 < 0) {
    if (sVar2 < sVar6) {
      return param_2;
    }
  }
  else if ((-1 < param_3) || (sVar6 < sVar2)) {
    return param_2;
  }
LAB_2c608f78:
  if (param_2 < 0) {
    param_2 = (int)(short)((short)param_2 + -2);
  }
  if (0 < param_2) {
    param_2 = (int)(short)((short)param_2 + 2);
  }
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  return (param_2 << 0xe) >> 0x10;
}

