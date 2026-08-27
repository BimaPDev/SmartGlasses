/* FUN_2c20cdca @ 0x2c20cdca */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c20cdca(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  char in_OV;
  undefined8 in_d0;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 unaff_d10;
  undefined8 in_d16;
  undefined8 in_d22;
  undefined8 in_d25;
  undefined1 in_stack_000002a8;
  
  *param_2 = unaff_r5;
  *param_3 = (int)param_3 << 1;
  param_3[1] = (int)param_2;
  param_3[2] = (int)param_3;
  param_3[3] = 0x2c20cdd4;
  param_3[4] = unaff_r4;
  if ((int)param_3 << 0x1f < 0 == (bool)in_OV) {
    unaff_r6 = unaff_r6 + 0x14;
  }
  else {
    *(int **)(unaff_r5 + 0x18) = param_2;
    VectorShiftRight(in_d22,1);
    *(byte *)(Reserved1 + 0x14) = Reserved1;
    in_d16 = VectorShiftRight(in_d16,1);
    if (unaff_r6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar3 = _DAT_2c20d568;
  iVar5 = unaff_r6 * 0x80 - _DAT_2c20d568;
  uVar1 = VectorGetElement(in_d0,0,2,0);
  VectorMultiplySubtract(unaff_d10,uVar1,2,0);
  if (_DAT_2c20d568 != 0) {
    uVar7 = VectorHalvingAdd(in_d2,in_d16,1,1);
    *(undefined1 *)((unaff_r6 & 0x1fff) * 0x800 + 0x1c) = 0;
    puVar6 = (undefined1 *)(iVar5 * 0x100);
    iVar4 = (unaff_r6 & 0x1fff) << 0xb;
    uVar1 = VectorGetElement(uVar7,0,2,0);
    VectorMultiplySubtract(unaff_d10,uVar1,2,0);
    uVar2 = (undefined1)(unaff_r6 * 0x80);
    if (iVar3 == 0) {
      if ((uint)(iVar5 * 0x100) < 0xe0) {
        iVar4 = unaff_r6 << 0x13;
        puVar6[9] = in_stack_000002a8;
      }
      *(uint *)(iVar4 * 2) = unaff_r6 << 0x16;
      *(undefined1 *)((int)unaff_r6 >> 0x10) = uVar2;
      VectorShiftRight(in_d25,0x23);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar6 = uVar2;
    VectorShiftRight(in_d25,0x23);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

