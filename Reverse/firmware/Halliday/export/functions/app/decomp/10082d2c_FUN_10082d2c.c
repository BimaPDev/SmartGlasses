/* FUN_10082d2c @ 0x10082d2c */

undefined4 FUN_10082d2c(undefined4 *param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint local_24 [2];
  
  puVar7 = (uint *)*param_1;
  FUN_100a5b78(DAT_10082e44 | (DAT_10082e40 - DAT_10082e3c) * 0x20 & 0xff00U,DAT_10082e48,
               DAT_10082e4c,*(ushort *)(param_2 + 6) + 0x76c,param_2[4] + 1,param_2[3],param_2[2],
               param_2[1],*param_2,*(undefined2 *)(param_2 + 8));
  uVar8 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar8 = getBasePriority();
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if ((bVar3) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  lVar9 = FUN_100827c8();
  puVar4 = DAT_10082e54;
  uVar6 = *DAT_10082e50 + 0x96;
  *(longlong *)DAT_10082e50 =
       lVar9 + CONCAT44(((DAT_10082e50[1] + (uint)(0xffffff69 < *DAT_10082e50)) - DAT_10082e54[1]) -
                        (uint)(uVar6 < *DAT_10082e54),uVar6 - *DAT_10082e54);
  FUN_101221f0(param_2,local_24);
  uVar1 = *(ushort *)(param_2 + 8);
  *(ulonglong *)puVar4 = (ulonglong)local_24[0] * 1000 + (ulonglong)*(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_2 + 6);
  *puVar7 = *puVar7 & 0xffffffef;
  puVar7[7] = (param_2[4] + 1) * 0x100 | ((uint)uVar2 % 100) * 0x10000 | (uint)param_2[3];
  puVar7[6] = (uint)param_2[1] << 8 | (uint)param_2[2] << 0x10 | (uint)*param_2;
  puVar7[5] = uVar1 / 10;
  *puVar7 = *puVar7 | 0x10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar5 = FUN_10057234();
  if (iVar5 == 0) {
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 4;
    uVar8 = thunk_FUN_10115958();
    param_1[8] = uVar8;
  }
  else {
    FUN_1013d9c0(40000);
  }
  return 0;
}

