/* FUN_2c46c1b4 @ 0x2c46c1b4 */

/* WARNING: Possible PIC construction at 0x2c46c1ca: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c24e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c26a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c46c294) */
/* WARNING: Removing unreachable block (ram,0x2c46c26e) */
/* WARNING: Removing unreachable block (ram,0x2c46c2c2) */
/* WARNING: Removing unreachable block (ram,0x2c46c274) */
/* WARNING: Removing unreachable block (ram,0x2c46c252) */
/* WARNING: Removing unreachable block (ram,0x2c46c258) */
/* WARNING: Removing unreachable block (ram,0x2c46c230) */
/* WARNING: Removing unreachable block (ram,0x2c46c298) */
/* WARNING: Removing unreachable block (ram,0x2c46c234) */
/* WARNING: Removing unreachable block (ram,0x2c46c2a6) */
/* WARNING: Removing unreachable block (ram,0x2c46c2f4) */
/* WARNING: Removing unreachable block (ram,0x2c46c246) */
/* WARNING: Removing unreachable block (ram,0x2c46c1ce) */
/* WARNING: Removing unreachable block (ram,0x2c46c2d8) */
/* WARNING: Removing unreachable block (ram,0x2c46c2e0) */
/* WARNING: Removing unreachable block (ram,0x2c46c1d6) */
/* WARNING: Removing unreachable block (ram,0x2c46c1d8) */
/* WARNING: Removing unreachable block (ram,0x2c46c1de) */
/* WARNING: Removing unreachable block (ram,0x2c46c1e0) */
/* WARNING: Removing unreachable block (ram,0x2c46c1e2) */
/* WARNING: Removing unreachable block (ram,0x2c46c30e) */
/* WARNING: Removing unreachable block (ram,0x2c46c2fc) */
/* WARNING: Removing unreachable block (ram,0x2c46c31a) */
/* WARNING: Removing unreachable block (ram,0x2c46c2ac) */
/* WARNING: Removing unreachable block (ram,0x2c46c2d4) */
/* WARNING: Removing unreachable block (ram,0x2c46c2b0) */
/* WARNING: Removing unreachable block (ram,0x2c46c2b2) */
/* WARNING: Removing unreachable block (ram,0x2c46c1ea) */
/* WARNING: Removing unreachable block (ram,0x2c46c206) */
/* WARNING: Removing unreachable block (ram,0x2c46c266) */
/* WARNING: Removing unreachable block (ram,0x2c46c20a) */
/* WARNING: Removing unreachable block (ram,0x2c46c2e2) */
/* WARNING: Removing unreachable block (ram,0x2c46c210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c46c1b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_d4 [128];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  uStack_44 = _LAB_2c46c31c;
  uStack_48 = 0x2c46c1cf;
  iStack_54 = *_LAB_2c46a594;
  uStack_50 = param_2;
  uStack_4c = param_1;
  uStack_40 = param_3;
  uStack_3c = param_4;
  uStack_34 = param_3;
  uVar1 = FUN_2c66de7c(auStack_d4,0x80,_LAB_2c46c31c,&uStack_40,&uStack_40);
  FUN_2c46a48c(param_2,auStack_d4,uVar1);
  if (*_LAB_2c46a594 == iStack_54) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

