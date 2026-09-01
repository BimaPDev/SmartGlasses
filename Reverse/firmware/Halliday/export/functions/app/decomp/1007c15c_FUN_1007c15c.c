/* FUN_1007c15c @ 0x1007c15c */

void FUN_1007c15c(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_2;
  uVar1 = FUN_1011a99e();
  puVar3 = PTR_DAT_1007c1d4;
  if (param_2 == 0) {
    puVar3 = PTR_LAB_1007c1d8;
  }
  puVar4 = PTR_LAB_1007c1d8;
  if (param_1 != 0) {
    puVar4 = PTR_DAT_1007c1d4;
  }
  FUN_100a5b78(((int)PTR_DAT_1007c1e0 - (int)PTR_DAT_1007c1dc) * 0x20 & 0xff00U | 0x4b0032,
               PTR_s_pmuvdd_set_vd12_vc18_mode_1007c1e8,PTR_s_vd12_sw__s__vc18_sw__s__1007c1e4,
               puVar4,puVar3,iVar2,param_3);
  if (param_1 == 0) {
    iVar2 = FUN_10056630();
    FUN_10056678(iVar2 + 100);
    uVar1 = uVar1 & 0xfffdffff;
  }
  else {
    iVar2 = FUN_10056630();
    FUN_10056678(iVar2 + 0x32);
    uVar1 = uVar1 | 0x20000;
  }
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffbffff;
  }
  else {
    uVar1 = uVar1 | 0x40000;
  }
  FUN_1011a98e(0x60000,uVar1);
  return;
}

