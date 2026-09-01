/* FUN_100a1024 @ 0x100a1024 */

int FUN_100a1024(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 local_30 [4];
  undefined4 *puVar6;
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  iVar1 = thunk_FUN_1009f30c(0x20,PTR_s_fstream_init_100a11c0);
  if (iVar1 == 0) {
    FUN_100a5b78(((int)PTR_DAT_100a11c8 - (int)PTR_DAT_100a11c4) * 0x20 & 0xff00U | 0x1580011,
                 PTR_s_fstream_init_100a11d0,PTR_s_no_memory_100a11cc);
    return -0xc;
  }
  iVar2 = FUN_1011ea10(param_2);
  iVar2 = thunk_FUN_1009f30c(iVar2 + 1,PTR_s_file_name_has_cluster_100a11d4);
  if (iVar2 != 0) {
    FUN_1011e9f0(iVar2,param_2);
    iVar3 = FUN_1013d44e(iVar2,PTR_s_bycluster__100a11d8);
    if (iVar3 == 0) {
LAB_100a11b6:
      iVar4 = 0;
      uVar8 = 0;
      iVar3 = iVar4;
    }
    else {
      iVar4 = FUN_1011ea10(PTR_s_bycluster__100a11d8);
      puVar11 = (undefined4 *)(iVar3 + iVar4);
      puVar6 = puVar11;
      if (*(char *)(iVar3 + iVar4) == '/') {
        puVar6 = (undefined4 *)((int)puVar11 + 1);
      }
      puVar5 = (undefined1 *)FUN_1011ea00(puVar6,0x2f);
      if (puVar5 == (undefined1 *)0x0) goto LAB_100a11b6;
      *puVar5 = 0;
      uVar7 = FUN_1011ea10(puVar11);
      if (uVar7 < 0x11) {
        uVar8 = FUN_1011ea10(puVar11);
        FUN_1013d03e(local_30,puVar11,uVar8,0x10);
      }
      else {
        puVar12 = puVar11 + 4;
        puVar6 = local_30;
        do {
          uVar8 = *puVar11;
          uVar10 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar6 = uVar8;
          puVar6[1] = uVar10;
          puVar6 = puVar6 + 2;
        } while (puVar11 != puVar12);
      }
      iVar3 = FUN_1013d44e(puVar5 + 1,PTR_s_cluster__1014c7b4_1_100a11dc);
      if (iVar3 == 0) goto LAB_100a11b6;
      iVar4 = FUN_1011ea10(PTR_s_cluster__1014c7b4_1_100a11dc);
      puVar5 = (undefined1 *)FUN_1011ea00(iVar3 + iVar4,0x2f);
      if (puVar5 == (undefined1 *)0x0) goto LAB_100a11b6;
      *puVar5 = 0;
      puVar9 = (undefined1 *)FUN_1011ea00(puVar5 + 1,0x2f);
      if (puVar9 == (undefined1 *)0x0) goto LAB_100a11b6;
      *puVar9 = 0;
      uVar8 = FUN_1013d036(iVar3 + iVar4);
      iVar4 = FUN_1013d036(puVar5 + 1);
      iVar3 = 1;
    }
    FUN_1012d1f4(iVar2);
    if (iVar3 != 0) {
      iVar2 = FUN_1006bb68(iVar1,local_30,uVar8,iVar4);
      if (iVar2 == 0) goto LAB_100a11a8;
      iVar3 = (int)PTR_DAT_100a11c8 - (int)PTR_DAT_100a11c4;
      uVar7 = DAT_100a11e8;
      goto LAB_100a119a;
    }
  }
  iVar2 = FUN_1006ba84(iVar1,param_2,0x13);
  if (iVar2 == 0) {
LAB_100a11a8:
    FUN_1013c856(iVar1 + 0xc);
    *(int *)(param_1 + 0x54) = iVar1;
    return 0;
  }
  iVar3 = (int)PTR_DAT_100a11c8 - (int)PTR_DAT_100a11c4;
  uVar7 = DAT_100a11e4;
LAB_100a119a:
  FUN_100a5b78(uVar7 | iVar3 * 0x20 & 0xff00U,PTR_s_fstream_init_100a11d0,
               PTR_s_open_Failed__d_100a11e0,iVar2);
  FUN_1012d1f4(iVar1);
  return iVar2;
}

