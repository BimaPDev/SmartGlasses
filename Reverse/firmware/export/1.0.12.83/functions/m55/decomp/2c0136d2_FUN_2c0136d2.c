/* FUN_2c0136d2 @ 0x2c0136d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c0136d2(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool in_ZR;
  bool in_CY;
  
  iVar2 = _DAT_2c0137bc;
  if (!in_CY || in_ZR) {
    uVar3 = param_2 & 0x1f;
    if (uVar3 != 0) {
      DataSynchronizationBarrier(0xf);
      *(uint *)(_DAT_2c0137bc + 0x270) = param_2;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
      param_2 = (param_2 + 0x20) - uVar3;
      param_3 = (param_3 + uVar3) - 0x20;
    }
    iVar2 = _DAT_2c0137bc;
    uVar3 = param_3 & 0x1f;
    if (uVar3 != 0) {
      param_3 = param_3 - uVar3;
      uVar6 = param_2 + param_3;
      DataSynchronizationBarrier(0xf);
      iVar5 = (uVar6 & 0x1f) + uVar3 + uVar6;
      do {
        *(uint *)(iVar2 + 0x270) = uVar6;
        uVar6 = uVar6 + 0x20;
      } while (0 < (int)(iVar5 - uVar6));
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
    iVar2 = _DAT_2c0137bc;
    if ((int)param_3 < 1) {
      return 0;
    }
    DataSynchronizationBarrier(0xf);
    iVar5 = param_2 + param_3 + (param_2 & 0x1f);
    do {
      *(uint *)(iVar2 + 0x25c) = param_2;
      param_2 = param_2 + 0x20;
    } while (0 < (int)(iVar5 - param_2));
  }
  else {
    *(undefined4 *)(_DAT_2c0137bc + 0x84) = 0;
    DataSynchronizationBarrier(0xf);
    uVar3 = *(uint *)(iVar2 + 0x80);
    uVar6 = ((uVar3 & 0xfffffff) >> 0xd) << 5;
    do {
      uVar4 = (uVar3 & 0x1fff) >> 3;
      do {
        uVar1 = uVar4 << 0x1e;
        uVar4 = uVar4 - 1;
        *(uint *)(iVar2 + 0x274) = uVar6 & 0x3fe0 | uVar1;
      } while (uVar4 != 0xffffffff);
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0xffffffe0);
  }
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0;
}

