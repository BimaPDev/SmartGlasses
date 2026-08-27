/* FUN_2c46c344 @ 0x2c46c344 */

/* WARNING: Possible PIC construction at 0x2c46c356: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c3ca: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c46c440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c46c3d8) */
/* WARNING: Removing unreachable block (ram,0x2c46c3dc) */
/* WARNING: Removing unreachable block (ram,0x2c46c3f8) */
/* WARNING: Removing unreachable block (ram,0x2c46c3ce) */
/* WARNING: Removing unreachable block (ram,0x2c46c3ac) */
/* WARNING: Removing unreachable block (ram,0x2c46c3d0) */
/* WARNING: Removing unreachable block (ram,0x2c46c3b2) */
/* WARNING: Removing unreachable block (ram,0x2c46c3b6) */
/* WARNING: Removing unreachable block (ram,0x2c46c35a) */
/* WARNING: Removing unreachable block (ram,0x2c46c432) */
/* WARNING: Removing unreachable block (ram,0x2c46c360) */
/* WARNING: Removing unreachable block (ram,0x2c46c396) */
/* WARNING: Removing unreachable block (ram,0x2c46c3fa) */
/* WARNING: Removing unreachable block (ram,0x2c46c400) */
/* WARNING: Removing unreachable block (ram,0x2c46c43c) */
/* WARNING: Removing unreachable block (ram,0x2c46c3a0) */
/* WARNING: Removing unreachable block (ram,0x2c46c36c) */
/* WARNING: Removing unreachable block (ram,0x2c46c3f0) */
/* WARNING: Removing unreachable block (ram,0x2c46c372) */
/* WARNING: Removing unreachable block (ram,0x2c46c3e0) */
/* WARNING: Removing unreachable block (ram,0x2c46c37c) */
/* WARNING: Removing unreachable block (ram,0x2c46c3c6) */
/* WARNING: Removing unreachable block (ram,0x2c46c386) */
/* WARNING: Removing unreachable block (ram,0x2c46c392) */
/* WARNING: Removing unreachable block (ram,0x2c46c3a4) */
/* WARNING: Removing unreachable block (ram,0x2c46c444) */
/* WARNING: Removing unreachable block (ram,0x2c46c402) */
/* WARNING: Removing unreachable block (ram,0x2c46c412) */
/* WARNING: Removing unreachable block (ram,0x2c46c424) */
/* WARNING: Removing unreachable block (ram,0x2c46c416) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c46c344(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_cc [128];
  int iStack_4c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iStack_4c = *_LAB_2c46a594;
  uStack_38 = param_3;
  uStack_34 = param_4;
  uVar1 = FUN_2c66de7c(auStack_cc,0x80,_LAB_2c46c448,&uStack_38,&uStack_38);
  FUN_2c46a48c(param_2,auStack_cc,uVar1);
  if (*_LAB_2c46a594 == iStack_4c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

