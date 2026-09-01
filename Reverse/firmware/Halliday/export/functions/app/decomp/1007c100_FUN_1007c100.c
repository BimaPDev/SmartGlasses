/* FUN_1007c100 @ 0x1007c100 */

void FUN_1007c100(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_1007c148;
  *(uint *)(DAT_1007c148 + 0x1d0) =
       (*(uint *)(DAT_1007c148 + 0x1d0) ^ param_2) & param_1 ^ *(uint *)(DAT_1007c148 + 0x1d0);
  FUN_10056770();
  puVar2 = PTR_DAT_1007c14c;
  uVar4 = *(undefined4 *)(iVar1 + 0x1d0);
  uVar3 = FUN_10056788();
  FUN_100a5b78(((int)puVar2 - (int)PTR_DAT_1007c150) * 0x20 & 0xff00U | 0x220032,
               PTR_s_pmu_chg_ctl_reg_write_1007c158,PTR_s_bak_PMU_CHG_CTL_0x_x__rb_PMU_CHG_1007c154,
               uVar4,uVar3,param_2,param_3);
  return;
}

