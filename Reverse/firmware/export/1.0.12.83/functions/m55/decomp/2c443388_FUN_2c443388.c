/* FUN_2c443388 @ 0x2c443388 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c40b266) */

void FUN_2c443388(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int unaff_r5;
  int unaff_r6;
  int *unaff_r7;
  int *piVar7;
  char in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined8 extraout_d6;
  undefined8 in_d6;
  undefined8 in_d21;
  int aiStack_2b8 [101];
  int iStack_124;
  uint uStack_120;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  piVar7 = &iStack_18;
  do {
    *(short *)(param_2 + 0x36) = (short)unaff_r6;
    puVar5 = &LAB_2c44371c;
    uVar3 = (undefined2)param_4;
    uRam2c443742 = uVar3;
    if (in_ZR == '\0') {
      *(char *)(param_3 + 1) = (char)unaff_r5;
      iVar4 = *unaff_r7;
      if (unaff_r5 + -0x3d < 0) {
        *(short *)(unaff_r7 + 0xb110dca) = (short)unaff_r7[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(unaff_r7[2] + 0xe) = (short)iVar4;
      *(int *)((int)unaff_r7 + iVar4 + 0xc) = param_3 + 0x8f;
      *(char *)((uint)*(byte *)(param_3 + 0x93) + iVar4) = (char)unaff_r6;
      iStack_124 = ((uint)*(byte *)((char)iVar4 + 6) - (int)(char)iVar4) + -1;
      uVar6 = (unaff_r6 >> 5) + 0x9d;
      coprocessor_storelong(0xc,in_cr1,iRam000000f7 + -0x10);
      uVar2 = *(undefined1 *)(iRam000000f7 + 7);
      *(undefined1 *)((unaff_r6 >> 5) + 0x2c443508) = 0x6b;
      uStack_120 = uVar6;
      iStack_18 = param_1;
      uStack_14 = param_2;
      iStack_10 = param_3;
      uStack_c = param_4;
      iVar4 = func_0x2cf43448(uVar2,0x2c443468,0x1d6);
      piVar7 = aiStack_2b8;
      puVar5 = (undefined1 *)(uint)*(ushort *)(aiStack_2b8[0] + 0x20);
      param_2 = uVar6 >> 0x1c;
      if (iVar4 != 0) {
        halt_baddata();
      }
      in_d6 = extraout_d6;
      if ((uVar6 >> 0x1b & 1) != 0 && param_2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x65,0x2c443386);
        (*pcVar1)();
      }
      goto LAB_2c44339c;
    }
    *(char *)((int)unaff_r7 * 2) = (char)unaff_r7;
  } while (in_OV == '\0');
  *(undefined2 *)(param_1 + 0x16) = uVar3;
LAB_2c44339c:
  piVar7[0x26] = 4;
  VectorShiftLeft(in_d21,in_d6,8,1);
  piVar7[0xd7] = (int)puVar5;
  puVar5[5] = (char)puVar5;
  software_interrupt(0xf6);
  *(uint *)(param_2 + 0x58) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

