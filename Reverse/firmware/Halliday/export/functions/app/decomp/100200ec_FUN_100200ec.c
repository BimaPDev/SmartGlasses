/* FUN_100200ec @ 0x100200ec */

void FUN_100200ec(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r5;
  int iVar7;
  uint uVar8;
  
  iVar7 = DAT_100201b0;
  iVar4 = *DAT_100201ac;
  uVar6 = param_1;
  if (param_1 < 0x31) {
    uVar2 = *(uint *)(DAT_100201b0 + 4);
    if (param_1 == uVar2) {
      iVar5 = 0;
    }
    else if (param_1 == *(uint *)(DAT_100201b0 + 8)) {
      iVar5 = 1;
    }
    else {
      if (param_1 != *(uint *)(DAT_100201b0 + 0xc)) goto LAB_10020146;
      iVar5 = 2;
    }
    uVar1 = *(undefined4 *)(DAT_100201b0 + iVar5 * 4 + 4);
    puVar3 = (uint *)(DAT_100201b0 + (iVar5 + 1) * 4);
    for (; iVar5 != 2; iVar5 = iVar5 + 1) {
      param_1 = puVar3[1];
      *puVar3 = param_1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(iVar7 + 0xc) = uVar1;
    uVar6 = param_1;
    while( true ) {
      uVar1 = 1;
LAB_10020138:
      if (*DAT_100201ac == iVar4) break;
      param_1 = FUN_1013cdc0(uVar1);
      uVar2 = extraout_r2;
LAB_10020146:
      uVar8 = DAT_100201c4 | ((int)PTR_DAT_100201b8 - (int)PTR_DAT_100201b4) * 0x20 & 0xff00U;
      FUN_100a5b78(uVar8,PTR_s_translate_target_language_update_100201c0,DAT_100201c8,0,uVar2,
                   param_1,param_3);
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 8);
      FUN_100a5b78(uVar8,PTR_s_translate_target_language_update_100201c0,DAT_100201c8,1,
                   *(undefined4 *)(iVar7 + 8),uVar6);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0xc);
      *(uint *)(iVar7 + 0xc) = uVar6;
    }
    return;
  }
  FUN_100a5b78(((int)PTR_DAT_100201b8 - (int)PTR_DAT_100201b4) * 0x20 & 0xff00U | 0x18a0031,
               PTR_s_translate_target_language_update_100201c0,
               PTR_s_translate_target_language_update_100201bc,param_1,param_1,param_2,param_3);
  uVar1 = 0;
  iVar7 = unaff_r5;
  goto LAB_10020138;
}

