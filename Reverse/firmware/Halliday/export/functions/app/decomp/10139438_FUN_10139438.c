/* FUN_10139438 @ 0x10139438 */

void FUN_10139438(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = param_1;
  local_24 = param_2;
  iVar6 = FUN_100f405c();
  iVar7 = FUN_100f4070();
  iVar16 = 0;
  sVar14 = (short)iVar6;
  sVar15 = (short)iVar7;
  cVar4 = *(char *)(param_1 + 0x21);
  local_28 = 0;
  local_24 = CONCAT22(sVar15 + -1,sVar14 + -1);
  iVar8 = FUN_100f15c0(*(undefined2 *)(param_1 + 0x26));
  sVar5 = *(short *)(param_1 + 0x2a);
  if (iVar8 == 0) {
    if (cVar4 < '\x03') {
      sVar2 = *(short *)(param_1 + 0x3e);
      sVar11 = *(short *)(param_1 + 0x32);
    }
    else {
      sVar2 = *(short *)(param_1 + 0x3c);
      sVar11 = *(short *)(param_1 + 0x30);
    }
    bVar3 = *(byte *)(param_1 + 0x4e);
    cVar4 = *(char *)(param_1 + 0x21);
    uVar9 = (uint)(short)(sVar11 - sVar2);
    uVar10 = bVar3 & 2;
    uVar13 = (int)uVar9 >> 0x1f;
    if (cVar4 == '\x02') {
      uVar10 = uVar9 & uVar13;
      uVar13 = uVar10;
      if ((bVar3 & 2) != 0) {
        sVar15 = sVar15 + (short)uVar10;
LAB_101395d8:
        uVar10 = (uint)sVar15;
      }
LAB_101395da:
      uVar9 = 0;
    }
    else if (cVar4 == '\x04') {
      uVar9 = uVar9 & ~uVar13;
      uVar13 = uVar9;
      if ((bVar3 & 2) != 0) {
        sVar14 = (short)uVar9 - sVar14;
LAB_101395f6:
        uVar10 = 0;
        uVar9 = (uint)sVar14;
      }
    }
    else {
      if (cVar4 == '\x01') {
        uVar10 = uVar9 & ~uVar13;
        uVar13 = uVar10;
        if ((bVar3 & 2) != 0) {
          sVar15 = (short)uVar10 - sVar15;
          goto LAB_101395d8;
        }
        goto LAB_101395da;
      }
      uVar9 = uVar9 & uVar13;
      uVar13 = uVar9;
      if ((bVar3 & 2) != 0) {
        sVar14 = sVar14 + (short)uVar9;
        goto LAB_101395f6;
      }
    }
    *(short *)(param_1 + 0x48) = (short)uVar13;
    goto LAB_101394a2;
  }
  if (*(short *)(param_1 + 0x2c) == sVar5) {
    FUN_100f1548(*(short *)(param_1 + 0x2c),&local_28);
    if (cVar4 < '\x03') {
      FUN_1011e4fc(&local_28,(int)(short)(local_28._2_2_ + *(short *)(param_1 + 0x3a)));
    }
    else {
      FUN_1011e4ee(&local_28,(int)(short)((short)local_28 + *(short *)(param_1 + 0x38)));
    }
    FUN_10139410(&local_28);
    uVar10 = (uint)local_28._2_2_;
    uVar9 = (uint)(short)local_28;
    sVar5 = *(short *)(param_1 + 0x2a);
    goto LAB_101394a2;
  }
  if (cVar4 < '\x03') {
    iVar8 = (int)(short)(*(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x3e));
    if (*(char *)(param_1 + 0x21) == '\x01') {
      iVar6 = 0;
      iVar12 = 1;
      iVar16 = (int)-sVar15;
    }
    else {
      iVar6 = 0;
LAB_10139572:
      iVar12 = -1;
      iVar16 = iVar7;
    }
  }
  else {
    iVar8 = (int)(short)(*(short *)(param_1 + 0x30) - *(short *)(param_1 + 0x3c));
    if (*(char *)(param_1 + 0x21) != '\x04') {
      iVar7 = 0;
      goto LAB_10139572;
    }
    iVar12 = 1;
    iVar6 = (int)-sVar14;
  }
  if (iVar12 * iVar8 < 1) {
    if (iVar12 * iVar8 != 0) {
      iVar6 = (int)(short)-(short)iVar6;
      iVar16 = (int)(short)-(short)iVar16;
      if (*(short *)(param_1 + 0x26) == sVar5) {
        FUN_100f1570(sVar5,iVar6,iVar16);
        uVar1 = *(undefined2 *)(param_1 + 0x24);
        goto LAB_101394fe;
      }
    }
  }
  else if (*(short *)(param_1 + 0x26) != sVar5) {
    FUN_100f1570(sVar5,(int)(short)-(short)iVar6,(int)(short)-(short)iVar16);
    uVar1 = *(undefined2 *)(param_1 + 0x26);
LAB_101394fe:
    *(undefined2 *)(param_1 + 0x2a) = uVar1;
  }
  *(short *)(param_1 + 0x48) = (short)iVar8;
  if (*(short *)(param_1 + 0x2a) != 0) {
    if (cVar4 < '\x03') {
      iVar16 = (int)(short)((short)iVar16 + *(short *)(param_1 + 0x42));
    }
    else {
      iVar6 = (int)(short)((short)iVar6 + *(short *)(param_1 + 0x40));
    }
    FUN_100f1570(*(short *)(param_1 + 0x2a),iVar6,iVar16);
  }
  if (*(short *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (cVar4 < '\x03') {
    FUN_1011e4fc(&local_28,(int)*(short *)(param_1 + 0x42));
  }
  else {
    FUN_1011e4ee(&local_28,(int)*(short *)(param_1 + 0x40));
  }
  if (*(short *)(param_1 + 0x2a) == 0) {
    FUN_10139410(&local_28);
  }
  uVar10 = (uint)local_28._2_2_;
  uVar9 = (uint)(short)local_28;
  sVar5 = *(short *)(param_1 + 0x2c);
LAB_101394a2:
  FUN_100f1570(sVar5,uVar9,uVar10);
  return;
}

