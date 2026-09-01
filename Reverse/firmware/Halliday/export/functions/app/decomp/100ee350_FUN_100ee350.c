/* FUN_100ee350 @ 0x100ee350 */

int FUN_100ee350(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined2 param_5,undefined4 param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_1c;
  
  local_1c = 0;
  puVar8 = param_3;
  FUN_100edfc4();
  iVar4 = FUN_100ee058(param_1,param_2,&local_1c);
  if (iVar4 == 0) {
    uVar5 = FUN_100edd8c(local_1c,param_3,param_4,param_6,param_5,param_2,puVar8);
    puVar8 = DAT_100ee3d0;
    if (-1 < (int)uVar5) {
      uVar7 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar7 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar1 = *(ushort *)((int)DAT_100ee3d0 + 0x4a);
      if (uVar1 != uVar5) {
        *(short *)(DAT_100ee3d0 + 0x12) = (short)uVar5;
        *puVar8 = param_1;
        uVar6 = param_3[1];
        puVar8[1] = *param_3;
        puVar8[2] = uVar6;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      if (uVar1 != uVar5) {
        return 0;
      }
    }
    iVar4 = FUN_101390b4(param_1,param_3);
  }
  return iVar4;
}

