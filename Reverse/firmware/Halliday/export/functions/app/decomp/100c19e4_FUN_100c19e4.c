/* FUN_100c19e4 @ 0x100c19e4 */

undefined4 * FUN_100c19e4(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint local_24;
  
  local_24 = param_2;
  lVar9 = FUN_1013ce5a(param_3,param_4,param_3,param_4,param_1);
  uVar7 = (undefined4)((ulonglong)lVar9 >> 0x20);
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100c1b44,DAT_100c1b40,DAT_100c1b3c,0xfa,lVar9);
    FUN_1011a1f0(DAT_100c1b3c,0xfa,extraout_r2,extraout_r3);
    uVar7 = extraout_r1;
  }
  uVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar8 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(ushort *)(param_1 + 0x1e) == 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar6 = (undefined4 *)FUN_10113f68(param_1,uVar7,param_3,param_4);
    if (puVar6 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else if ((*(ushort *)(param_1 + 0x1e) < *(ushort *)(param_1 + 0x1c)) &&
          (puVar6 = (undefined4 *)FUN_10113f68(param_1,uVar7,0,0), puVar6 != (undefined4 *)0x0)) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x1e);
    *(ushort *)(param_1 + 0x1e) = uVar1 - 1;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar6 = (undefined4 *)
             (((uint)*(ushort *)(param_1 + 0x1c) - (uint)uVar1) * 0x18 + *(int *)(param_1 + 0x28));
    *(char *)((int)puVar6 + 6) = (char)DAT_100c1b4c * (char)(param_1 - DAT_100c1b48 >> 2);
  }
  uVar3 = local_24;
  if (local_24 == 0) {
    puVar6[4] = 0;
  }
  else {
    lVar10 = CONCAT44(param_4,param_3);
    if ((param_3 != 0 || param_4 != 0) &&
       (lVar10 = CONCAT44(param_4,param_3), param_4 != -1 || param_3 != -1)) {
      lVar10 = FUN_10115958();
      lVar10 = lVar9 - lVar10;
      if (lVar10 < 0) {
        lVar10 = 0;
      }
    }
    iVar4 = DAT_100c1b48;
    uVar11 = (**(code **)**(undefined4 **)
                           ((uint)*(byte *)((int)puVar6 + 6) * 0x2c + DAT_100c1b48 + 0x24))
                       (puVar6,&local_24,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
    uVar5 = local_24;
    puVar6[4] = (int)uVar11;
    if ((int)uVar11 == 0) {
      FUN_1013c984((uint)*(byte *)((int)puVar6 + 6) * 0x2c + iVar4,puVar6);
      return (undefined4 *)0x0;
    }
    if (local_24 < uVar3) {
      FUN_10119dc2(DAT_100c1b44,DAT_100c1b50,DAT_100c1b3c,0x15a,uVar11);
      FUN_10119dc2(DAT_100c1b54);
      FUN_1011a1f0(DAT_100c1b3c,0x15a,extraout_r2_00,uVar5);
    }
  }
  *puVar6 = 0;
  *(undefined2 *)(puVar6 + 1) = 1;
  *(short *)((int)puVar6 + 0xe) = (short)local_24;
  FUN_100c198c(puVar6);
  return puVar6;
}

