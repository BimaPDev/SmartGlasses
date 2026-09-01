/* FUN_1003464c @ 0x1003464c */

void FUN_1003464c(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint *unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  iVar5 = *(int *)PTR_DAT_1003473c;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar4 = 0xffffffff;
    goto LAB_1003471e;
  }
  unaff_r4 = ((int)PTR_DAT_10034744 - (int)PTR_DAT_10034740) * 0x20 & 0xff00;
  FUN_100a5b78(unaff_r4 | 0x470032,PTR_s_update_prompter_list_1003474c,
               PTR_s_update_prompter_list_id___s__tit_10034748,param_1,param_2,param_2,param_3);
  FUN_1011ea48(DAT_10034750,0,0x2afc);
  unaff_r6 = 0;
  FUN_10033ef8();
  unaff_r10 = 0x6e;
  unaff_r8 = DAT_1003475c;
  unaff_r9 = DAT_10034750;
  do {
    uVar2 = *unaff_r8;
    if (unaff_r6 < uVar2) {
      iVar3 = FUN_1011ea18(unaff_r10 * unaff_r6 + unaff_r9,param_1);
      if (iVar3 == 0) {
        FUN_100a5b78(unaff_r4 | 0x520031,PTR_s_update_prompter_list_1003474c,DAT_10034758);
        goto LAB_10034718;
      }
    }
    else {
      if (uVar2 < 100) {
        FUN_1011e9f8(uVar2 * 0x6e + unaff_r9,param_1,10);
        uVar2 = *unaff_r8;
        *(undefined1 *)(unaff_r9 + uVar2 * 0x6e + 9) = 0;
        FUN_1011e9f8(uVar2 * 0x6e + 10 + unaff_r9,param_2,100);
        uVar4 = DAT_10034754;
        puVar1 = PTR_s_update_prompter_list_1003474c;
        uVar2 = *unaff_r8;
        unaff_r6 = uVar2 * 0x6e + unaff_r9;
        *(undefined1 *)(unaff_r6 + 0x6d) = 0;
        *unaff_r8 = uVar2 + 1;
        FUN_100a5b78(unaff_r4 | 0x600031,puVar1,uVar4);
        param_1 = 0;
      }
LAB_10034718:
      FUN_10034424();
      uVar4 = 0;
LAB_1003471e:
      if (*(int *)PTR_DAT_1003473c == iVar5) {
        return;
      }
      FUN_1013cdc0(uVar4);
    }
    unaff_r6 = unaff_r6 + 1;
  } while( true );
}

