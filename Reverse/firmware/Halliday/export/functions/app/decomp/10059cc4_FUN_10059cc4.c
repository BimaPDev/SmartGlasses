/* FUN_10059cc4 @ 0x10059cc4 */

void FUN_10059cc4(int param_1,int *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  code *pcVar8;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 uVar9;
  undefined1 local_2d;
  undefined4 local_2c [2];
  
  pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x44);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)();
  }
  pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x34);
  if ((pcVar8 == (code *)0x0) || (iVar5 = (*pcVar8)(param_1), iVar5 != 0)) {
    puVar4 = PTR_s_ASSERTION_FAIL___s_____s__d_10059e0c;
    puVar3 = PTR_s_err____0_10059e08;
    puVar2 = PTR_s_WEST_TOPDIR_zephyr_subsys_shell__10059e04;
    bVar1 = false;
    do {
      iVar5 = FUN_1011a0c8(param_2[3],local_2c,*(undefined4 *)(param_2[3] + 0x10));
      if (iVar5 == 0) {
        pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x18);
        if (pcVar8 == (code *)0x0) {
          iVar6 = -0x58;
        }
        else {
          iVar6 = (*pcVar8)(param_1,&local_2d,1);
        }
        if (iVar6 != 1) goto LAB_10059d46;
        FUN_100577f4(param_1,local_2d);
      }
      else {
        pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x18);
        if (pcVar8 == (code *)0x0) {
          iVar6 = -0x58;
        }
        else {
          iVar6 = (*pcVar8)(param_1,local_2c[0],iVar5);
        }
        if (iVar6 != 0) {
          bVar1 = true;
          FUN_1011b130(param_1,local_2c[0]);
        }
        uVar9 = FUN_1011a124(param_2[3],iVar6);
        if ((int)uVar9 != 0) {
          FUN_10119dc2(puVar4,puVar3,puVar2,0x5f,uVar9);
          FUN_1011a1f0(puVar2,0x5f,extraout_r2,extraout_r3);
        }
LAB_10059d46:
        if (iVar6 == 0) break;
      }
    } while (iVar5 == iVar6);
    if (bVar1) {
      (**(code **)(*param_2 + 4))(0,*(undefined4 *)(*param_2 + 8));
    }
  }
  pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x24);
  if ((pcVar8 == (code *)0x0) || (iVar5 = (*pcVar8)(param_1), iVar5 != 0)) {
    iVar5 = FUN_1011a160(param_2[2],local_2c,*(undefined4 *)(param_2[2] + 0x10));
    if (iVar5 == 0) {
      FUN_1011b0a8(param_1);
      *(undefined4 *)(*param_2 + 0xc) = 0;
    }
    else {
      pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x14);
      if (pcVar8 == (code *)0x0) {
        uVar7 = 0xffffffa8;
      }
      else {
        uVar7 = (*pcVar8)(param_1,local_2c[0],iVar5);
      }
      uVar9 = FUN_1011a1b6(param_2[2],uVar7);
      if ((int)uVar9 != 0) {
        FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10059e0c,PTR_s_err____0_10059e08,
                     PTR_s_WEST_TOPDIR_zephyr_subsys_shell__10059e04,0x9e,uVar9);
        FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_subsys_shell__10059e04,0x9e,extraout_r2_00,
                     extraout_r3_00);
      }
    }
    (**(code **)(*param_2 + 4))(1,*(undefined4 *)(*param_2 + 8));
  }
  return;
}

