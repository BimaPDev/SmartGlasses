/* FUN_2c1123a8 @ 0x2c1123a8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1123a8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  undefined2 unaff_r5;
  int unaff_r6;
  int iVar4;
  int unaff_r7;
  undefined4 in_r12;
  int iVar5;
  char in_NG;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr15;
  undefined8 in_d2;
  undefined8 in_d3;
  uint uStack00000084;
  undefined4 uStack00000180;
  undefined1 auStack_284 [636];
  
  uRam2c11264e = unaff_r5;
  if (in_NG != '\0') {
    iRam2c11261c = *param_3;
    iRam2c112620 = param_3[1];
    piRam2c11262c = param_3 + 3;
    *(short *)(unaff_r6 + 0x14) = (short)piRam2c11262c;
    *(int *)(param_4 + 0x6c) = unaff_r6;
    iRam2c11261c = iRam2c11261c + -0xd7;
    *(undefined4 *)(iRam2c112620 + 0x2c) = 0x2c11261c;
    iRam2c112624 = unaff_r6;
    iRam2c112628 = iRam2c11261c;
    iRam2c112630 = iRam2c112620;
    iRam2c112634 = unaff_r6;
    *(int *)(param_4 + 0x68) = unaff_r6;
    coprocessor_loadlong(0xd,in_cr15,&stack0x00000180);
    auVar1._8_8_ = in_d3;
    auVar1._0_8_ = in_d2;
    VectorUnsignedDotProduct(auVar1,in_d2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(7,in_cr2,auStack_284);
  *(char *)((int)param_3 + 0x1a) = (char)unaff_r7;
  uVar2 = (uint)*(ushort *)(unaff_r7 + 0x30);
  *(uint *)(uVar2 + 0x28) = uVar2;
  iVar3 = (unaff_r7 + -3) * 0x10;
  uStack00000084 = (uint)*(ushort *)(iVar3 + 0x3e);
  uStack00000180 = 0;
  _Reserved3 = iVar3;
  *(undefined1 *)(unaff_r7 + iVar3) = 0x9c;
  iVar4 = iVar3 >> 3;
  coprocessor_loadlong(5,in_cr5,in_r12);
  coprocessor_movefromRt(5,5,in_cr0);
  iVar5 = coprocessor_movefromRt2(5,5,in_cr0);
  *(uint *)((int)uVar2 >> 1) = uVar2;
  uRam0000001f = (undefined1)iVar4;
  *(int *)(iVar3 + iVar5 + 0x54) = iVar3 + iVar5;
  *(int *)(iVar4 * 0x20 + param_4 * 2) = iVar4 * 0x20;
  *(int *)(iVar5 + 0x140) = iVar4;
                    /* WARNING: Could not recover jumptable at 0x2c111bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)uVar2 >> 1))();
  return;
}

