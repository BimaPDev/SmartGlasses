/* FUN_14073c58 @ 0x14073c58 */

void FUN_14073c58(uint param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  puVar5 = DAT_14073cc8;
  puVar2 = DAT_14073cc4;
  uVar7 = *DAT_14073cc4;
  if (6 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14073cd0,0x76,DAT_14073ccc,param_1,0);
  }
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    param_2 = 0x14073c74;
    *DAT_14073cc8 = 0x14073c74;
    puVar5[1] = unaff_lr;
  }
  puVar5 = (undefined4 *)&IRQ;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar4 = param_1;
  if (param_1 < 7) {
    uVar4 = 1;
    puVar5 = (undefined4 *)(*puVar2 | 1 << (param_1 & 0xff));
    *puVar2 = (uint)puVar5;
  }
  puVar3 = DAT_14073cc8;
  if (iVar6 == 0) {
    param_2 = 0xffffffff;
    *DAT_14073cc8 = 0xffffffff;
    puVar5 = puVar3;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
  if (uVar7 != 0) {
    return;
  }
  thunk_FUN_140a20f4(uVar4,param_2,puVar5);
  return;
}

