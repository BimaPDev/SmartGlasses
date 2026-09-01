/* FUN_10078f18 @ 0x10078f18 */

undefined4 FUN_10078f18(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_22c [4];
  undefined4 local_21c;
  int local_218;
  int local_214;
  
  FUN_1006bd24(param_1,0);
  uVar1 = FUN_1006bc84(param_1,local_22c,0x21c);
  puVar2 = DAT_10078f8c;
  if ((((uVar1 < 0x21c) || (puVar2 = PTR_s_dsp_magic_error_10078f94, local_22c[0] != DAT_10078f90))
      || ((local_218 != 0 &&
          (iVar4 = FUN_10078d08(param_1,local_218,1), puVar2 = PTR_s_failed_to_load_code_10078f98,
          iVar4 != 0)))) ||
     ((local_214 != 0 &&
      (iVar4 = FUN_10078d08(param_1,local_214,0), puVar2 = PTR_s_failed_to_load_data_10078f9c,
      iVar4 != 0)))) {
    FUN_10119dc2(puVar2);
    uVar3 = 0xffffffea;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    *param_2 = local_21c;
  }
  return uVar3;
}

