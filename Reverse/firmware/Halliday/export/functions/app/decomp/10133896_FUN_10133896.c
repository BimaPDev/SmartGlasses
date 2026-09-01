/* FUN_10133896 @ 0x10133896 */

uint FUN_10133896(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r2;
  int extraout_r3;
  undefined8 uVar4;
  
  if ((((*param_2 <= *(ushort *)(param_1 + 0xa6)) && (*(ushort *)(param_1 + 0xa6) <= param_2[1])) &&
      (*(ushort *)(param_1 + 0xac) == param_2[2])) && (*(ushort *)(param_1 + 0xae) == param_2[3])) {
    FUN_10133554(param_1 + 4,9);
    return 0xffffff88;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    uVar4 = FUN_101334a4(param_1 + 4);
    param_2 = (ushort *)((ulonglong)uVar4 >> 0x20);
    param_1 = extraout_r3;
    if (-1 < (int)((uint)uVar4 << 0x17)) {
      *(ushort *)(extraout_r3 + 0xa8) = *param_2;
      *(ushort *)(extraout_r3 + 0xaa) = param_2[1];
      uVar1 = param_2[3];
      *(ushort *)(extraout_r3 + 0xb0) = param_2[2];
      *(ushort *)(extraout_r3 + 0xb2) = uVar1;
      FUN_101334aa(extraout_r2,0x200);
      return ((uint)uVar4 & 0x1ff) >> 8;
    }
  }
  iVar2 = FUN_1013309a(param_2);
  if (iVar2 != 0) {
    if ((((-1 < (int)((uint)*(byte *)(DAT_100ca4f8 + 0xb0) << 0x1e)) ||
         (-1 < (int)((uint)*(byte *)(param_1 + 0xb4) << 0x1e))) ||
        (iVar2 = FUN_101334a4(param_1 + 4), iVar2 << 0x15 < 0)) && (*(char *)(param_1 + 3) != '\0'))
    {
      uVar3 = FUN_1013428c(param_1,param_2);
      return uVar3;
    }
    uVar3 = FUN_10133846(param_1,param_2);
    if (uVar3 == 0) {
      *(ushort *)(param_1 + 0xb0) = param_2[2];
      *(ushort *)(param_1 + 0xb2) = param_2[3];
    }
    return uVar3;
  }
  return 0xffffffea;
}

