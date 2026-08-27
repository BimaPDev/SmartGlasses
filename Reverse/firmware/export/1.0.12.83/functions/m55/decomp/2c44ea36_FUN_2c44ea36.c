/* FUN_2c44ea36 @ 0x2c44ea36 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44ea36(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_r4;
  int unaff_r5;
  uint *puVar6;
  uint uVar7;
  uint unaff_r6;
  undefined4 uVar8;
  uint *unaff_r7;
  uint *puVar9;
  int unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  do {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint **)((int)register0x00000054 + -8) = unaff_r7;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(uint **)((int)register0x00000054 + -0x10) = unaff_r4;
    UNRECOVERED_JUMPTABLE = (code *)((int)register0x00000054 + -0x14);
    *(uint *)UNRECOVERED_JUMPTABLE = param_1;
    puVar9 = (uint *)0x0;
    puVar6 = unaff_r4;
    if (unaff_r7 == (uint *)0x0) goto LAB_2c44e966;
    coprocessor_store(0xf,in_cr5,param_4);
    in_OV = SBORROW4(param_1,0xe1);
    param_1 = param_1 - 0xe1;
    puVar6 = (uint *)(int)(short)((ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff);
    param_4 = param_4 + 0x22c;
    while( true ) {
      puVar9 = (uint *)((uint)unaff_r7 >> 0x15);
      in_CY = ((uint)puVar6 & 0x200) != 0;
      unaff_r5 = (int)puVar6 << 0x17;
      in_NG = unaff_r5 < 0;
      in_ZR = unaff_r5 == 0;
      puVar6 = unaff_r4;
LAB_2c44e966:
      uVar2 = *puVar6;
      unaff_r4 = puVar6 + 2;
      if (in_NG == '\0') break;
      if (!(bool)in_ZR && in_NG == in_OV) {
        iVar3 = (int)param_1 >> 5;
        puVar1 = (undefined4 *)(param_1 + (int)puVar9);
        uVar2 = -iVar3;
        coprocessor_loadlong(0xc,in_cr3,param_4 + 0x3cc);
        *(undefined4 *)(param_4 + 0x18) = _LAB_2c44ec90;
        puVar1[0x16] = iVar3;
        uVar4 = (uint)(short)((ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff);
        if (uVar2 != 0) {
          *(char *)(iVar3 + 10) = (char)unaff_r6;
          *(uint *)((int)register0x00000054 + 0x30) = uVar4;
          coprocessor_function(2,3,2,in_cr11,in_cr3,in_cr1);
          *(short *)(unaff_r6 + 0x38) = (short)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_2c44e9d8;
      }
      if (unaff_r5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG != '\0') {
        *(char *)(puVar6 + 4) = (char)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar7 = puVar9[5];
      unaff_r7 = (uint *)puVar9[6];
      unaff_r6 = uVar7 + 4;
      *unaff_r7 = param_1;
      unaff_r7[1] = (uint)unaff_r7;
      *(char *)((int)unaff_r7 + 0x1a) = (char)uVar2;
      puVar6 = (uint *)(uVar4 >> 0x19);
      unaff_r4 = *(uint **)(uVar7 + 0x50);
      uVar4 = uVar4 << 2;
      *puVar6 = uVar2;
      puVar6[1] = uVar4;
      puVar6[2] = uVar5;
      puVar6[3] = (uint)unaff_r4;
      puVar6[4] = (uint)puVar6;
      puVar6[5] = unaff_r6;
      puVar6[6] = (uint)unaff_r7;
      if (param_1 != 0) {
        *(char *)(puVar6 + 1) = (char)uVar2;
        goto LAB_2c44e9fa;
      }
      puVar9 = unaff_r4 + 1;
      in_OV = SBORROW4((int)unaff_r7,0xed);
      unaff_r4 = (uint *)0x0;
      param_4 = _LAB_2c44ea74;
      if (*puVar9 != 0) {
        *(char *)(unaff_r6 + _LAB_2c44ea74) = (char)unaff_r7;
        uVar4 = (uint)unaff_r7 >> 0x1f;
        unaff_r6 = *unaff_r7;
        param_4 = 0x2c44ed48;
        puVar1 = (undefined4 *)0x0;
LAB_2c44e9d8:
        uVar8 = puVar1[2];
        *(short *)((uint)*(ushort *)(unaff_r6 + 0x10) + (uint)(((uint)puVar1 >> 0x1a & 1) != 0) +
                  0x2a404) = (short)*puVar1;
        *(short *)(param_4 + 0x12) = (short)uVar8;
                    /* WARNING: Could not recover jumptable at 0x2c44e9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((code *)((int)register0x00000054 + 0x98),uVar4);
        return;
      }
    }
    coprocessor_loadlong(4,in_cr3,unaff_r10 + 0x3ac);
    uVar2 = _LAB_2c44ec78;
    uVar4 = _LAB_2c44ed00;
    if ((bool)in_CY && !(bool)in_ZR) {
LAB_2c44e9fa:
      uVar5 = unaff_r6 * 0x400;
      puVar9 = (uint *)unaff_r4[0xf];
      *puVar9 = param_1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar4;
      puVar9[3] = (uint)unaff_r4;
      puVar9[4] = uVar5;
      puVar9[5] = (uint)puVar9;
      *(short *)(*(int *)(uVar5 + 0x68) + 0x30) = (short)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_CY = (uint *)0xffffffda < puVar9;
    in_OV = SCARRY4((int)puVar9,0x25);
    unaff_r7 = (uint *)((int)puVar9 + 0x25);
    in_ZR = 0;
    in_NG = '\0';
    *(int *)(param_1 + 0xc) = unaff_r5;
    register0x00000054 = (BADSPACEBASE *)UNRECOVERED_JUMPTABLE;
  } while( true );
}

