/* FUN_2c4110f0 @ 0x2c4110f0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4110f0(undefined4 param_1,int param_2,undefined1 param_3,int param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r7;
  
  iVar7 = *(int *)(param_2 + 0x74);
  *(char *)(*(int *)(iVar7 + 0x54) + 0x1d) = (char)unaff_r7;
  iVar4 = iRam2c4112b8;
  iVar6 = *(int *)(iVar7 + 0x14);
  iVar5 = *(int *)(iVar6 + 0x14);
  *(undefined1 *)(iVar5 + 9) = param_3;
  uVar2 = (undefined1)param_2;
  *(undefined1 *)(iVar6 + 0x15) = uVar2;
  iVar6 = *(int *)(*(short *)(iVar7 + iVar6) + 100);
  *(int *)(iVar5 + 0x54) = iVar5;
  *(int *)(iVar7 + 0x14) = -iVar7;
  *(int *)(iVar5 + 0x54) = param_4;
  uVar1 = *(ushort *)(iVar5 + 0x3e);
  *(char *)(param_4 + iVar7) = (char)unaff_r7;
  *(int *)(iVar6 + 0x44) = iVar7;
  uVar3 = (undefined1)iVar6;
  *(undefined1 *)(iVar5 + 9) = uVar3;
  *(char *)(iVar4 + 9) = (char)uVar1;
  *(int *)(iVar5 + 0x34) = param_2;
  *(int *)(iVar6 + 0x54) = param_4;
  *(undefined1 *)(iVar7 + 0xd) = uVar3;
  *(uint *)(param_4 + 0x38) = (uint)uVar1;
  *(undefined1 *)(iVar6 + 9) = uVar2;
  *(int *)(iVar5 + 0x44) = iVar6;
  *(int *)(iVar5 + 0x14) = iVar5;
  iVar4 = *(int *)(iVar7 + 4);
  *(int *)(iVar4 + 0x38) = iVar6;
  *(undefined1 *)(iVar6 + 9) = uVar2;
  *(char *)(iVar6 + 0x11) = (char)iVar7;
  *(undefined1 *)(iVar5 + 9) = uVar3;
  *(char *)(iRam2c413200 + 0xd) = (char)iVar4;
  *(undefined4 *)(iVar7 + 0x14) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

