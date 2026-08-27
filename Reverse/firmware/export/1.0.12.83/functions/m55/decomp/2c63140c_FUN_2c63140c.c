/* FUN_2c63140c @ 0x2c63140c */

void FUN_2c63140c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_24;
  ushort local_20;
  ushort local_1e;
  int local_1c;
  
  local_1c = *DAT_2c6315cc;
  FUN_2c607df0();
  iVar3 = FUN_2c614f58(param_2);
  if (iVar3 == 3) {
    if ((*(byte *)(param_1 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 3;
    goto LAB_2c6314a4;
  }
  FUN_2c612838(param_2,&local_24);
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x24));
    }
    uVar6 = (local_24 & 0x1fffff) >> 10;
    *(int *)(param_1 + 0x24) = param_2;
    uVar7 = local_24 >> 0x15;
  }
  else {
    if (((iVar3 - 1U & 0xff) < 2) && (iVar8 = *(int *)(param_1 + 0x24), iVar8 != param_2)) {
      if ((*(byte *)(param_1 + 0x5a) & 3) - 1 < 2) {
        iVar5 = FUN_2c66c4ec(param_2);
        iVar5 = FUN_2c62be98(0x40,iVar5 + 1);
        if (iVar5 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar5,param_2);
        *(int *)(param_1 + 0x24) = iVar5;
        if (iVar8 != 0) {
          FUN_2c62bea8(iVar8);
        }
      }
      else {
        iVar8 = FUN_2c66c4ec(param_2);
        iVar8 = FUN_2c62be98(0x40,iVar8 + 1);
        if (iVar8 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar8,param_2);
        *(int *)(param_1 + 0x24) = iVar8;
      }
    }
    if (iVar3 == 2) {
      uVar4 = FUN_2c6033b4(param_1,0,0x57);
      sVar1 = FUN_2c6033b4(param_1,0,0x58);
      sVar2 = FUN_2c6033b4(param_1,0,0x59);
      FUN_2c62b954(&local_20,param_2,uVar4,(int)sVar1,(int)sVar2,0x1fff,0);
      uVar6 = local_20 & 0x7ff;
      iVar8 = (local_20 & 0x7ff) << 10;
      local_24._0_2_ = (ushort)local_24 & 0x3ff | (ushort)iVar8;
      uVar7 = local_1e & 0x7ff;
      local_24 = CONCAT22((ushort)((uint)iVar8 >> 0x10) | (ushort)((local_1e & 0x7ff) << 5),
                          (ushort)local_24);
    }
    else {
      uVar6 = (local_24 & 0x1fffff) >> 10;
      uVar7 = local_24 >> 0x15;
    }
  }
  *(short *)(param_1 + 0x2c) = (short)uVar6;
  *(short *)(param_1 + 0x2e) = (short)uVar7;
  *(short *)(param_1 + 0x32) = (short)((int)uVar6 >> 1);
  *(short *)(param_1 + 0x34) = (short)((int)uVar7 >> 1);
  *(byte *)(param_1 + 0x5a) =
       (byte)iVar3 & 3 | (byte)((local_24 & 0x1f) << 2) | *(byte *)(param_1 + 0x5a) & 0x80;
  FUN_2c607588(param_1);
  if ((*(short *)(param_1 + 0x30) != 0) || (*(short *)(param_1 + 0x36) != 0x100)) {
    FUN_2c600bac(param_1);
  }
  FUN_2c607df0(param_1);
LAB_2c6314a4:
  if (*DAT_2c6315cc == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

