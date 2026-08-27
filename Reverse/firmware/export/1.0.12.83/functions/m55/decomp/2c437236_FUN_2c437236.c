/* FUN_2c437236 @ 0x2c437236 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c437236(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_r4;
  undefined4 *puVar5;
  int unaff_r6;
  int *piVar6;
  int iVar7;
  int unaff_r7;
  undefined2 unaff_r11;
  undefined4 uVar8;
  undefined4 in_cr4;
  undefined4 in_cr10;
  undefined4 in_cr14;
  int in_stack_00000038;
  int in_stack_000001dc;
  int in_stack_000003d0;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  iVar3 = in_stack_000001dc;
  *(short *)(param_4 + unaff_r7) = (short)&stack0x00000178;
  puVar5 = *(undefined4 **)(param_1 + unaff_r4);
  (&stack0x00000178)[in_stack_000001dc] = (char)unaff_r7;
  iVar7 = puVar5[4];
  coprocessor_function2(1,3,0,in_cr10,in_cr14,in_cr4);
  piVar4 = *(int **)(puVar5[2] + 0x7c);
  iVar2 = piVar4[1];
  if (param_1 <= unaff_r6) {
    *(undefined1 **)(iVar7 + 0x7c) = &stack0x000001c8;
    uRam00000093 = 0x28;
    uRam000000a0 = 0x87;
    *(char *)(in_stack_000003d0 + 0x11) = (char)iVar3;
    iVar3 = (iVar2 + -0xe) * 0x20000000;
    *(char *)(iVar3 + 0x15) = (char)*(undefined4 *)(iVar3 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (param_2 >> 0x10) - piVar4[3];
  uVar8 = *(undefined4 *)(*piVar4 + 8);
  _uStack_10 = CONCAT22((short)iVar2,unaff_r11);
  uStack_14 = param_3;
  iVar3 = FUN_2c62a6b4(iVar3,uVar8,iVar3,iVar2,*puVar5,iVar3,puVar5[3],iVar7);
  if (iVar3 != 0) {
    *(undefined4 **)(iVar7 + 8) = &uStack_14;
    piVar6 = piVar4 + 0x11;
    *(short *)((int)piVar4 + 0x6e) = (short)piVar4[0x19];
    *(undefined2 *)(piVar4 + 0x1c) = *(undefined2 *)((int)piVar4 + 0x66);
    do {
      FUN_2c62a690(&stack0xfffffff4,0,(int)(short)piVar6[-4]);
      bVar1 = *(byte *)(piVar4 + 0x1b);
      if ((bVar1 & 6) == 0) {
        FUN_2c614a0c(&stack0xfffffffc);
        FUN_2c6008ac(piVar4 + 4,bVar1 & 6,&stack0xfffffffc);
        FUN_2c614a3c(iVar7,&stack0xfffffffc,&stack0xfffffff4,piVar4[0x1a]);
      }
      else if ((bVar1 & 7) == 2) {
        FUN_2c6129e4(&stack0xfffffffc);
        FUN_2c6007ec(piVar4 + 4,0,&stack0xfffffffc);
        FUN_2c612a20(iVar7,&stack0xfffffffc,&stack0xfffffff4,piVar4[0x1a],0);
      }
      else {
        FUN_2c614a3c(iVar7,0,piVar4 + 9);
      }
      piVar6 = piVar6 + 4;
    } while (piVar6 != piVar4 + 0x1d);
    *(undefined4 *)(iVar7 + 8) = uVar8;
  }
  if (*_LAB_2c519330 == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

