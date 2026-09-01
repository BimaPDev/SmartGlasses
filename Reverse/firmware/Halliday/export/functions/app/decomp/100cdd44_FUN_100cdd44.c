/* FUN_100cdd44 @ 0x100cdd44 */

undefined4 FUN_100cdd44(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar7;
  undefined4 extraout_r3;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_20 [2];
  undefined2 local_1e;
  undefined1 local_1c [2];
  undefined2 local_1a;
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined1 local_14 [2];
  undefined2 local_12;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100cdefc,DAT_100cdef8,DAT_100cdef4,0xe3f,0,param_2);
    FUN_10119dc2(DAT_100cdf00);
    uVar8 = FUN_1011a1f0(DAT_100cdef4,0xe3f,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((param_2 == (int *)0x0) || (param_4 = 0, param_2[1] == 0)) {
    FUN_10119dc2(DAT_100cdefc,DAT_100cdf04,DAT_100cdef4,0xe40,uVar8);
    FUN_10119dc2(DAT_100cdf00);
    uVar8 = FUN_1011a1f0(DAT_100cdef4,0xe40,param_3,param_4);
    param_3 = extraout_r2_00;
  }
  if (((short)param_2[2] == 0) || (*(short *)((int)param_2 + 0xe) == 0)) {
    FUN_10119dc2(DAT_100cdefc,DAT_100cdf08,DAT_100cdef4,0xe41,uVar8);
    FUN_10119dc2(DAT_100cdf00);
    uVar8 = FUN_1011a1f0(DAT_100cdef4,0xe41,param_3,0);
  }
  uVar2 = *(ushort *)(param_2 + 2);
  uVar3 = *(ushort *)((int)param_2 + 0xe);
  if (uVar3 < uVar2) {
    FUN_10119dc2(DAT_100cdefc,DAT_100cdf0c,DAT_100cdef4,0xe43,uVar8);
    FUN_10119dc2(DAT_100cdf00);
    FUN_1011a1f0(DAT_100cdef4,0xe43,uVar2,uVar3);
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    return 0xffffff80;
  }
  uVar4 = DAT_100cdf4c;
  uVar5 = DAT_100cdf44;
  uVar7 = DAT_100cdf48;
  switch((char)param_2[4]) {
  case '\0':
  case '\x01':
    if ((char *)*param_2 == (char *)0x0) {
      uVar9 = 0x10;
      uVar10 = 4;
      uVar5 = DAT_100cdf30;
      uVar7 = DAT_100cdf2c;
    }
    else {
      cVar1 = *(char *)*param_2;
      if (cVar1 == '\0') {
        uVar10 = 8;
      }
      else {
        uVar4 = DAT_100cdf20;
        uVar5 = DAT_100cdf18;
        uVar7 = DAT_100cdf1c;
        if (cVar1 != '\x02') goto switchD_100cddf8_default;
        uVar10 = 0x16;
      }
      uVar9 = 6;
      uVar5 = DAT_100cdf24;
      uVar7 = DAT_100cdf28;
    }
    break;
  case '\x02':
  case '\x03':
    uVar9 = 8;
    uVar10 = 4;
    uVar5 = DAT_100cdf34;
    uVar7 = DAT_100cdf38;
    break;
  case '\x04':
    if (*param_2 != 0) {
      local_20[0] = 0;
      local_1e = 0x2800;
      iVar6 = FUN_10132c82(*param_2,local_20);
      if (iVar6 == 0) {
        return 0xffffffea;
      }
      local_1c[0] = 0;
      local_1a = 0x2801;
      iVar6 = FUN_10132c82(*param_2,local_1c);
      if (iVar6 == 0) {
        return 0xffffffea;
      }
      local_18[0] = 0;
      local_16 = 0x2802;
      iVar6 = FUN_10132c82(*param_2,local_18);
      if (iVar6 == 0) {
        return 0xffffffea;
      }
      local_14[0] = 0;
      local_12 = 0x2803;
      iVar6 = FUN_10132c82(*param_2,local_14);
      if (iVar6 == 0) {
        return 0xffffffea;
      }
    }
  case '\x05':
    uVar9 = 4;
    uVar10 = 4;
    uVar5 = DAT_100cdf3c;
    uVar7 = DAT_100cdf40;
    break;
  default:
switchD_100cddf8_default:
    FUN_100a5b78(uVar4 | (DAT_100cdf14 - DAT_100cdf10) * 0x20 & 0xff00U,uVar5,uVar7);
    return 0xffffffea;
  }
  uVar5 = FUN_10134ab0(param_1,uVar5,param_2,uVar7,uVar9,uVar10);
  return uVar5;
}

