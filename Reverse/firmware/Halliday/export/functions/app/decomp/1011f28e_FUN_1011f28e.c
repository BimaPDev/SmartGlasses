/* FUN_1011f28e @ 0x1011f28e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1011f28e(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,undefined4 param_6,
            uint param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0 && param_3 < 0x2000000) {
    param_4 = param_4 + param_8 + (uint)CARRY4(param_3,param_7);
    bVar5 = param_4 == 0;
    if (param_4 == 0) {
      bVar5 = param_3 + param_7 < 0x2000001;
    }
    if (bVar5) {
      (*_DAT_00007070)(param_5,param_3 + 0x12000000,param_7);
      return 0;
    }
    uVar3 = 0x2000000 - param_3;
    (*_DAT_00007070)(param_5,param_3 + 0x12000000,uVar3);
    param_5 = param_5 + uVar3;
    bVar5 = param_7 < uVar3;
    param_7 = param_7 - uVar3;
    param_3 = 0x2000000;
    param_8 = param_8 - (uint)bVar5;
  }
  for (; param_7 != 0 || param_8 != 0; param_7 = param_7 - uVar3) {
    bVar5 = param_8 == 0;
    if (param_8 == 0) {
      bVar5 = param_7 < 0x8000;
    }
    iVar4 = param_8;
    uVar3 = param_7;
    if (!bVar5) {
      iVar4 = 0;
      uVar3 = 0x8000;
    }
    uVar1 = FUN_1006ed34(0);
    (**(code **)(_DAT_000001a4 + 0x14))(uVar2,param_3,param_5,uVar3);
    bVar5 = (bool)isCurrentModePrivileged();
    if (bVar5) {
      setBasePriority(uVar1);
    }
    InstructionSynchronizationBarrier(0xf);
    param_3 = param_3 + uVar3;
    param_5 = param_5 + uVar3;
    param_8 = (param_8 - iVar4) - (uint)(param_7 < uVar3);
  }
  return 0;
}

