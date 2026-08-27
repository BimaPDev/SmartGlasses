/* FUN_2c0fd198 @ 0x2c0fd198 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0fd198(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined4 *puVar3;
  
  *(undefined1 *)((int)param_4 * 2) = *(undefined1 *)(param_1 + 0xf);
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  cRam2c0fd338 = (char)param_4;
  *(char *)(unaff_r6 + 0x10) = (char)unaff_r5;
  *unaff_r5 = uVar2;
  unaff_r5[1] = 0x2c0fd338;
  unaff_r5[2] = 0x2c0fd333;
  unaff_r5[3] = param_4;
  unaff_r5[4] = unaff_r5;
  *unaff_r5 = 0x2c0fd333;
  unaff_r5[1] = unaff_r4;
  cRamc0fd3332 = (char)param_4 + -3;
  uRam581fa670 = 0x38;
  *param_4 = unaff_r4;
  param_4[1] = unaff_r5 + 2;
  puVar1 = puRam0005824a;
  *(int *)(puRam0005824a + 0x20) = unaff_r6;
  uVar2 = _Reset;
  software_bkpt(0x4d);
  puVar3 = (undefined4 *)(uint)bRam00000017;
  *puVar1 = 0x40;
  *puVar3 = uVar2;
  puVar3[1] = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

