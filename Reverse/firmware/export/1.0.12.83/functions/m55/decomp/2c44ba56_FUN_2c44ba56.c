/* FUN_2c44ba56 @ 0x2c44ba56 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44b804) */
/* WARNING: Removing unreachable block (ram,0x2c44b3ec) */
/* WARNING: Removing unreachable block (ram,0x2c44b9d6) */
/* WARNING: Removing unreachable block (ram,0x2c44ba04) */
/* WARNING: Removing unreachable block (ram,0x2c44b9a2) */
/* WARNING: Removing unreachable block (ram,0x2c44ba14) */
/* WARNING: Removing unreachable block (ram,0x2c44b9ac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x2c44ba6c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_2c44ba56(uint param_1,uint param_2,undefined1 *param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6,code *UNRECOVERED_JUMPTABLE,
                 undefined4 param_8)

{
  code cVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 *puVar10;
  uint uVar11;
  int unaff_r7;
  uint uVar12;
  undefined1 unaff_r10;
  undefined4 unaff_r11;
  uint *puVar13;
  int unaff_lr;
  char in_ZR;
  bool bVar14;
  undefined4 in_cr9;
  undefined4 in_stack_00000034;
  ushort *in_stack_0000017c;
  int in_stack_00000180;
  undefined4 in_stack_00000234;
  uint uStack_14;
  undefined1 *puStack_10;
  int in_stack_fffffff4;
  int in_stack_fffffffc;
  
  puStack_10 = param_3;
  puVar13 = &uStack_14;
  uStack_14 = param_2;
  *(undefined1 **)(param_2 + 0x28) = param_3;
  if (in_ZR == '\0') {
    software_interrupt(0x44);
    *param_3 = (char)unaff_r7;
    *(undefined2 *)(unaff_r4 + 0x3a) = param_4;
    uRam000000e7 = (undefined1)param_4;
    puVar13 = &param_6;
    if (((uint)param_3 >> 4 & 1) == 0) {
      *(undefined1 *)(unaff_lr + 0xd44) = unaff_r10;
      *(undefined1 **)(unaff_r4 + 0x28) = &stack0x0000009c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      bVar14 = SBORROW4(in_stack_fffffffc,0xa9);
      uVar2 = *in_stack_0000017c;
      uVar12 = (uint)uVar2;
      in_stack_fffffffc = 0xae;
      uVar9 = (uint)param_3 >> 0x1c;
    } while (((uint)param_3 >> 0x1b & 1) != 0);
    if (uVar9 != 0 && !bVar14) {
      uVar3 = *(ushort *)(uVar9 + 0x26);
      uVar11 = (uint)uVar3;
      if (in_stack_fffffff4 == 0) {
        *(uint *)(param_2 + 0xc) = uVar11;
        cVar4 = *(char *)(unaff_r4 + 299);
        *(ushort *)(uVar11 + 4) = uVar3 >> 6;
        uVar11 = uVar11 - 0xd;
        iVar8 = uVar11 * 0x1000;
        if ((uVar11 & 0x100000) != 0) {
          coprocessor_loadlong(0xd,in_cr9,unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar8 == 0 || iVar8 < 0 != SCARRY4((int)cVar4,0x6f)) {
          puVar7 = (undefined1 *)0xffffff50;
          uVar9 = 0xfffffff2;
          do {
            uVar12 = uVar9 | 0xdfffffff;
            *(uint *)((uVar3 >> 6) + 4) = uVar11;
            *(char *)(unaff_r4 + 0xc1) = (char)uVar12;
            bVar14 = puVar7 != (undefined1 *)0xffffffc6;
            puVar7 = &stack0x0000039c;
            uVar9 = (uint)*(short *)(puVar7 + uVar11);
          } while (bVar14);
          iVar8 = (int)uVar12 >> 5;
          *(char *)(unaff_r4 + 0xc4) = (char)iVar8;
          *(char *)(iVar8 + 7) = (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(_LAB_2c44bc14 + -0xb0) = 0xff50;
        puVar10 = *(undefined4 **)(iVar8 + 0xc);
        cVar1 = UNRECOVERED_JUMPTABLE[6];
        *puVar10 = param_6;
        puVar10[1] = (uint)(byte)cVar1;
        *(short *)(in_stack_00000180 + 0x3a) = (short)param_8;
                    /* WARNING: Could not recover jumptable at 0x2c44b562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (0xfffffff2,param_6,&stack0x00000014 + in_stack_00000180,iVar8 + 0x14);
        return;
      }
      if (uVar9 == 0) {
        *(char *)(uVar11 + 5) = (char)uVar3;
        uVar3 = *(ushort *)(uVar11 + 0x35);
        *(short *)(param_2 + uVar12) = (short)param_2;
        iVar8 = _LAB_2c44bc04;
        uVar5 = (undefined1)uVar2;
        if (in_stack_fffffff4 != 0x107) {
          *(undefined1 *)(in_stack_fffffff4 + -0xf2) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar6 = (int)(char)_LAB_2c44bc04;
        if (iVar6 < 0x62) {
          if (SCARRY4(iVar6,uVar12)) {
            *(undefined1 *)(iVar6 + uVar12 + 0x16) = uVar5;
            *(uint *)(&stack0x00000368 + iVar8) = param_2 >> 0x16;
            uRam000000e0 = param_2;
            *(uint *)param_2 = param_2;
            *(undefined4 *)(param_2 + 4) = in_stack_00000234;
            *(int *)(param_2 + 8) = (int)param_2 >> 0x1d;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(char *)(uVar3 + 0x12) = (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(((uint)param_3 >> 5) + 0x32) = (short)unaff_r4;
      *(uint *)(uVar9 + 0x20) = param_2;
    }
    param_2 = param_2 << 0x14;
    in_stack_0000017c = *(ushort **)(unaff_r4 + 0x30);
    unaff_r7 = uVar12 + 0xaa;
    param_1 = uStack_14;
  }
  *(char *)(unaff_r7 + 0xf) = (char)in_stack_0000017c;
  *(int *)(unaff_r4 + 0x68) = unaff_r4;
  func_0x2cb72528(param_1,param_2,puVar13 + 0x29);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

