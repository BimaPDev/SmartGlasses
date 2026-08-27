/* FUN_2c437990 @ 0x2c437990 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c437990(undefined4 param_1,int param_2,int param_3,short param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_r5;
  int iVar3;
  undefined4 in_cr5;
  
  piVar2 = _LAB_2c437b04;
  if (param_3 == 0) {
    _DAT_0000006c = param_2;
    coprocessor_loadlong(0xf,in_cr5,unaff_r5);
    return CONCAT44(unaff_r5,param_1);
  }
  param_4 = param_4 + -0x95;
  *(short *)(param_3 + 0x32) = (short)param_1;
  *(short *)(param_2 + 0x22) = (short)param_3;
  param_2 = param_2 + 0x29;
  cVar1 = (char)param_4;
  if ((-0x65 < param_2) && (param_4 = 99, !SCARRY4(param_2,0x65))) {
    cRam00000066 = cVar1 - (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY4(param_2,0x65)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = piVar2[2];
  *(short *)(*piVar2 + 0xc) = param_4;
  if (0xf5 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

