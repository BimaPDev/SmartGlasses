/* FUN_100275d0 @ 0x100275d0 */

uint FUN_100275d0(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined1 auStack_ac [60];
  undefined4 local_70;
  undefined1 auStack_6c [88];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_10027740;
  local_b0 = 0;
  FUN_1011ea48(auStack_ac,0,0x3c,0);
  puVar2 = PTR_DAT_10027744;
  local_70 = 0;
  FUN_1011ea48(auStack_6c,0,0x56);
  uVar3 = ((int)puVar2 - (int)PTR_DAT_10027748) * 0x20 & 0xff00;
  local_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  FUN_100a5b78(uVar3 | 0x160031,PTR_s_Records_fileCount_10027750,
               PTR_s_Records_fileCount___LINE____d_1002774c,0x16);
  iVar1 = FUN_1006ba84(&local_bc,PTR_s__NAND__SYSTEM_CALL_records_lib_10027754,3);
  if (iVar1 < 0) {
    FUN_100a5b78(uVar3 | 0x190032,PTR_s_Records_fileCount_10027750,
                 PTR_s_fs_open__s_error_ret__d_10027758,
                 PTR_s__NAND__SYSTEM_CALL_records_lib_10027754,iVar1);
    FUN_1006c1dc(PTR_s__NAND__SYSTEM_CALL_1002775c);
    iVar1 = FUN_1006ba84(&local_bc,PTR_s__NAND__SYSTEM_CALL_records_lib_10027754,0x13);
    if (iVar1 < 0) {
      uVar3 = uVar3 | 0x1d0000;
      puVar2 = PTR_s_fs_open__s_error_ret__d_10027758;
      goto LAB_1002765e;
    }
    FUN_1006bd24(&local_bc,0,0);
    FUN_1011ea48(&local_b0,0,0x40);
    FUN_1011ea48(&local_70,0,0x5a);
    iVar1 = FUN_1006bcd4(&local_bc,&local_b0,0x40);
    if (iVar1 < 0) {
      uVar3 = uVar3 | 0x260000;
      puVar2 = PTR_s_fs_write_error_ret__d_10027760;
    }
    else {
      cVar4 = '\x1e';
      do {
        iVar1 = FUN_1006bcd4(&local_bc,&local_70,0x5a);
        if (iVar1 < 0) {
          uVar3 = uVar3 | 0x2d0000;
          puVar2 = PTR_s_fs_write_error_ret__d_10027760;
          goto LAB_1002769c;
        }
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
      iVar1 = FUN_1006be14(&local_bc);
      if (-1 < iVar1) goto LAB_100276e4;
      uVar3 = uVar3 | 0x350000;
      puVar2 = PTR_s_fs_sync_error_ret__d_10027764;
    }
LAB_1002769c:
    FUN_100a5b78(uVar3 | 0x11,PTR_s_Records_fileCount_10027750,puVar2);
  }
  else {
LAB_100276e4:
    FUN_1006bd24(&local_bc,0);
    iVar1 = FUN_1006bc84(&local_bc,&local_b0,0x40);
    if (iVar1 == 0x40) {
      uVar5 = local_b0 & 0xff;
      FUN_100a5b78(uVar3 | 0x420031,PTR_s_Records_fileCount_10027750,
                   PTR_s_Records_fileCount_____d_1002776c,uVar5);
      if (0x1e < uVar5) {
        uVar5 = 0;
      }
      FUN_1006bc30(&local_bc);
      goto LAB_1002772c;
    }
    uVar3 = uVar3 | 0x3d0000;
    puVar2 = PTR_s_fs_read__s_error_ret__d_10027768;
LAB_1002765e:
    FUN_100a5b78(uVar3 | 0x12,PTR_s_Records_fileCount_10027750,puVar2,
                 PTR_s__NAND__SYSTEM_CALL_records_lib_10027754,iVar1);
  }
  FUN_1006bc30(&local_bc);
  uVar5 = 0;
LAB_1002772c:
  if (*(int *)PTR_DAT_10027740 != local_14) {
    FUN_1013cdc0();
  }
  return uVar5;
}

