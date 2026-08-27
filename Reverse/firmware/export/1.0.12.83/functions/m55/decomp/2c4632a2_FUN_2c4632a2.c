/* FUN_2c4632a2 @ 0x2c4632a2 */

/* WARNING: Control flow encountered bad instruction data */

int FUN_2c4632a2(int param_1,undefined2 *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_r4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_r6;
  int iVar8;
  int unaff_r9;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  undefined4 in_cr6;
  
  uVar7 = *(uint *)(unaff_r4 + 0x60);
  bVar10 = SCARRY4(uVar7,param_3);
  iVar5 = uVar7 + param_3;
  bVar9 = iVar5 < 0;
  iVar4 = *unaff_r6;
  uVar6 = unaff_r6[1];
  iVar8 = unaff_r6[3];
  piVar11 = unaff_r6 + 4;
  if (piVar11 != (int *)0x0) {
    if (!CARRY4(uVar7,param_3) || iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_4 + (int)piVar11) = (char)piVar11;
    uRam2c463d84 = 0x2c463d78;
    iRam2c463d78 = param_1;
    puRam2c463d7c = param_2;
    iRam2c463d80 = param_4;
    if (!bVar10) {
      iVar4 = (uVar6 & 0xffff) + 0x3e;
      uVar6 = iVar4 + (int)piVar11;
      *(uint *)(uVar6 + 0x38) = uVar6;
      *(short *)(uVar6 + 0x10) = (short)((int)uVar6 >> 0x11);
      *(short *)(iVar8 + 0x12) = (short)iVar4;
      if (uVar6 < 0xffffff66) {
        return param_1;
      }
      *(char *)(((int)uVar6 >> 0x11) + 0x1d) = (char)((int)uVar6 >> 0x11);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x2f,0x2c463970);
      (*pcVar1)();
    }
    *(short *)(iVar4 * 0x10000000 + 0x1c) = (short)param_4;
    *(int *)(param_1 + 0x3c) = (int)*(char *)((int)piVar11 + param_1);
    software_interrupt(0x34);
    func_0x2cd5968c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (undefined2)iVar4;
  if (CARRY4(uVar7,param_3) && iVar5 != 0) {
    *(byte *)(unaff_r6[2] + 0x15) = (byte)((uint)unaff_r6[2] >> 0x1a);
    *param_2 = uVar3;
    *(int *)param_4 = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_bkpt(0x30);
  if ((bVar9 == bVar10) && (bVar9)) {
    *(short *)(param_1 + 0x28) = (short)param_2;
    param_2[0xb] = uVar3;
    coprocessor_loadlong(0xd,in_cr6,unaff_r9 + 0x2b4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar9 == bVar10) {
    param_2 = (undefined2 *)((int)uVar6 >> 7);
  }
  else {
    software_interrupt(0xd6);
  }
  software_bkpt(0xde);
  cVar2 = *(char *)(*(char *)(iVar8 + (int)param_2) + 8);
  *(int *)(*(int *)(param_4 + 0x30) + 0x78) = *(int *)(param_4 + 0x30);
  if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

