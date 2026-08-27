/* FUN_2c45013a @ 0x2c45013a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c450784) */
/* WARNING: Removing unreachable block (ram,0x2c45072a) */
/* WARNING: Removing unreachable block (ram,0x2c450736) */
/* WARNING: Removing unreachable block (ram,0x2c450740) */
/* WARNING: Removing unreachable block (ram,0x2c4507be) */
/* WARNING: Removing unreachable block (ram,0x2c450854) */
/* WARNING: Removing unreachable block (ram,0x2c450868) */
/* WARNING: Removing unreachable block (ram,0x2c450878) */
/* WARNING: Removing unreachable block (ram,0x2c450892) */
/* WARNING: Removing unreachable block (ram,0x2c4508a8) */
/* WARNING: Removing unreachable block (ram,0x2c4508c6) */
/* WARNING: Removing unreachable block (ram,0x2c45090a) */
/* WARNING: Removing unreachable block (ram,0x2c4508cc) */
/* WARNING: Removing unreachable block (ram,0x2c4508d2) */
/* WARNING: Removing unreachable block (ram,0x2c450744) */
/* WARNING: Removing unreachable block (ram,0x2c45078e) */
/* WARNING: Removing unreachable block (ram,0x2c450792) */
/* WARNING: Removing unreachable block (ram,0x2c450748) */
/* WARNING: Removing unreachable block (ram,0x2c45074c) */
/* WARNING: Removing unreachable block (ram,0x2c450756) */
/* WARNING: Removing unreachable block (ram,0x2c450758) */
/* WARNING: Removing unreachable block (ram,0x2c4507ce) */
/* WARNING: Removing unreachable block (ram,0x2c4507b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45013a(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 extraout_r2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar6;
  code *unaff_r7;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  undefined4 in_cr5;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r6;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
    *(int *)((int)register0x00000054 + -0x14) = param_3;
    *(int *)((int)register0x00000054 + -0x18) = param_2;
    *(int *)((int)register0x00000054 + -0x1c) = (int)param_1;
    if ((bool)in_ZR || in_NG != in_OV) {
      *(char *)((int)param_1 * 2) = (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)((int)param_1 + (int)unaff_r7) = (short)param_3;
    *(short *)(param_4 + 0x24) = (short)unaff_r4;
    piVar5 = *(int **)((int)register0x00000054 + 0x3b8);
    unaff_r4 = *(int *)(unaff_r6 + 100);
    *(int **)((int)register0x00000054 + 0x3c0) = piVar5;
    unaff_r7 = (code *)(uint)*(ushort *)(unaff_r4 + 0x10);
    software_bkpt(0x3e);
    param_3 = *(int *)(unaff_r6 + 4);
    unaff_r7[param_4] = SUB41(unaff_r5,0);
    if (0x26 < (int)param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar5 = param_2;
    piVar5[1] = unaff_r6;
    param_1 = piVar5 + 2;
    in_OV = SBORROW4((int)param_1,0x70);
    if (unaff_r6 != 0) break;
    in_ZR = true;
    in_NG = '\0';
    param_4 = _LAB_2c45042c;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
  }
  iVar6 = unaff_r6 + (_LAB_2c45042c >> 0x13);
  cVar7 = SCARRY4(iVar6,0xd3);
  uVar4 = (*unaff_r7)(param_1,_LAB_2c45042c >> 0x13,(int *)((int)register0x00000054 + 0x1b8),
                      *(int *)((int)register0x00000054 + 0x318));
  puVar3 = puRam00000081;
  uVar2 = uRam0000007d;
  iVar1 = iRam00000075;
  if (cVar7 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((int)register0x00000054 + 0xf4) = *(int *)(*(int *)(iVar6 + 0x143) + 0x50);
  if ((undefined1 *)register0x00000054 == (undefined1 *)0xfffffd48) {
    _PendSV = 0x82c;
    uRam2c4507cf = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam2c4507cf = uVar4;
  *puRam00000081 = extraout_r2;
  puVar3[1] = 0x85;
  puVar3[2] = (int *)((int)register0x00000054 + 0x3c);
  puVar3[3] = uVar2;
  puVar3[4] = puVar3;
  *(int *)((int)register0x00000054 + 0x2c4) = iVar1;
  coprocessor_moveto2(10,9,(int *)((int)register0x00000054 + 0x3c),unaff_r7,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

