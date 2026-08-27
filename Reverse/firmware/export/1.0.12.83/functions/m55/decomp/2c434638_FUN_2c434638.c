/* FUN_2c434638 @ 0x2c434638 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c434638(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  uVar1 = (uint)*(byte *)(param_4 + 10);
  uVar2 = *(undefined4 *)(param_4 + 0x50);
  *(uint *)uVar1 = uVar1;
  *(int *)(uVar1 + 4) = param_4;
  *(undefined4 *)(uVar1 + 8) = uVar2;
  *(undefined4 *)(uVar1 + 0xc) = unaff_r6;
  uRam000000fd = param_1 - 0x1aU >> 0x17;
  iRam000000f9 = uRam000000fd * 2;
  software_bkpt(0x59);
  uRam0000010b = (ushort)*(byte *)(param_2 + 1);
  iRam000000f1 = param_2;
  iRam000000f5 = param_4;
  uRam00000101 = unaff_r7;
  *(int *)(_IRQ + 0x4c) = _IRQ;
  uRam2c4343ed = DAT_00000104;
  *(char *)(param_2 + 0x11) = (char)param_2;
  return;
}

