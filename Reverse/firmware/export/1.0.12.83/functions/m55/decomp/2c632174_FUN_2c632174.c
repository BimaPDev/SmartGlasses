/* FUN_2c632174 @ 0x2c632174 */

void FUN_2c632174(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 local_54;
  short local_52;
  undefined2 local_50;
  short local_4e;
  undefined1 auStack_4c [8];
  int local_44 [6];
  short local_2c;
  int local_1c;
  
  local_1c = *DAT_2c63226c;
  if (param_3 != 0xffff) {
    iVar5 = *(int *)(param_1 + 0x24);
    uVar1 = *(ushort *)(iVar5 + 0x20);
    if (uVar1 != param_4) {
      *(short *)(iVar5 + 0x20) = (short)param_4;
      *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) | 4;
    }
    FUN_2c6129e4(local_44);
    FUN_2c6007ec(iVar5,0x40000,local_44);
    local_2c = FUN_2c6033b4(iVar5,0x40000,0x59);
    if ((*(int *)(param_1 + 0x24) != 0) &&
       (iVar2 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0), iVar2 != 0)) {
      iVar4 = (int)local_2c;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      local_52 = ((*(short *)(local_44[0] + 8) + local_2c) * (short)param_3 - (short)(iVar4 >> 1)) +
                 *(short *)(iVar2 + 0x16);
      local_4e = local_2c + -1 + *(short *)(local_44[0] + 8) + local_52;
      local_54 = *(undefined2 *)(iVar5 + 0x14);
      local_50 = *(undefined2 *)(iVar5 + 0x18);
      iVar4 = FUN_2c62a6b4(auStack_4c,*(undefined4 *)(param_2 + 8),&local_54);
      if (iVar4 != 0) {
        uVar6 = *(undefined4 *)(param_2 + 8);
        *(undefined1 **)(param_2 + 8) = auStack_4c;
        uVar3 = FUN_2c63736c(iVar2);
        FUN_2c612a20(param_2,local_44,iVar2 + 0x14,uVar3,0);
        *(undefined4 *)(param_2 + 8) = uVar6;
      }
      *(ushort *)(iVar5 + 0x20) = uVar1;
      *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0xfb;
    }
  }
  if (*DAT_2c63226c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

