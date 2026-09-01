/* FUN_10002640 @ 0x10002640 */

uint FUN_10002640(int param_1,undefined4 param_2,int param_3,int *param_4,byte param_5,
                 undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_31;
  undefined4 local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = (int)(char)(param_5 - 1);
  local_31 = 0;
  if ((param_3 != 0) && (*(char *)(iVar5 + 10) != '\0')) {
    FUN_10003108(DAT_1000285c);
    return 0xfffffff0;
  }
  iVar1 = FUN_10001d50(param_4,(uint)param_5,&local_31);
  if (iVar1 != 0) {
    return 0xffffffea;
  }
  local_30 = param_4[2];
  local_2c = param_4[3];
  for (iVar1 = 1; iVar1 < (int)(uint)param_5; iVar1 = iVar1 + 1) {
    FUN_10003228(&local_30,param_4 + 2 + iVar1 * 6);
  }
  if ((short)local_2c < 2) {
    return 0xffffffea;
  }
  if (param_3 == 0) {
    if (*(int *)(iVar5 + 4) == 0) {
      FUN_10003108(DAT_10002868);
      return 0xffffffea;
    }
  }
  else {
    if ((*(uint *)(param_3 + 4) & 0xa9) == 0) {
      FUN_10003108(DAT_10002860);
      return 0xffffffea;
    }
    if (((0x200 < *(uint *)(param_3 + 0xc)) || (0x200 < *(ushort *)(param_3 + 0x10))) ||
       (0xfff < *(uint *)(param_3 + 8))) {
      FUN_10003108(DAT_10002864);
      return 0xffffffea;
    }
  }
  iVar1 = FUN_10001956(param_2);
  if (iVar1 == 0) {
    return 0xfffffff0;
  }
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0xd) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined1 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 0x29) = 0;
  *(undefined1 *)(iVar1 + 0x2a) = 0;
  *(undefined1 *)(iVar1 + 0x2b) = 1;
  *(char *)(iVar1 + 0x2d) = (char)((int)(short)local_30 >> 1);
  *(char *)(iVar1 + 0x2e) = (char)(local_30 >> 0x10);
  *(char *)(iVar1 + 0x2c) = (char)((int)(short)local_30 << 7);
  *(byte *)(iVar1 + 0x2f) =
       *(byte *)(iVar1 + 0x2f) & 0xfe | (byte)(((local_30 >> 0x10) << 0x17) >> 0x1f);
  FUN_100020b4(iVar5,iVar1 + 4,param_3,&local_30,0);
  iVar4 = iVar3;
  if ((param_4[iVar3 * 6] == 0) && ((iVar3 == 0 || ((char)param_4[iVar3 * 6 + 4] == '\0')))) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x20;
    *(int *)(iVar1 + 0x24) = param_4[iVar3 * 6 + 1];
    iVar4 = (int)(char)(param_5 - 2);
    *(int *)(iVar1 + 0x1c) =
         (int)(short)param_4[iVar3 * 6 + 2] - (int)(short)local_30 |
         ((int)*(short *)((int)param_4 + iVar3 * 0x18 + 10) - (int)local_30._2_2_) * 0x10000;
    *(uint *)(iVar1 + 0x20) =
         (int)(short)param_4[iVar3 * 6 + 3] - 1U |
         (*(short *)((int)param_4 + iVar3 * 0x18 + 0xe) + -1) * 0x10000;
    if (iVar4 == -1) goto LAB_10002840;
  }
  if ((*param_4 == 0) && ((iVar4 == 0 || ((char)param_4[10] == '\0')))) {
    iVar4 = (int)(char)((char)iVar4 + -1);
    *(int *)(iVar1 + 8) = param_4[1];
    if (iVar4 == -1) goto LAB_10002840;
    param_4 = param_4 + 6;
  }
  uVar6 = 2;
  param_4 = param_4 + iVar4 * 6;
  do {
    FUN_100021da(iVar1 + 4,param_4,uVar6 & 0xff,0,local_31);
    uVar6 = (uint)(char)((char)uVar6 + -1);
    *(byte *)(iVar1 + 0x2c) =
         *(byte *)(iVar1 + 0x2c) & 0xe7 |
         (byte)((((*(byte *)(iVar1 + 0x2c) & 0x1f) >> 3) + 1 & 3) << 3);
    if (uVar6 == 0xffffffff) break;
    param_4 = param_4 + -6;
  } while ((int)(char)('\x01' - (char)iVar4) != uVar6);
  if (((*(byte *)(iVar1 + 0x2c) & 0x60) != 0) && (param_3 == 0)) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x100;
  }
LAB_10002840:
  *(undefined1 *)(iVar1 + 1) = param_6;
  uVar2 = FUN_100031a8(param_2,1);
  FUN_1000257c(iVar5,iVar1,uVar2);
  return (uint)*(ushort *)(iVar1 + 2);
}

