/* FUN_2c5e6d80 @ 0x2c5e6d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e6d80(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  
  FUN_2c62a470();
  puVar2 = _LAB_2c5e6ec8;
  uVar1 = _DAT_2c5e6ec4;
  FUN_2c5fee6c();
  uVar7 = FUN_2c606a10();
  *puVar2 = uVar7;
  FUN_2c603a04(uVar7,0,uVar1);
  puVar3 = PTR_LAB_2c5f6718_1_2c5e6ecc;
  FUN_2c6072bc(*puVar2,4,0x10,0xffffff44);
  FUN_2c607048(*puVar2,0x144,0x27d1);
  puVar4 = PTR_LAB_2c5f6500_1_2c5e6ed0;
  FUN_2c620fa4(0x3f7,0);
  FUN_2c620f0c(0x3f8,puVar3,0);
  FUN_2c620f0c(0x3f9,puVar3,0);
  FUN_2c620f0c(0x3f6,puVar4,0);
  FUN_2c620f0c(0x138c,puVar4,0);
  FUN_2c620f0c(0x138d,PTR_LAB_2c5f66ac_1_2c5e6ed4,0);
  FUN_2c620f0c(0x3fb,PTR_LAB_2c5f6564_1_2c5e6ed8,0);
  func_0x2c5ff398(*puVar2);
  FUN_2c602454(*puVar2,_LAB_2c5e6edc,0xd,0);
  puVar5 = _LAB_2c5e6ee0;
  uVar7 = FUN_2c6313f4(*puVar2);
  *puVar5 = uVar7;
  FUN_2c603a04(uVar7,0,uVar1);
  FUN_2c63140c(*puVar5,_LAB_2c5e6ee4);
  FUN_2c6072bc(*puVar5,5,0);
  lv_obj_add_flag_invalidate(*puVar5,1);
  uVar7 = FUN_2c606a10(*puVar2);
  FUN_2c603a04(uVar7,0,uVar1);
  piVar6 = _LAB_2c5e6ee8;
  FUN_2c627e28(uVar7,9);
  FUN_2c607048(uVar7,0x144,0x27d1);
  FUN_2c5e6b1c(uVar7);
  (**(code **)(piVar6[7] + 0x18))(uVar7);
  (**(code **)(piVar6[6] + 0x18))(uVar7);
  (**(code **)(piVar6[5] + 0x18))(uVar7);
  (**(code **)(piVar6[4] + 0x18))(uVar7);
  (**(code **)(piVar6[3] + 0x18))(uVar7);
  (**(code **)(piVar6[2] + 0x18))(uVar7);
  (**(code **)(piVar6[1] + 0x18))(uVar7);
                    /* WARNING: Could not recover jumptable at 0x2c5e6ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x18))(uVar7);
  return;
}

