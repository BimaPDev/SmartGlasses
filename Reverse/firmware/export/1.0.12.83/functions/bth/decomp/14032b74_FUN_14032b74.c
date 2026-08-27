/* FUN_14032b74 @ 0x14032b74 */

void FUN_14032b74(int param_1,uint param_2,int param_3,int param_4,char param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_2 - 0x80 & 0xffff) < 4) {
    iVar4 = FUN_14035530(param_2 - 0x80 & 0xff);
    if (param_3 == 1) {
      if (iVar4 != 0) {
        FUN_1402a6e8(4,0x710,DAT_14032cf4,DAT_14032cf0,DAT_14032d18);
      }
      FUN_14034df0(param_4);
      FUN_1402a6e8(4,0x71a,DAT_14032cf4,DAT_14032cf0,DAT_14032cec,param_1,param_1 - iVar4,1,param_2)
      ;
LAB_14032c54:
      FUN_1402a6e8(4,0x6c8,DAT_14032cf4,DAT_14032cf0,DAT_14032cfc,DAT_14032cf8,param_2,param_1,
                   param_4);
      uVar1 = *DAT_14032d00;
      FUN_14034b84(param_1,param_4);
      FUN_1402a6e8(4,0x5ee,DAT_14032cf4,DAT_14032cf0,DAT_14032d14,DAT_14032d10,uVar1);
      FUN_14034a50(uVar1,param_4);
      FUN_14034cac(param_4);
      goto LAB_14034f34;
    }
    FUN_14034df0(param_4);
    FUN_1402a6e8(4,0x71a,DAT_14032cf4,DAT_14032cf0,DAT_14032cec,param_1,param_1 - iVar4,param_3,
                 param_2);
  }
  else {
    FUN_1402a6e8(4,0x75c,DAT_14032cf4,DAT_14032cf0,DAT_14032d04,param_2);
    if (param_5 == '\0') {
      FUN_1402a6e8(4,0x6fd,DAT_14032cf4,DAT_14032cf0,DAT_14032d0c,DAT_14032d08,param_2);
      return;
    }
    FUN_14034df0(param_4);
    FUN_1402a6e8(4,0x71a,DAT_14032cf4,DAT_14032cf0,DAT_14032cec,param_1,param_1,param_3,param_2);
    if (param_3 == 1) goto LAB_14032c54;
  }
  FUN_1402a6e8(4,0x6d2,DAT_14032cf4,DAT_14032cf0,DAT_14032cfc,DAT_14032cf8,param_2,param_1,param_4);
  uVar2 = DAT_14032af8;
  uVar5 = (uint)(*DAT_14032af0 >> 1);
  if ((*DAT_14032af0 & 1) != 0) {
    uVar5 = uVar5 + 1;
  }
  FUN_1402a6e8(4,0x5fe,DAT_14032afc,DAT_14032b00,DAT_14032af8,DAT_14032af4,uVar5);
  uVar3 = FUN_1403477c(param_2);
  if (param_2 < 0x80) {
    uVar7 = 0;
    iVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_14035530(param_2 - 0x80 & 0xffff);
    if ((int)uVar6 < 0) {
      iVar4 = (int)uVar6 / 2;
      uVar7 = uVar6 - ((int)uVar6 >> 0x1f) & 0xfffffffe;
    }
    else {
      iVar4 = (int)uVar6 >> 1;
      if ((uVar6 & 1) == 0) {
        uVar7 = uVar6 & 0xfffffffe;
      }
      else {
        iVar4 = iVar4 + 1;
        uVar7 = iVar4 * 2;
      }
    }
  }
  FUN_1402a6e8(4,0x622,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b04,iVar4);
  iVar4 = FUN_140328a4(uVar3,uVar6);
  if (iVar4 < (int)uVar5) {
    FUN_1402a6e8(4,0x641,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b08,0);
    FUN_1402a6e8(4,0x659,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b0c,0);
    uVar6 = param_1 - uVar7 & 0xfffffff;
    FUN_1402a6e8(4,0x663,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b10,uVar6);
    uVar5 = (uVar5 - iVar4) * 2 & 0xffff;
  }
  else {
    iVar4 = iVar4 - uVar5;
    FUN_1402a6e8(4,0x641,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b08,1);
    if ((short)((short)iVar4 * 2) < 0x271) {
      FUN_1402a6e8(4,0x659,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b0c,0);
      uVar6 = (param_1 + 1) - uVar7 & 0xfffffff;
      FUN_1402a6e8(4,0x663,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b10,uVar6);
      uVar5 = (0x138 - iVar4) * 2 & 0xffff;
    }
    else {
      FUN_1402a6e8(4,0x659,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b0c,1);
      uVar6 = (param_1 + 2) - uVar7 & 0xfffffff;
      FUN_1402a6e8(4,0x663,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b10,uVar6);
      uVar5 = (0x270 - iVar4) * 2 & 0xffff;
    }
  }
  FUN_1402a6e8(4,0x67b,DAT_14032afc,DAT_14032b00,uVar2,DAT_14032b14,uVar5);
  FUN_14034b84(uVar6,param_4);
  FUN_14034a50(uVar5,param_4);
  FUN_14034cac(param_4);
LAB_14034f34:
  iVar4 = DAT_14034f98;
  if (param_4 - 1U < 2) {
    *(uint *)(DAT_14034f98 + 0xd28) = *(uint *)(DAT_14034f98 + 0xd28) | 0x80000000;
  }
  else if (param_4 == 3) {
    *(uint *)(DAT_14034f98 + 0xd28) = *(uint *)(DAT_14034f98 + 0xd28) | 0x80000000;
    *(uint *)(iVar4 + 0xd70) = *(uint *)(iVar4 + 0xd70) & 0xfffffdff;
  }
  FUN_1402a6e8(4,0xd19,DAT_14034fa8,DAT_14034fa4,DAT_14034fa0,DAT_14034f9c,param_4,
               *(undefined4 *)(DAT_14034f98 + 0xd28),*(undefined4 *)(DAT_14034f98 + 0xd70));
  return;
}

