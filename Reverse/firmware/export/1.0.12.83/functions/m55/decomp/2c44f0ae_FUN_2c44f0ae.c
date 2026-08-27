/* FUN_2c44f0ae @ 0x2c44f0ae */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c44f194) overlaps instruction at (ram,0x2c44f192)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44f0ae(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  undefined4 *unaff_r4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r9;
  uint unaff_r10;
  uint uVar10;
  uint extraout_r12;
  char cVar11;
  bool bVar12;
  undefined4 in_cr2;
  int in_stack_000000c8;
  int in_stack_0000017c;
  int in_stack_00000180;
  uint in_stack_00000184;
  uint in_stack_00000188;
  int *in_stack_0000018c;
  undefined4 *in_stack_00000190;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001bc;
  undefined4 in_stack_000001c4;
  int in_stack_000001c8;
  int in_stack_000001cc;
  int *in_stack_000001d0;
  undefined4 in_stack_00000398;
  
  iVar4 = param_2;
  piVar8 = unaff_r6;
  do {
    puVar2 = param_1;
    uVar1 = *(ushort *)((int)unaff_r4 + 0x22);
    uVar6 = (uint)uVar1;
    piVar3 = (int *)((int)puVar2 + 0xe9);
    if ((int)piVar3 < 0) {
      *piVar8 = (int)piVar3;
      piVar8[1] = iVar4;
      piVar8[2] = piVar8[0x18];
      piVar8[3] = uVar6;
      piVar8[4] = (int)piVar8;
      if (0x5e < param_4) {
        _LAB_2c44f284 = param_3;
        *(char *)((int)piVar8 + 9) = (char)uVar1;
        bVar12 = SBORROW4(uVar6,iVar4 >> 0xc);
        piRam2c44f238 = piVar8;
        in_stack_00000190 = &stack0x000001c8;
        in_stack_00000184 = (int)in_stack_00000190 * 0x400000;
        uVar10 = unaff_r10 | 0xffffff50;
        uVar5 = (uint)*(ushort *)((int)&stack0x0000017c + piVar8[0x18]);
        piVar3 = piVar8;
        if (param_3 * 0x800000 != 0) {
          in_stack_00000180 = param_3 * 0x800000 + 0x14;
          piVar3 = (int *)((int)piVar8 + ((int)in_stack_00000190 * -0x400000 - (uint)(uVar5 < 0x46))
                          );
          if (iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(char *)((int)piVar3 + 0x15) = (char)((int)&stack0x00000194 >> 0x13);
          in_stack_0000017c = iVar4;
          in_stack_00000188 = uVar6;
          in_stack_0000018c = piVar8;
          in_stack_000001c8 = iVar4;
          in_stack_000001cc = in_stack_00000180;
          in_stack_000001d0 = piVar3;
          func_0x2caff882(in_stack_00000398);
          bVar12 = SBORROW4(uVar5 - 0x46,0x17);
          uVar5 = uVar5 - 0x5d;
          iVar4 = extraout_r1;
          uVar10 = extraout_r12;
          in_stack_00000184 = uVar5;
        }
        software_interrupt(0x9a);
        if (bVar12) {
          if (in_stack_00000184 != 0) {
            *(char *)(uVar10 + param_2) = (char)unaff_r6;
            *(char *)(*(int *)(uVar5 + 4) + 0x19) = (char)*(undefined4 *)(uVar5 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(char *)(iVar4 + uVar5) = (char)*(undefined2 *)(iVar4 * 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar3[0x11] = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c44e93c;
    }
    iVar7 = *(int *)(iVar4 + 8);
    uVar9 = *(undefined4 *)(iVar4 + 0xc);
    unaff_r4 = &stack0x000001b0;
    *(char *)(puVar2 + 0x3e) = (char)unaff_r4;
    if (SCARRY4(iVar7,4)) {
      piVar8[5] = in_stack_000000c8;
      *(ushort *)(piVar8 + 6) = (ushort)((uint)uVar9 >> 0x11);
      coprocessor_store(0xe,in_cr2,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = *(int *)*puRam2c44f084;
    if ((int)unaff_r4 >> 8 < 0 != SBORROW4(puRam2c44f084[2],0xe7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (int)unaff_r4 >> 0xc;
    param_3 = *piVar3;
    piVar8 = *(int **)((int)puVar2 + 0xf5);
    param_1 = (undefined4 *)((int)puVar2 + 0xf9);
    param_4 = (uint)piVar8 >> 0x17;
    cVar11 = SBORROW4((int)piVar8,0x69);
    *param_1 = param_1;
    *(int *)((int)puVar2 + 0xfd) = iVar4;
    *(undefined4 **)((int)puVar2 + 0x101) = unaff_r4;
    *(undefined4 *)((int)puVar2 + 0x105) = *(undefined4 *)((int)puVar2 + 0xf1);
    *(int **)((int)puVar2 + 0x109) = piVar8;
    *(char *)(iVar4 + 0xd) = (char)iVar4;
    *(int **)(iVar7 + 0x28) = piVar8;
    *(uint *)(iVar4 + 0x34) = param_4;
  } while (unaff_r4 != (undefined4 *)0x0);
  *(short *)(param_4 + 0xc) = (short)iVar7;
  uVar6 = *(uint *)((int)puVar2 + 0xfd);
  if (!(bool)cVar11) {
    FUN_2c492f3c((int)puVar2 + 0x101,0,_LAB_2c44f0a8,*param_1);
    if (cVar11 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c44e93c:
  piVar8[0x1d] = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

