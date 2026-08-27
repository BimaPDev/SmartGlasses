/* FUN_2c452eec @ 0x2c452eec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c452eec(uint param_1,int param_2,uint param_3,undefined4 *param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  int extraout_r3;
  int iVar7;
  int unaff_r4;
  undefined4 uVar8;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  code *unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_CY;
  char in_OV;
  char cVar9;
  ulonglong uVar10;
  undefined4 *in_stack_00000208;
  
  puVar6 = (uint *)*param_4;
  if (in_CY != '\0') {
    if (in_NG == '\0') {
      if (puVar6 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar10 = (ulonglong)CONCAT14(*(undefined1 *)(unaff_r6 + 0x1a),param_1 ^ param_3);
      iVar7 = 0;
      do {
        iVar3 = (int)uVar10;
        unaff_r6 = unaff_r6 + 0x34;
        cVar9 = SBORROW4(iVar3,0x28);
        *(short *)(*(ushort *)(iVar7 + 0x1c) + 0x18) = (short)uVar10;
        uVar10 = (*unaff_r11)(iVar3,(int)(uVar10 >> 0x20),unaff_r5 >> 0x1f,
                              *(undefined2 *)(unaff_r6 + iVar3),param_1,param_2);
        iVar7 = extraout_r3;
      } while (cVar9 == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!in_ZR && in_NG == in_OV) {
      bVar2 = *(byte *)(param_3 + 7);
      *(undefined4 *)(unaff_r4 + param_1 + 0x3c) = 0x2c453134;
      uVar4 = *(undefined4 *)(unaff_r5 + 4);
      uVar8 = *(undefined4 *)(unaff_r5 + 0xc);
      *(undefined4 *)(*(int *)(unaff_r5 + 0x10) + 0x10) = *(undefined4 *)(unaff_r5 + 8);
      *(char *)(bVar2 + 0x1e) = (char)param_3;
      *in_stack_00000208 = uVar4;
      in_stack_00000208[1] = &stack0x00000064;
      in_stack_00000208[2] = uVar8;
      in_stack_00000208[3] = 0x2c452f90;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((int)puVar6 + 0xb) = (char)param_2;
    *(char *)((int)puVar6 + 0x1f) = (char)puVar6;
    if (in_CY == '\0') {
      uVar5 = (int)*(short *)(param_2 + param_3) << 0x12;
      if (-1 < (int)uVar5) {
        return;
      }
      *puVar6 = param_1;
      puVar6[1] = uVar5;
      puVar6[2] = unaff_r7;
      *(uint *)(param_2 + 100) = unaff_r7;
      return;
    }
    uVar5 = param_1 >> 0x10;
    iVar7 = unaff_r7 * 0x8000000;
    *(char *)(uVar5 + 0x12) = (char)unaff_r7;
    if (iVar7 < 0 == SBORROW4(unaff_r7,0x8b)) {
      *(short *)(uVar5 + 0x36) = (short)param_1;
      **(int **)(param_1 + 0x24) = unaff_r5 + -0x89;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (SBORROW4(unaff_r7,0x8b)) {
      *(char *)(param_1 + 0x17) = (char)unaff_r7;
      *(char *)(uVar5 + unaff_r5) = (char)unaff_r5;
      return;
    }
    *(int *)(iVar7 + 0x78) = iVar7;
    if ((unaff_r7 >> 10 & 1) == 0 || unaff_r7 >> 0xb == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xea,0x2c452fe8);
  (*pcVar1)();
}

