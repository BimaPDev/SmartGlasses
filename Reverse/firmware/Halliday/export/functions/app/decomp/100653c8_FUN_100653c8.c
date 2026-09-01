/* FUN_100653c8 @ 0x100653c8 */

int FUN_100653c8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,short param_5,
                ushort param_6,ushort param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_60 [4];
  int local_5c;
  uint local_54;
  undefined1 auStack_44 [4];
  int local_40;
  uint local_38;
  ushort local_34;
  
  iVar1 = FUN_100652c4(*param_1);
  if ((iVar1 == 0) || (param_1[1] < 0)) {
    return -0x13;
  }
  uVar2 = (*DAT_100654e4)(param_1,auStack_60,param_3,(uint)param_6,(uint)param_7);
  (*DAT_100654e0)(uVar2,auStack_44,1,param_2);
  if ((short)param_1[6] == 0x80) {
    if (((((short)param_1[0x14] != param_4) || ((uint)param_6 != *(ushort *)(param_1 + 0x15) + 1))
        || ((int)param_5 < (int)*(short *)((int)param_1 + 0x52))) ||
       ((((int)(param_4 + 1 + (uint)*(ushort *)(param_1 + 0x15)) <
          (int)((uint)param_7 + (int)param_5) || (local_40 != local_5c)) ||
        ((local_38 != local_54 || (local_38 != local_34)))))) {
      return -0x16;
    }
    *(short *)(param_1 + 0x1f) = param_5;
  }
  iVar5 = (int)(short)(param_5 - *(short *)((int)param_1 + 0x52));
  iVar1 = (int)(short)((short)param_4 - (short)param_1[0x14]);
  iVar4 = param_1[0x1b];
  iVar3 = param_1[0x1e];
  param_1[0x1b] = param_1[0x1a] * iVar5 + iVar1 * param_1[0x19] + iVar4;
  param_1[0x1e] = param_1[0x1d] * iVar5 + param_1[0x1c] * iVar1 + iVar3;
  param_1[0x18] = param_1[0x12];
  pcVar6 = *(code **)(*(int *)(*param_1 + 8) + 0x20);
  if (pcVar6 == (code *)0x0) {
    iVar1 = -0x86;
  }
  else {
    iVar1 = (*pcVar6)(*param_1,param_1[1],auStack_60,auStack_44,param_1 + 0x17);
    if (-1 < iVar1) {
      FUN_1011ddea(param_1 + 2);
      goto LAB_100654c8;
    }
  }
  param_1[0x22] = param_1[0x22] | 2;
LAB_100654c8:
  param_1[0x1b] = iVar4;
  param_1[0x1e] = iVar3;
  return iVar1;
}

