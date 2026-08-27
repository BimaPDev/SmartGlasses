/* FUN_2c63678c @ 0x2c63678c */

void FUN_2c63678c(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short local_22;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = *DAT_2c63688c;
  if (0x168 < param_2) {
    param_2 = param_2 - 0x168 & 0xffff;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x28);
  sVar1 = *(ushort *)(param_1 + 0x28) - *(short *)(param_1 + 0x26);
  sVar2 = (short)param_2 - *(short *)(param_1 + 0x26);
  iVar4 = (int)sVar1;
  iVar6 = (int)sVar2;
  if (iVar4 < 0) {
    iVar4 = (int)(short)(sVar1 + 0x168);
  }
  if (iVar6 < 0) {
    iVar6 = (int)(short)(sVar2 + 0x168);
  }
  iVar5 = iVar6 - iVar4;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < 0xb5) {
    if (iVar6 < iVar4) {
      cVar3 = FUN_2c607e50(param_1);
      if ((uVar7 != param_2) && (cVar3 == '\x01')) {
        FUN_2c6365bc(param_1,param_2,uVar7,0x20000);
      }
    }
    else if (((iVar4 < iVar6) && (cVar3 = FUN_2c607e50(param_1), cVar3 == '\x01')) &&
            (uVar7 != param_2)) {
      FUN_2c6365bc(param_1,uVar7,param_2,0x20000);
    }
  }
  else {
    FUN_2c607df0(param_1);
  }
  FUN_2c6363e0(param_1,auStack_20,&local_22);
  FUN_2c63648c(param_1,auStack_20,(int)local_22,auStack_1c);
  FUN_2c6078f0(param_1,auStack_1c);
  *(short *)(param_1 + 0x28) = (short)param_2;
  FUN_2c6363e0(param_1,auStack_20,&local_22);
  FUN_2c63648c(param_1,auStack_20,(int)local_22,auStack_1c);
  FUN_2c6078f0(param_1,auStack_1c);
  if (*DAT_2c63688c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

