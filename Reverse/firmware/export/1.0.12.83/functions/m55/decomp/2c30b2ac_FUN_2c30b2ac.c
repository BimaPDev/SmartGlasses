/* FUN_2c30b2ac @ 0x2c30b2ac */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c30b2ac(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int *unaff_r5;
  undefined4 unaff_r6;
  undefined8 unaff_d10;
  undefined8 uVar4;
  undefined8 in_d27;
  
  iVar2 = *(int *)(unaff_r4 + 0x60);
  uVar4 = VectorSub(in_d27,unaff_d10,1,1);
  SatQ(uVar4,1,1);
  *(int *)(iVar2 + 0x18) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int **)(iVar2 + 4) = unaff_r5;
  *(undefined4 *)(iVar2 + 8) = unaff_r6;
  piVar1 = (int *)*unaff_r5;
  iVar3 = unaff_r5[2];
  *piVar1 = iVar2;
  piVar1[1] = iVar3;
  piVar1[2] = 0x2c30b650;
  piVar1[3] = (int)(unaff_r5 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

