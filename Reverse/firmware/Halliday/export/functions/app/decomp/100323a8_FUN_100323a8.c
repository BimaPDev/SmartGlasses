/* FUN_100323a8 @ 0x100323a8 */

void FUN_100323a8(uint param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = *(int *)PTR_DAT_100324a8;
  uVar8 = ((int)PTR_DAT_100324ac - (int)PTR_DAT_100324b0) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100324b4 | uVar8,DAT_100324bc,DAT_100324b8,param_1);
  iVar9 = *DAT_100324c0;
  if (iVar9 == 0) {
    if (*(int *)PTR_DAT_100324a8 != iVar7) goto LAB_100323e2;
  }
  else {
    uVar3 = FUN_10126fd2(*(undefined4 *)(iVar9 + 8));
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 0) {
      if (*(int *)PTR_DAT_100324a8 == iVar7) {
        uVar8 = DAT_100324c8 | uVar8;
        uVar2 = DAT_100324cc;
        goto LAB_100323f2;
      }
    }
    else if (param_1 < uVar3) {
      iVar4 = FUN_1003172c(param_1);
      if (iVar4 == 0) {
        iVar9 = *(int *)PTR_DAT_100324a8;
        uVar2 = DAT_100324d8;
        uVar3 = DAT_100324dc;
      }
      else {
        iVar5 = FUN_1011ea10();
        if (iVar5 != 0) {
          FUN_100a5b78(DAT_100324e8 | uVar8,DAT_100324bc,DAT_100324ec,iVar4);
          puVar6 = PTR_DAT_100324a8;
          *(char *)(iVar9 + 0x15c) = (char)param_1;
          if (*(int *)puVar6 != iVar7) goto LAB_100323e2;
          iVar7 = *(int *)PTR_DAT_10032370;
          uVar8 = ((int)PTR_DAT_10032374 - (int)PTR_DAT_10032378) * 0x20 & 0xff00;
          if (iVar4 == 0) {
            iVar9 = *(int *)PTR_DAT_10032370;
            puVar6 = PTR_s_name_buf_is_NULL_in_prompter_ent_1003237c;
            uVar3 = DAT_10032384;
joined_r0x100322e2:
            if (iVar9 == iVar7) goto LAB_100322b0;
          }
          else {
            iVar9 = FUN_1011ea10();
            if (iVar9 == 0) {
              iVar9 = *(int *)PTR_DAT_10032370;
              puVar6 = DAT_10032388;
              uVar3 = DAT_1003238c;
              goto joined_r0x100322e2;
            }
            iVar9 = *DAT_10032390;
            if (iVar9 == 0) {
              iVar9 = *(int *)PTR_DAT_10032370;
              puVar6 = DAT_10032394;
              uVar3 = DAT_10032398;
              goto joined_r0x100322e2;
            }
            FUN_100a5b78(DAT_1003239c | uVar8,PTR_s_prompter_enter_detail_view_10032380,DAT_100323a0
                         ,iVar4);
            uVar2 = FUN_1011ea48(iVar9 + 0x170,0,0x100);
            FUN_1011e9f0(uVar2,iVar4);
            uVar1 = FUN_1011ea10(iVar4);
            FUN_10047ff4(2,iVar4,uVar1);
            FUN_100338b4();
            FUN_10031eec();
            FUN_10033204(0);
            FUN_10124c20(*(undefined4 *)(iVar9 + 0xc),1);
            FUN_10124cea(*(undefined4 *)(iVar9 + 4),1);
            FUN_1002eefc(*(undefined4 *)(iVar9 + 0xc));
            uVar2 = FUN_10087308();
            FUN_1012458c(uVar2,1);
            (**(code **)(DAT_100323a4 + 0x10))();
            FUN_10092f04();
            FUN_10086bac();
            if (*(int *)PTR_DAT_10032370 == iVar7) {
              FUN_10125af4();
              return;
            }
          }
          FUN_1013cdc0();
          uVar3 = DAT_10032384;
          puVar6 = PTR_s_name_buf_is_NULL_in_prompter_ent_1003237c;
LAB_100322b0:
          FUN_100a5b78(uVar3 | uVar8,PTR_s_prompter_enter_detail_view_10032380,puVar6);
          return;
        }
        iVar9 = *(int *)PTR_DAT_100324a8;
        uVar2 = DAT_100324e0;
        uVar3 = DAT_100324e4;
      }
      if (iVar9 == iVar7) {
        FUN_100a5b78(uVar3 | uVar8,DAT_100324bc,uVar2,param_1);
        return;
      }
    }
    else {
      FUN_100a5b78(DAT_100324d0 | uVar8,DAT_100324bc,DAT_100324d4,param_1,uVar3);
      if (*(int *)PTR_DAT_100324a8 == iVar7) {
        return;
      }
    }
LAB_100323e2:
    FUN_1013cdc0();
  }
  uVar8 = uVar8 | 0x2e80011;
  uVar2 = DAT_100324c4;
LAB_100323f2:
  FUN_100a5b78(uVar8,DAT_100324bc,uVar2);
  return;
}

