/* FUN_2c43e30e @ 0x2c43e30e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43e30e(undefined4 param_1,uint param_2,uint *param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  bool in_CY;
  bool bVar7;
  int *piVar8;
  int in_stack_000001b4;
  
  uVar6 = (uint)*(ushort *)(param_4 + 0x1e);
  iVar3 = (unaff_r4 - param_4) - (uint)!in_CY;
  *(undefined2 *)(param_2 + 2) = unaff_r6;
  puVar2 = (undefined4 *)(param_2 >> 0xc);
  bVar7 = SCARRY4(iVar3,0x9d);
  iVar4 = iVar3 + 0x9d;
  if (-0x9e < iVar3) {
    software_interrupt(0xfa);
    puVar5 = (undefined4 *)puVar2[1];
    iVar4 = puVar2[3];
    piVar8 = puVar2 + 4;
    *puVar5 = param_1;
    puVar5[1] = param_3;
    puVar5[2] = piVar8;
    puVar5[3] = puVar5;
    puVar5[4] = iVar4;
    puVar5[5] = unaff_r7;
    *(char *)(iVar4 + 0xe) = (char)unaff_r7;
    *piVar8 = (int)param_3;
    puVar2[5] = piVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(uVar6 + 2);
  *param_3 = (uint)bVar1;
  *puVar2 = param_1;
  puVar2[1] = param_3 + 1;
  puVar2[2] = (uint)bVar1;
  do {
    if (iVar4 < 0 == bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar7 = SBORROW4(uVar6,0x9b);
    iVar4 = uVar6 - 0x9b;
  } while (in_stack_000001b4 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

