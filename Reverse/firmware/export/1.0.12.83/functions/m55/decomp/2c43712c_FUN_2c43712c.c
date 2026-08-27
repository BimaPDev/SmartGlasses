/* FUN_2c43712c @ 0x2c43712c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43712c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  short unaff_r5;
  short sVar5;
  int iVar6;
  int *piVar7;
  int unaff_r7;
  undefined4 uVar8;
  short unaff_lr;
  char in_NG;
  char in_OV;
  int in_stack_00000050;
  int in_stack_000003e8;
  
  piVar4 = *(int **)(param_4 + 0x7c);
  iVar3 = piVar4[1];
  iVar6 = piVar4[3];
  if (in_NG == in_OV) {
    *(undefined1 **)(unaff_r7 + 0x7c) = &stack0x000001e0;
    uRam00000093 = 0x28;
    uRam000000a0 = 0x87;
    *(char *)(in_stack_000003e8 + 0x11) = (char)param_3;
    iVar3 = (iVar3 + -0xe) * 0x20000000;
    *(char *)(iVar3 + 0x15) = (char)*(undefined4 *)(iVar3 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (uint)param_5._2_2_ - iVar6;
  uVar8 = *(undefined4 *)(*piVar4 + 8);
  param_7._2_2_ = (undefined2)iVar3;
  iVar3 = FUN_2c62a6b4(param_3,uVar8,param_3,iVar3,param_1,param_3);
  if (iVar3 != 0) {
    *(undefined4 **)(unaff_r7 + 8) = &param_6;
    sVar2 = param_5._2_2_ - (short)iVar6;
    param_9._0_2_ = (short)piVar4[0x19];
    sVar5 = unaff_r5 + unaff_lr;
    param_8._2_2_ = *(short *)((int)piVar4 + 0x66);
    piVar7 = piVar4 + 0x11;
    *(short *)((int)piVar4 + 0x6e) = (short)param_9;
    *(short *)(piVar4 + 0x1c) = param_8._2_2_;
    while( true ) {
      param_8._2_2_ = sVar2 - param_8._2_2_;
      param_9._0_2_ = sVar5 + (short)param_9;
      param_8._0_2_ = sVar5;
      param_9._2_2_ = sVar2;
      FUN_2c62a690(&param_8,0,(int)(short)piVar7[-4]);
      sVar5 = sVar5 + *(short *)((int)piVar4 + 0x6e) + 3;
      bVar1 = *(byte *)(piVar4 + 0x1b);
      if ((bVar1 & 6) == 0) {
        FUN_2c614a0c(&param_10);
        FUN_2c6008ac(piVar4 + 4,bVar1 & 6,&param_10);
        iVar3 = (int)*(short *)((int)piVar4 + 0x6e);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        param_11._0_2_ = (undefined2)(iVar3 >> 1);
        iVar3 = (int)(short)piVar4[0x1c];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        param_11._2_2_ = (undefined2)(iVar3 >> 1);
        FUN_2c614a3c();
      }
      else if ((bVar1 & 7) == 2) {
        FUN_2c6129e4(&param_10);
        FUN_2c6007ec(piVar4 + 4,0,&param_10);
        FUN_2c612a20();
      }
      else {
        FUN_2c614a3c();
      }
      piVar7 = piVar7 + 4;
      if (piVar7 == piVar4 + 0x1d) break;
      param_8._2_2_ = (short)piVar4[0x1c];
      param_9._0_2_ = *(short *)((int)piVar4 + 0x6e);
    }
    *(undefined4 *)(unaff_r7 + 8) = uVar8;
  }
  if (*_LAB_2c519330 == in_stack_00000050) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

