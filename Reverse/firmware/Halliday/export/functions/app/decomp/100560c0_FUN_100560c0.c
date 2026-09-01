/* FUN_100560c0 @ 0x100560c0 */

uint FUN_100560c0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = FUN_1005608c();
  iVar4 = *(int *)(iVar2 + 0x48);
  iVar3 = *(int *)(iVar2 + 0x4c);
  if (param_1 == (byte *)0x0) {
    return 0xffffffea;
  }
  uVar5 = (uint)*param_1;
  if (uVar5 - 1 < 6) {
    iVar6 = 0;
    while ((uVar7 = (uint)*(byte *)(iVar2 + iVar6 * 0xc), uVar7 != 0 && (uVar5 != uVar7))) {
      iVar6 = iVar6 + 1;
      if (iVar6 == 6) {
        FUN_100a5b78(((int)PTR_DAT_100561a0 - (int)PTR_DAT_1005619c) * 0x20 & 0xff00U | 0xfa0011,
                     PTR_s_soc_pmu_register_notify_100561a4,PTR_s_no_space_for_dev_0x_x_100561ac,
                     uVar5,param_4);
        return 0xfffffff4;
      }
    }
    *(byte *)(iVar2 + iVar6 * 0xc) = *param_1;
    iVar6 = iVar2 + iVar6 * 0xc;
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_1 + 4);
    bVar1 = *param_1;
    if (bVar1 == 3) {
      bVar1 = *(byte *)(iVar2 + 0x50);
      if ((bVar1 & 1) == 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 1;
        *(uint *)(iVar4 + 0x40) = *(uint *)(iVar4 + 0x40) | 1;
        return bVar1 & 1;
      }
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 3;
      uVar5 = *(uint *)(iVar4 + 0x40) | 3;
    }
    else if (bVar1 == 2) {
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x1000;
      uVar5 = *(uint *)(iVar4 + 0x40) | 0x1000;
    }
    else {
      if (bVar1 != 4) {
        return 0;
      }
      uVar5 = *(uint *)(iVar4 + 0x40) | 0x4000;
    }
    *(uint *)(iVar4 + 0x40) = uVar5;
    return 0;
  }
  FUN_100a5b78(((int)PTR_DAT_100561a0 - (int)PTR_DAT_1005619c) * 0x20 & 0xff00U | 0xe80011,
               PTR_s_soc_pmu_register_notify_100561a4,PTR_s_Invalid_monitor_dev__d_100561a8,uVar5,
               param_4);
  return 0xffffffea;
}

