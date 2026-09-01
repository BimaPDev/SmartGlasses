/* FUN_1007e74c @ 0x1007e74c */

undefined4 FUN_1007e74c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  
  iVar3 = FUN_101203de();
  if (iVar3 != 0) {
    if ((3 < *(byte *)(*param_1 + 0x10)) &&
       (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
      uVar4 = FUN_101203de(param_1);
      (*pcVar7)(PTR_s_Debug___s__d_spinand_interanl_re_1007e7fc,PTR_s_init_pdl_1007e7f8,0x24a,uVar4,
                param_4);
    }
  }
  FUN_10120526(param_1);
  FUN_1007e054(param_1);
  if ((3 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
    uVar4 = FUN_101203a2(param_1);
    (*pcVar7)(PTR_s_Debug___s__d_spinand_interanl_re_1007e800,PTR_s_init_pdl_1007e7f8,0x24f,uVar4);
  }
  FUN_1012041a(param_1,0);
  puVar2 = PTR_s_Warn____s__d_spinand_interanl_re_1007e804;
  puVar1 = PTR_s_init_pdl_1007e7f8;
  while( true ) {
    iVar3 = FUN_101203de(param_1);
    iVar6 = *param_1;
    if (iVar3 == 0) break;
    if ((1 < *(byte *)(iVar6 + 0x10)) && (pcVar7 = *(code **)(iVar6 + 0xc), pcVar7 != (code *)0x0))
    {
      uVar4 = FUN_101203de(param_1);
      (*pcVar7)(puVar2,puVar1,0x254,uVar4);
    }
  }
  if (*(char *)(iVar6 + 4) == '\x04') {
    uVar5 = FUN_10120448(param_1,0xb0);
    if (-1 < (int)(uVar5 << 0x1f)) {
      FUN_10120486(param_1,0xb0,uVar5 & 0xff | 1);
    }
  }
  return 0;
}

