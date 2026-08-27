/* FUN_2c4b8700 @ 0x2c4b8700 */

undefined4 FUN_2c4b8700(undefined4 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c4b89bc;
  local_34 = 0;
  uVar5 = *(uint *)(param_2 + 0x14);
  if ((uVar5 & 0xc) != 0) {
    local_34 = *(uint *)(param_2 + 0xc);
    *DAT_2c4b8abc = local_34;
    puVar3 = DAT_2c4b8ac4;
    local_30 = 0;
    if ((local_34 & 0x10000) != 0) {
      local_34 = local_34 & 0xfffeffff;
      local_30 = 0x40;
    }
    if ((int)(local_34 << 0xe) < 0) {
      local_30 = local_30 | 0x80;
      local_34 = local_34 & 0xfffdffff;
    }
    *DAT_2c4b8ac0 = local_30;
    if ((*puVar3 & 0xff) != 0) {
      local_34 = local_34 & ~*DAT_2c4b8ac8;
      local_30 = local_30 | *puVar3;
    }
    FUN_2c4b773c(&local_34,&local_30,DAT_2c4b8ac0);
    uVar5 = *(uint *)(param_2 + 0x14);
  }
  uVar5 = uVar5 & 1;
  if (uVar5 != 0) {
    cVar1 = *param_2;
    if (cVar1 != '\x10') {
      if (cVar1 == '\x18') {
        uVar5 = 2;
      }
      else {
        if (cVar1 != ' ') {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b8adc,DAT_2c4b8acc);
        }
        uVar5 = 4;
      }
    }
    *(uint *)(DAT_2c4b89c0 + 0x744) = uVar5 | *(uint *)(DAT_2c4b89c0 + 0x744) & 0xfffffff8;
  }
  uVar5 = 0;
  bVar4 = 0;
  do {
    if ((1 << (uVar5 & 0xff) & (*DAT_2c4b89c4 | *DAT_2c4b89f8)) != 0) {
      bVar4 = bVar4 + 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 8);
  if ((byte)param_2[8] <= bVar4) {
    if (-1 < *(int *)(param_2 + 0x14) << 0x1e) {
      if (*DAT_2c4b89bc == local_2c) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    iVar6 = 0;
    iVar8 = *(int *)(param_2 + 4);
    iVar7 = 0;
    do {
      if (*(int *)(DAT_2c4b89fc + iVar6 * 4) == iVar8) {
        iVar6 = DAT_2c4b89fc + iVar7 * 0xc;
        bVar4 = *(byte *)(iVar6 + 8);
        bVar2 = *(byte *)(iVar6 + 9);
        if ((int)(short)((ushort)bVar4 / (ushort)bVar2) * (int)(short)(ushort)bVar2 - (uint)bVar4 ==
            0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x122a,DAT_2c4b89d4,DAT_2c4b89dc,DAT_2c4b89d8,DAT_2c4b89c8,iVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4b8ae0,DAT_2c4b8acc,iVar8,(uint)bVar4,bVar2);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 3;
    } while (iVar7 != 0x12);
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b89cc,DAT_2c4b89c8,iVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b8ad8,DAT_2c4b8acc,0x1217,*DAT_2c4b8abc,*DAT_2c4b89f8,local_30,param_2[8],
               bVar4);
}

