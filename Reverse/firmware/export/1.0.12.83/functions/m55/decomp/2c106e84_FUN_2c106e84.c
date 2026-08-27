/* FUN_2c106e84 @ 0x2c106e84 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c106e84(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  int unaff_r6;
  int iVar5;
  undefined4 *puVar6;
  int unaff_r7;
  int *piVar7;
  undefined4 uStack_14;
  int iStack_10;
  
  piVar1 = piRam00000180;
  piVar7 = &iStack_10;
  iStack_10 = param_4;
  if (unaff_r7 != 0) {
    iVar5 = *(int *)(unaff_r6 + param_1);
    iVar4 = *(int *)((int)piRam00000180 * 2);
    *(int *)((int)piRam00000180 + param_3) = iVar5;
    *piVar1 = param_2;
    piVar1[1] = param_3;
    piVar1[2] = iVar4 + -0xb5;
    piVar1[3] = iVar5;
    *(int *)(param_4 + 0x24) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_3 + 0x78) = unaff_r4;
  iVar4 = *(int *)(unaff_r6 * 0x40000 + 0x68);
  puVar6 = (undefined4 *)(iVar4 * 0x1000);
  *(char *)(param_2 + 3) = (char)iVar4;
  *(char *)(iVar4 + 3) = (char)iVar4 + '\x01';
  puVar6[4] = puVar6;
  uVar2 = _DAT_2c107174;
  _NMI = iVar4 * 0x200000;
  _MasterStackPointer = 0;
  _MemManage = 0x2c107278;
  puVar3 = (undefined1 *)*puVar6;
  iVar5 = puVar6[1];
  _Reset = param_2;
  _HardFault = iVar4;
  _BusFault = unaff_r7;
  *(short *)(*(int *)(iVar5 + _NMI) + 0x1a) = (short)iVar5;
  if ((iVar5 >> 0x1d & 1U) == 0 || iVar5 >> 0x1e == 0) {
    *puVar3 = (char)uVar2;
    uRam00000062 = 0x62;
    piVar7 = &uStack_14;
    uStack_14 = 0x6e;
    _DAT_ffffffce = iVar4 + 2;
    *(undefined4 *)(iVar5 + _DAT_ffffffce) = 0x52;
    uRamffffffd2 = 0x20;
    iRam00000054 = param_2;
    iRamffffffca = param_2;
    iRamffffffd6 = iVar5;
  }
  return *piVar7;
}

