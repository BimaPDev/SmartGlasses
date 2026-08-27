/* FUN_2c49c7b0 @ 0x2c49c7b0 */

void FUN_2c49c7b0(void)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  undefined8 uVar10;
  byte local_20;
  byte local_1f;
  ushort local_1e;
  uint local_1c;
  
  iVar1 = DAT_2c49c8a0;
  local_1c = *DAT_2c49c8a4;
  uVar10 = FUN_2c49c6a0(DAT_2c49c8a0,0xa6,&local_20,0);
  puVar4 = DAT_2c49c8b0;
  puVar3 = DAT_2c49c8ac;
  pbVar2 = DAT_2c49c8a8;
  iVar7 = (int)uVar10;
  if (-1 < iVar7) {
    bVar8 = *DAT_2c49c8a8;
    *(uint *)(iVar1 + 0x34) = (uint)local_20;
    if (((uint)local_20 != (uint)bVar8) || (*puVar3 != *puVar4)) {
      local_1f = 0;
      local_1e = 0;
      iVar7 = FUN_2c4eab7c();
      cVar5 = (**(code **)(iVar7 + 0x8c))(&local_1f,&local_1e);
      if (*(int *)(iVar1 + 0x34) < 0x2d) {
        bVar8 = local_1f;
        if (local_1f < 0x2d) {
          bVar8 = 100;
        }
        *pbVar2 = bVar8;
        uVar9 = *puVar3;
      }
      else {
        *pbVar2 = (byte)*(int *)(iVar1 + 0x34);
        uVar9 = *puVar3;
      }
      if (uVar9 < local_1e) {
        uVar9 = uVar9 + local_1e;
      }
      *puVar4 = uVar9;
      iVar7 = FUN_2c4eab7c();
      cVar6 = (**(code **)(iVar7 + 0x88))(*pbVar2,*puVar4);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x338,DAT_2c49c8c0,DAT_2c49c8bc,DAT_2c49c8b8,DAT_2c49c8b4,*pbVar2,*puVar4,local_1f,
            local_1e,*(undefined4 *)(iVar1 + 0x34),*puVar3,cVar6 + cVar5);
    }
    iVar7 = 0;
  }
  if ((*DAT_2c49c8a4 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar7,(int)((ulonglong)uVar10 >> 0x20),*DAT_2c49c8a4 ^ local_1c,0);
}

