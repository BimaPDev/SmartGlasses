/* FUN_100d1894 @ 0x100d1894 */

byte FUN_100d1894(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  
  if (*(int *)(*param_1 + 0xbc) == 0) {
    uVar1 = FUN_100d32ac(*param_1 + 0x90);
    FUN_100a5b78(DAT_100d19f0 | (DAT_100d19e8 - DAT_100d19ec) * 0x20 & 0xff00U,
                 PTR_s_bt_smp_distribute_keys_100d19f8,PTR_s_No_keys_space_for__s_100d19f4,uVar1);
    return 8;
  }
  iVar2 = FUN_1013577a(param_1 + 0x35,5);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x6e) & 1) == 0) {
      return *(byte *)(param_1 + 0x6e) & 1;
    }
    iVar10 = *(int *)(*param_1 + 0xbc);
    iVar2 = FUN_100c9b88(local_3c,0x1a);
    if (iVar2 == 0) {
      iVar2 = FUN_10135838(param_1,6);
      if (iVar2 == 0) {
        uVar8 = (DAT_100d19e8 - DAT_100d19ec) * 0x20 & 0xff00;
        uVar4 = DAT_100d1a0c;
        puVar7 = DAT_100d1a08;
      }
      else {
        iVar3 = FUN_100c1fe4(iVar2 + 8,0x10);
        FUN_1011ea40(iVar3,local_3c,*(undefined1 *)(iVar10 + 0xc));
        uVar4 = (uint)*(byte *)(iVar10 + 0xc);
        if (uVar4 < 0x10) {
          FUN_1011ea48(uVar4 + iVar3,0,0x10 - uVar4);
        }
        FUN_10135546(param_1,iVar2,0);
        iVar2 = FUN_10135838(param_1,7);
        if (iVar2 != 0) {
          puVar5 = (undefined2 *)FUN_100c1fe4(iVar2 + 8,10);
          *(undefined4 *)(puVar5 + 1) = local_2c;
          *(undefined4 *)(puVar5 + 3) = uStack_28;
          *puVar5 = local_24;
          FUN_10135546(param_1,iVar2,DAT_100d1a18);
          iVar2 = FUN_1013577a(param_1 + 0x35,0xd);
          if (iVar2 == 0) {
            return 0;
          }
          FUN_10137fe4(iVar10,1);
          puVar11 = (undefined4 *)(iVar10 + 0x4a);
          puVar9 = local_3c;
          do {
            uVar1 = *puVar9;
            uVar6 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar11 = uVar1;
            puVar11[1] = uVar6;
            puVar11 = puVar11 + 2;
          } while (puVar9 != &local_2c);
          *(undefined4 *)(iVar10 + 0x40) = local_2c;
          *(undefined4 *)(iVar10 + 0x44) = uStack_28;
          *(undefined2 *)(iVar10 + 0x48) = local_24;
          return 0;
        }
        uVar8 = (DAT_100d19e8 - DAT_100d19ec) * 0x20 & 0xff00;
        uVar4 = DAT_100d1a14;
        puVar7 = DAT_100d1a10;
      }
    }
    else {
      uVar8 = (DAT_100d19e8 - DAT_100d19ec) * 0x20 & 0xff00;
      uVar4 = DAT_100d1a04;
      puVar7 = PTR_s_Unable_to_get_random_bytes_100d1a00;
    }
    FUN_100a5b78(uVar4 | uVar8,PTR_s_legacy_distribute_keys_100d19fc,puVar7);
  }
  return 0;
}

