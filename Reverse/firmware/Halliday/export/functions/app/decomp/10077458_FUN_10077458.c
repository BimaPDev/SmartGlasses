/* FUN_10077458 @ 0x10077458 */

undefined4 FUN_10077458(int param_1,ushort *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  ushort local_28;
  char local_26;
  char cStack_25;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  
  uStack_24 = SUB42(param_2,0);
  uStack_22 = (undefined2)((uint)param_2 >> 0x10);
  local_28 = (ushort)param_1;
  local_26 = (char)((uint)param_1 >> 0x10);
  cStack_25 = (char)((uint)param_1 >> 0x18);
  piVar10 = *(int **)(param_1 + 4);
  uVar2 = *param_2;
  pbVar9 = *(byte **)(param_1 + 0x10);
  uVar8 = (DAT_100775a0 - DAT_1007759c) * 0x20 & 0xff00;
  iVar11 = *piVar10;
  uStack_20 = param_3;
  FUN_100a5b78(DAT_100775a4 | uVar8,DAT_100775ac,DAT_100775a8,uVar2);
  pbVar5 = *(byte **)(param_1 + 0x10);
  iVar7 = **(int **)(param_1 + 4);
  if ((*(uint *)(iVar7 + 0x34) & 0xf0) != 0) {
    *(uint *)(iVar7 + 0x34) = *(uint *)(iVar7 + 0x34) & 0xffffff0f;
  }
  *pbVar5 = *pbVar5 & 0xfe;
  FUN_1007676c(param_1);
  if (-1 < *(int *)(**(int **)(param_1 + 4) + 0xc) << 0x1f) {
    local_26 = '\0';
    cStack_25 = '\0';
    uStack_24 = 0;
    local_28 = uVar2;
    iVar7 = FUN_1006901c(&local_28);
    cVar4 = cStack_25;
    if (iVar7 == 0) {
      if (local_26 != '\0') {
        FUN_10076514(param_1,0,local_26 == -1,0);
      }
      if (cVar4 != '\0') {
        FUN_10076514(param_1,1,cVar4 == -1);
      }
    }
    else {
      FUN_100a5b78(DAT_100775b0 | uVar8,DAT_100775b8,DAT_100775b4,uVar2);
    }
    uVar8 = *pbVar9 & 2;
    if ((*pbVar9 & 2) == 0) {
      *(uint *)(iVar11 + 0x20) = uVar8;
      *(uint *)(iVar11 + 0x24) = uVar8;
    }
    bVar1 = *pbVar9;
    *(undefined4 *)(iVar11 + 0x20) = 0;
    *(undefined4 *)(iVar11 + 0x24) = 0;
    *pbVar9 = (byte)(bVar1 & 0xfffffffe);
    if (-1 < (int)((bVar1 & 0xfffffffe) << 0x1e)) {
      iVar7 = **(int **)(param_1 + 4);
      if ((uVar2 & 0x5000) != 0) {
        *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) & 0xfffffffc;
        *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) & 0xffffffcf;
      }
      uVar6 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        uVar6 = getBasePriority();
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if ((bVar3) && (uVar8 = getBasePriority(), uVar8 == 0 || 0x20 < uVar8)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if ((*(uint *)(iVar7 + 0x30) & 0xc00) == 0) {
        *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfff3fffe;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_10055c2c((char)piVar10[4],uVar6);
      FUN_10077c0c((*pbVar9 & 7) >> 2);
    }
  }
  FUN_10077630(0);
  FUN_10056ca4(2,0);
  return 0;
}

