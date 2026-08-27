/* FUN_2c071a02 @ 0x2c071a02 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0724ca) */
/* WARNING: Removing unreachable block (ram,0x2c071a2c) */
/* WARNING: Removing unreachable block (ram,0x2c07206c) */
/* WARNING: Removing unreachable block (ram,0x2c072090) */
/* WARNING: Removing unreachable block (ram,0x2c07206e) */
/* WARNING: Removing unreachable block (ram,0x2c0720c6) */
/* WARNING: Removing unreachable block (ram,0x2c072002) */
/* WARNING: Removing unreachable block (ram,0x2c07205c) */
/* WARNING: Removing unreachable block (ram,0x2c072098) */
/* WARNING: Removing unreachable block (ram,0x2c0720d6) */

void FUN_2c071a02(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r5;
  uint uVar7;
  int unaff_r6;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 unaff_r9;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar11;
  uint *puVar12;
  undefined4 in_cr7;
  undefined4 uStack_1c;
  uint uStack_18;
  
  iVar9 = param_2 * 0x20000;
  uVar10 = iVar9 + 0x45;
  iVar6 = (uint)*(ushort *)(param_2 + 0x18) * 0x100;
  uVar5 = uVar10 * 4 + iVar6;
  iVar1 = -(unaff_r6 + -2 >> 0x1f);
  if (SCARRY4(iVar6,7)) {
    *(short *)(iVar1 + 0x2a) = (short)uVar5;
    *(int *)(unaff_r6 + -2) = iVar1;
    *(undefined4 *)(unaff_r6 + 2) = 0xb01c70c0;
    *(uint *)(unaff_r6 + 6) = uVar5 >> 5;
    *(undefined4 *)(unaff_r6 + 10) = 0x2c071afc;
    *(undefined4 *)(unaff_r6 + 0xe) = unaff_r5;
    *(uint *)(unaff_r6 + 0x12) = uVar10;
    uVar4 = unaff_r6 + 0x16;
    uRam071afc11 = (undefined1)uVar4;
    uVar2 = (((int)uVar4 >> 0x14) + -0x71afc00) - (uint)(uVar4 < 0xe0);
    *(uint *)((0x71afc00U >> (uVar2 & 0xff)) + 0x24) = uVar5 >> 5;
    *(short *)(uVar2 * 2) = (short)uVar4;
    do {
      *(uint *)(iVar9 + 0x79) = uVar4;
      bVar11 = CARRY4(uVar10,uVar5);
      uVar5 = uVar10 + uVar5;
    } while (bVar11 && uVar5 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = *(int *)(iVar9 + 0x55);
  uRam80e36983 = unaff_r9;
  *(undefined4 *)(*(int *)(iVar9 + 0x49) + -0x7f1ca0ad) = 0x80e35f53;
  uVar10 = uRamc000000c;
  iVar1 = iRamc0000008;
  uVar5 = uRamc0000004;
  uStack_18 = iVar6 - 0x72;
  uStack_1c = 0x80e35f80;
  puVar12 = (uint *)0xc0000010;
  *(uint *)(uRamc000000c + 0x34) = uStack_18 >> 8;
  if (!CARRY4(uVar10,uVar5) || uVar10 + uVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = iVar1 * 2;
  uVar2 = iVar1 + 7;
  uVar8 = (uStack_18 >> 8) - 0x133;
  uVar4 = (((int)uVar8 >> 0x14) - uVar2) - (uint)(uVar8 < 0xe0);
  uVar7 = (int)uVar2 >> 8;
  *(undefined4 *)((uVar2 >> (uVar4 & 0xff)) + 0x24) = 0xc0000010;
  *(short *)(uVar4 * 2) = (short)uVar8;
  *(uint *)(uVar10 + 0x34) = uVar8;
  uVar2 = uVar10 + uVar5;
  if (!CARRY4(uVar10,uVar5) || uVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar4 + 8) = (char)uVar8;
  if (uVar7 * 0x100 == 0) {
    if ((uVar7 & 0x1000000) == 0) {
      piVar3 = (int *)(uVar7 << 8 & ~uVar4);
      iVar1 = *piVar3;
      iVar6 = piVar3[1];
      *(short *)(uVar2 + uVar7) = (short)piVar3 + 8;
      uRam0000005a = (undefined2)iVar6;
                    /* WARNING: Could not recover jumptable at 0x2c07212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (0x42,iVar1,(int)*(short *)(iVar6 + iVar1),*(undefined2 *)(iVar1 + 0x36));
      return;
    }
    puVar12 = (uint *)((uVar7 & 0xffffff) * 0x40);
    uVar4 = *puVar12;
    uVar2 = puVar12[1];
    puVar12 = puVar12 + 4;
    *(char *)(uVar4 + 0xe) = (char)uVar8;
  }
  else {
    *(undefined4 *)((uVar7 * 0x100 >> (uVar4 & 0xff)) + 0x24) = 0xc0000010;
    *(short *)(uVar4 * 2) = (short)uVar8;
  }
  coprocessor_store(9,in_cr7,uVar8 * 0x200000 + -0x38);
  if (((uint)&uStack_1c & 0xfff1fff1) != 0) {
    uVar5 = (uint)bRam2c072718;
    *(uint **)((bRam2c072718 >> (0x2c0 - uVar5 & 0xff)) + 0x24) = puVar12;
    *(undefined2 *)((0x2c0 - uVar5) * 2) = 0x261a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x2c0723d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x0)(0xc8000000,uVar4,uVar2);
  return;
}

