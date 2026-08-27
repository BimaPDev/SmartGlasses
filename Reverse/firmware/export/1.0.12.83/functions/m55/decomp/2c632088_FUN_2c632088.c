/* FUN_2c632088 @ 0x2c632088 */

void FUN_2c632088(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 local_8c;
  short local_8a;
  undefined2 local_88;
  short local_86;
  undefined1 auStack_84 [88];
  int local_2c;
  
  local_2c = *DAT_2c632170;
  if (param_3 != 0xffff) {
    iVar7 = *(int *)(param_1 + 0x24);
    uVar1 = *(ushort *)(iVar7 + 0x20);
    if (uVar1 != param_4) {
      *(short *)(iVar7 + 0x20) = (short)param_4;
      *(byte *)(iVar7 + 0x22) = *(byte *)(iVar7 + 0x22) | 4;
    }
    iVar4 = FUN_2c6033b4(iVar7,0x40000,0x57);
    sVar3 = FUN_2c6033b4(iVar7,0x40000,0x59);
    sVar2 = *(short *)(iVar4 + 8);
    iVar4 = (int)sVar3;
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      iVar5 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0);
      iVar6 = *(int *)(param_1 + 0x24);
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    local_8a = ((sVar2 + sVar3) * (short)param_3 - (short)(iVar4 >> 1)) + *(short *)(iVar5 + 0x16);
    local_8c = *(undefined2 *)(iVar6 + 0x14);
    local_86 = sVar3 + -1 + sVar2 + local_8a;
    local_88 = *(undefined2 *)(iVar6 + 0x18);
    FUN_2c61314c(auStack_84);
    FUN_2c6004cc(iVar7,0x40000,auStack_84);
    FUN_2c61319c(param_2,auStack_84,&local_8c);
    *(ushort *)(iVar7 + 0x20) = uVar1;
    *(byte *)(iVar7 + 0x22) = *(byte *)(iVar7 + 0x22) & 0xfb;
  }
  if (*DAT_2c632170 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

