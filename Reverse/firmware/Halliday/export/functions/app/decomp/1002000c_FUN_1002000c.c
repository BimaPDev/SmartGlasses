/* FUN_1002000c @ 0x1002000c */

void FUN_1002000c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r3;
  uint uVar6;
  int unaff_r6;
  int iVar7;
  
  iVar7 = DAT_100200d4;
  iVar3 = *DAT_100200d0;
  if (param_1 < 0x31) {
    uVar4 = *(uint *)(DAT_100200d4 + 0x10);
    if (param_1 == uVar4) {
      iVar5 = 0;
    }
    else if (param_1 == *(uint *)(DAT_100200d4 + 0x14)) {
      iVar5 = 1;
    }
    else {
      if (param_1 != *(uint *)(DAT_100200d4 + 0x18)) goto LAB_10020066;
      iVar5 = 2;
    }
    uVar1 = *(undefined4 *)(DAT_100200d4 + (iVar5 + 4) * 4);
    puVar2 = (undefined4 *)(DAT_100200d4 + (iVar5 + 4) * 4);
    for (; iVar5 != 2; iVar5 = iVar5 + 1) {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(iVar7 + 0x18) = uVar1;
    while( true ) {
      uVar1 = 1;
LAB_10020058:
      if (*DAT_100200d0 == iVar3) break;
      FUN_1013cdc0(uVar1);
      uVar4 = extraout_r3;
LAB_10020066:
      uVar6 = ((int)PTR_DAT_100200dc - (int)PTR_DAT_100200d8) * 0x20 & 0xff00U | 0x17c0033;
      FUN_100a5b78(uVar6,PTR_s_translate_original_language_upda_100200e4,
                   PTR_s_translate_original_language__d____100200e8,0,uVar4,param_1,param_3);
      *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 0x14);
      FUN_100a5b78(uVar6,PTR_s_translate_original_language_upda_100200e4,
                   PTR_s_translate_original_language__d____100200e8,1,*(undefined4 *)(iVar7 + 0x14),
                   param_1);
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar7 + 0x18);
      *(uint *)(iVar7 + 0x18) = param_1;
    }
    return;
  }
  FUN_100a5b78(((int)PTR_DAT_100200dc - (int)PTR_DAT_100200d8) * 0x20 & 0xff00U | 0x15e0031,
               PTR_s_translate_original_language_upda_100200e4,
               PTR_s_translate_original_language_upda_100200e0,param_1,param_1,param_2,param_3);
  uVar1 = 0;
  iVar7 = unaff_r6;
  goto LAB_10020058;
}

