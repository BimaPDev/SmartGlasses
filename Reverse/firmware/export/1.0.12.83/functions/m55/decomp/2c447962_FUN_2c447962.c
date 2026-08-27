/* FUN_2c447962 @ 0x2c447962 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c447962(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r5;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iStack0000001c;
  int in_stack_00000304;
  
  iStack0000001c = (int)param_4 >> 0x19;
  param_3 = param_3 >> (param_4 & 0xff);
  iVar2 = *(int *)(param_3 + 4);
  uVar4 = *(undefined4 *)(param_3 + 0xc);
  iVar5 = *(int *)(param_3 + 0x10);
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  iVar3 = iVar2 + 4;
  *(char *)(unaff_r5 + 0x16) = (char)unaff_r5;
  *(char *)(iVar2 + 0x1c) = (char)iVar3;
  piVar7 = (int *)(int)(short)uVar6;
  *(undefined4 *)(unaff_r5 + 0x48) = uVar4;
  *piVar7 = param_3 + 0x18;
  piVar7[1] = iVar3;
  piVar7[2] = iVar5;
  piVar7[3] = (int)piVar7;
  func_0x2c9d00c2(in_stack_00000304,iVar3 * 2,in_stack_00000304 + 1,iVar3 >> 2,param_2);
  bVar1 = *(byte *)(iVar5 + 7);
  *(short *)(&stack0x00000098 + unaff_r5) = (short)extraout_r2;
  *(ushort *)(extraout_r2 + 0xc) = (ushort)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

