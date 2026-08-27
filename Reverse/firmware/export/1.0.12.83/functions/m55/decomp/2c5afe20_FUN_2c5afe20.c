/* FUN_2c5afe20 @ 0x2c5afe20 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5afe20(undefined4 param_1,int *param_2,int *param_3)

{
  undefined1 *apuStack_88 [2];
  undefined1 auStack_80 [16];
  undefined1 *apuStack_70 [2];
  undefined1 auStack_68 [76];
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c5aff10;
  apuStack_88[0] = auStack_80;
  FUN_2c5afabc(apuStack_88,*param_2,param_2[1] + *param_2);
  apuStack_70[0] = auStack_68;
  FUN_2c5afabc(apuStack_70,*param_3,param_3[1] + *param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

