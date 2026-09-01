/* FUN_100cd204 @ 0x100cd204 */

void FUN_100cd204(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_100cd25c;
  uVar2 = *(uint *)(DAT_100cd25c + 0x50);
  *(uint *)(DAT_100cd25c + 0x50) = uVar2 | 1;
  if ((uVar2 & 1) == 0) {
    *(short *)(iVar1 + 0x18) = (short)param_1;
    *(short *)(iVar1 + 0x1a) = (short)param_2;
  }
  else {
    if (param_1 < *(ushort *)(iVar1 + 0x18)) {
      *(short *)(iVar1 + 0x18) = (short)param_1;
      if (param_2 <= *(ushort *)(iVar1 + 0x1a)) goto LAB_100cd22a;
    }
    else if (param_2 <= *(ushort *)(iVar1 + 0x1a)) {
      return;
    }
    *(short *)(iVar1 + 0x1a) = (short)param_2;
  }
LAB_100cd22a:
  uVar3 = FUN_1013457a(DAT_100cd260);
  if ((int)uVar3 << 0x1e < 0) {
    return;
  }
  FUN_1013cbaa(DAT_100cd264,(int)((ulonglong)uVar3 >> 0x20),10,0);
  return;
}

