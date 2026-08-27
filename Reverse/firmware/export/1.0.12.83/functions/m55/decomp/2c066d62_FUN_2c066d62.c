/* FUN_2c066d62 @ 0x2c066d62 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c066d62(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 unaff_r5;
  int iVar4;
  ushort unaff_r6;
  uint uVar5;
  int unaff_r7;
  uint uVar6;
  
  software_bkpt(3);
  *(undefined4 *)(unaff_r7 + 0x5c) = unaff_r5;
  iVar4 = param_2 * 0x400;
  iVar1 = *param_4;
  iVar3 = param_4[1];
  *(short *)(iVar1 + iVar4) = (short)((uint)iVar4 >> 8);
  func_0x2b967150(param_1,iVar1,param_2 - (uint)unaff_r6,iVar3,param_2,param_3,param_4);
  iVar1 = iVar4 >> 0x10;
  puVar2 = *(uint **)(iVar1 + 4);
  uVar5 = *(uint *)(iVar1 + 0x10);
  uVar6 = *(uint *)(iVar1 + 0x14);
  *puVar2 = iVar4 + 0x40U >> (unaff_r7 + 0x93U & 0xff);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

