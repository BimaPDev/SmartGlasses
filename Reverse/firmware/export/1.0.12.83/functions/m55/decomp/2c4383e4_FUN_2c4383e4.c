/* FUN_2c4383e4 @ 0x2c4383e4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4383e4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r4;
  uint uVar4;
  int unaff_r5;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_cr11;
  undefined1 auStack_330 [424];
  int iStack_188;
  
  iVar3 = _LAB_2c4384f0;
  uVar1 = *(ushort *)(param_3 + 0x28);
  uVar4 = (uint)uVar1;
  coprocessor_loadlong(0xc,in_cr11,auStack_330);
  software_interrupt(0x33);
  software_bkpt(0x71);
  software_interrupt(0x69);
  if (param_4 + -0xa8 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(_LAB_2c4384f0 + 0x12) = *(undefined1 *)(unaff_r5 * 2);
  uVar5 = (uint)*(ushort *)(unaff_r4 + 0x19);
  *(uint *)(uVar5 + 0x1c) = uVar4;
  *(undefined2 *)(uVar5 + 0x22) = *(undefined2 *)(uVar4 + 0x14);
  *(int *)(unaff_r4 + 1) = iVar3;
  *(undefined1 **)(unaff_r4 + 5) = &LAB_2c43867c;
  *(uint *)(unaff_r4 + 9) = uVar4;
  *(int **)(unaff_r4 + 0xd) = (int *)(unaff_r4 + 1);
  iVar7 = (int)(char)(&LAB_2c43867c)[uVar4];
  *(undefined1 *)(iStack_188 + 0x1c) = 0x7c;
  uVar6 = (uint)*(ushort *)(unaff_r4 + 0x25);
  *(char *)(uVar5 + uVar4) = (char)iStack_188;
  if (uVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (undefined1)uVar1;
  if (iVar3 != -0x2c43867c) {
    _LAB_2c43867c = iVar7;
    *(undefined1 *)(uVar6 + 0x10) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRamd3bc7988 = 0xd3bc7984;
  uRamd3bc7984 = *(undefined4 *)(iStack_188 + 8);
  uRamd3bc798c = uVar6;
  iRamd3bc7990 = iVar7;
  *(char *)(iStack_188 + 9) = (char)iStack_188;
  *(undefined1 *)(iVar7 + 8) = 0x7c;
  *(undefined1 *)(uVar4 * 2) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

