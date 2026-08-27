/* FUN_2c6352cc @ 0x2c6352cc */

void FUN_2c6352cc(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short local_2c;
  short local_2a;
  short local_28;
  ushort local_26;
  short local_24;
  short local_22;
  int local_1c;
  
  local_1c = *DAT_2c6353c4;
  iVar4 = *(int *)(param_1 + 0x28) + param_2 * 8;
  local_2c = *(short *)(*(int *)(param_1 + 0x28) + param_2 * 8);
  local_2a = *(short *)(iVar4 + 2);
  local_28 = *(short *)(iVar4 + 4);
  local_26 = *(short *)(iVar4 + 6);
  FUN_2c607338(param_1,&local_24);
  sVar2 = FUN_2c6033b4(param_1,0,0x14);
  sVar3 = FUN_2c6033b4(param_1,0,0x15);
  FUN_2c604188(param_1);
  iVar4 = FUN_2c62a4c4();
  sVar1 = (short)(int)((longlong)DAT_2c6353c8 * (longlong)iVar4 >> 0x22) - (short)(iVar4 >> 0x1f);
  if (sVar3 < sVar1) {
    sVar3 = sVar1;
  }
  if (sVar2 < sVar1) {
    sVar2 = sVar1;
  }
  local_2a = (local_2a + local_22) - sVar3;
  local_26 = sVar3 + local_22 + local_26;
  local_2c = (local_2c + local_24) - sVar2;
  local_28 = sVar2 + local_24 + local_28;
  if ((*(ushort *)(param_1 + 0x34) == param_2) &&
     ((int)((uint)*(ushort *)(*(int *)(param_1 + 0x2c) + (uint)*(ushort *)(param_1 + 0x34) * 2) <<
           0x16) < 0)) {
    local_2a = ~local_26 + local_2a * 2;
  }
  FUN_2c6078f0(param_1,&local_2c);
  if (*DAT_2c6353c4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

